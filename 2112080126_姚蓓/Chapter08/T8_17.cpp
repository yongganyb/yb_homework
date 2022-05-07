/*
 * FileName: T8_17.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: machine language plus
 */
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <string>
#include <cstdlib>

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
    int memory[1000]={0};
    int stend [2]={0};
    int a,b=0;
    int r,e=1;
    string num;
    string num1;
    char ty,mn;
    int sw=18;
    int ow;
    int z=0,x=0,aa,u=0,rt;
    int yu=0;
    int instructionCounter=0,instructionRegister,operationCode,operand=0;
    int accumulator;

   while(1)
    {
        cout<<"? ";
        cin>>num;
        if(-99999==stoi(num))
        {
            break;
        }
        if(4==sizeof(num))
        {
            a=stoi(num);
        }
        else
        {
            while(z<num.length())
            {
               u=num[z];
              u=u-48;
                if(u>=0&&u<9)
                {
                    aa=u;
                    x=x*10+aa;
                }
                z++;
            }
            for(int iu=1;iu<=x;iu++)
            {
                ow=num[iu];

                yu=yu*1000+ow;
                    if(0==iu%2)
                    {
                        memory[sw]=yu;
                        sw++;
                        yu=0;
                    }
                    if(0!=x%2&&iu==x)
                    {
                        memory[sw]=yu;
                    }

            }
        }
        if(-99999==a)
        {
            break;
        }

        memory[b]=a;
        b++;

    }

  cout<<"*** Program loading completed ***"<<endl;
  cout<<"*** Program execution begins ***"<<endl;
    while(1)
    {

     instructionRegister=memory[instructionCounter];
         instructionCounter++;
         if(18==operationCode) operationCode++;
        operationCode=instructionRegister/100;
        operand=instructionRegister%100;
          if(u!=0)
          {
              operationCode=18;
              rt=u;
              u=0;
          }

        switch(operationCode)
        {
        case 10:

           while(1)
           {
               cin>>a;
               if(a<99999&&a>-99999)
                break;
               else
                cout<<"please input a again"<<endl;
           }
           memory[operand]=a;
           stend[e]=a;
           break;
        case 11:
            cout<<memory[operand]<<endl;break;
        case 15://求模
           r=stend[0]/stend[1];
           e=stend[0]-r*stend[1];
           cout<<e<<endl;
           break;
        case 16://求幂
            for(int gh=0;gh<stend[1];gh++)
            {
                e=e*stend[0];
            }
            cout<<e<<endl;
            break;
        case 17://输出换行符
            cout<<"\n";
            break;
        case 18:
            for(int re=0;re<=rt;re++)
            {
                ty=memory[18+re]/1000;
                mn=memory[18+re]%1000;
                 if(0!=rt%2&&re==rt)
                 {
                     cout<<ty;
                     break;
                 }
                cout<<ty<<mn;
            }
            cout<<endl;
             break;
        case 20:
            accumulator=memory[operand];break;
        case 21:
            memory[operand]=accumulator;break;
        case 30:
            accumulator+=memory[operand];
            if(accumulator>99999||accumulator<-99999)
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }

            break;
        case 31:
            accumulator-=memory[operand];
            if(accumulator>99999||accumulator<-99999)
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }
            break;
        case 32:
            accumulator/=memory[operand];
            if(accumulator>99999||accumulator<-99999||0==memory[operand])
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
        case 44:
            {
                if(0==operand)
                halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            }

        case 00:
            break;
        default:
            cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;

        }

        if(0==b)
        {
            break;
        }
        b--;


    }
    //第d小问
    /*
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
    int memory[3E8]={0};
    int stend [2]={0};
    int a,b=0;
    int r,e=1;
    int instructionCounter=0,instructionRegister,operationCode,operand=0;
    int accumulator;
    while(1)
    {
        cout<<"? ";
        cin>>a;

        if(-1869F==a)
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
        operationCode=instructionRegister/64;
        operand=instructionRegister%64;
        switch(operationCode)
        {
        case 10:

           while(1)
           {
               cin>>a;
               if(a<270F&&a>-270F)
                break;
               else
                cout<<"please input a again"<<endl;
           }
           memory[operand]=a;
           stend[e]=a;
           break;
        case B:
            cout<<memory[operand]<<endl;break;
        case E://求模
           r=steng[0]/stend[1];
           e=stend[0]-r*stend[][1];
           cout<<e<<endl;
           break;
        case F://求幂
            for(int gh=0;gh<stend[1];gh++)
            {
                e=e*stend[0];
            }
            cout<<e<<endl;
            break;
        case 11://输出换行符
            cout<<"\n";
            break;
        case 14:
            accumulator=memory[operand];break;
        case 15:
            memory[operand]=accumulator;break;
        case 1E:
            accumulator+=memory[operand];
            if(accumulator>270F||accumulator<-270F)
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }

            break;
        case 1F:
            accumulator-=memory[operand];
            if(accumulator>9999||accumulator<-9999)
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }
            break;
        case 20:
            accumulator/=memory[operand];
            if(accumulator>9999||accumulator<-9999||0==memory[operand])
            {
                cout<<"*** Attempt to divide by Zero ***"<<endl;
            cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
            halt1(accumulator,instructionCounter,instructionRegister,operationCode,operand,memory);
            break;
            }break;
        case 21:
             accumulator*=memory[operand];break;
        case 28:
         instructionCounter=operand;break;
        case 29:
            if(accumulator<0)
                {
                    instructionCounter=operand;break;
                }
        case 2A:
            if(0==accumulator)
                {
                    instructionCounter=operand;break;
                }
        case 2B:
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
    */
    //第f小问
   /*
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
    double memory[100]={0};
    double a,b=0;
    int instructionCounter=0,instructionRegister,operationCode,operand=0;
    double accumulator;
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
*/
//第g小问
/*

*/
    return 0;
}

