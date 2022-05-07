/*
 * FileName: T8_16.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: machine language
 */
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void halt1(int a,int b,int c,int d,int e, int arr[])
{
    cout<<"accumulator        \t"<<a<<endl;
    cout<<"instructionCounter \t"<<b<<endl;
    cout<<"instructionRegister\t"<<c<<endl;
    cout<<"operationCode      \t"<<d<<endl;
    cout<<"operand            \t"<<e<<endl;
    int h=0;
    for(;h<100;h++)
    {
        cout<<setw(5)<<setfill('0')<<internal<<arr[h]<<" ";
        if(0==(h+1)%10)
        {
            cout<<endl;
        }
    }
    cout<<endl;

}
int main()
{
    cout<<"*** Welcome to Simpletron ***"<<endl;
    cout<<endl;
    cout<<"*** Please enter your program one instruction ***"<<endl;
    cout<<"*** (or data word) at a time .I will type the ***"<<endl;
    cout<<"*** location number and a question mark(?) .  ***"<<endl;
    cout<<"*** You then type the word for that location .***"<<endl;
    cout<<"*** Type the sentinel -99999 to stop entering ***"<<endl;
    cout<<"*** your program .***"<<endl;
    int memory[100]={0};
    int a,b=0;
    int instructionCounter=0,instructionRegister,operationCode,operand=0;
    int accumulator;
    while(1)
    {
        cout<<"? ";
        cin>>a;

        if(-99999==a)
        {
            break;
        }
        memory[b]=a;
        b++;

    }
    cout<<b<<endl;
  cout<<"*** Program loading completed ***"<<endl;
  cout<<"*** Program execution begins ***"<<endl;
    while(1)
    {
        instructionRegister=memory[instructionCounter];
         instructionCounter++;
        operationCode=instructionRegister/100;
        operand=instructionRegister%100;
        switch(operationCode)
        {
        case 10:

           while(1)
           {
               cin>>a;
               if(a<9999&&a>-9999)
                break;
               else
                cout<<"please input a again"<<endl;
           }
           memory[operand]=a;break;
        case 11:
            cout<<memory[operand]<<endl;break;
        case 20:
            accumulator=memory[operand];break;
        case 21:
            memory[operand]=accumulator;break;
        case 30:
            accumulator+=memory[operand];
            if(accumulator>9999||accumulator<-9999)
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }

            break;
        case 31:
            accumulator-=memory[operand];
            if(accumulator>9999||accumulator<-9999)
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }
            break;
        case 32:
            accumulator/=memory[operand];
            if(accumulator>9999||accumulator<-9999||0==memory[operand])
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }break;
        case 33:
             accumulator*=memory[operand];break;
        case 40:
         instructionCounter=operand;break;
        case 41:
            if(accumulator<0)
                {
                    instructionCounter=operand;break;
                }
        case 42:
            if(0==accumulator)
                {
                    instructionCounter=operand;break;
                }
        case 43:
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
        case 00:
            break;
        default:
            cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;

        }

        if(11==operationCode)
        {
            break;
        }


    }
    return 0;
}
