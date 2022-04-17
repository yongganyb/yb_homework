/*FileName:T6_48.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Design a double dice game.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

unsigned int rollDice()
{
    int die1=1+rand()%6;
    int die2=1+rand()%6;

    int sum=die1+die2;

    cout<<"Player rolled "<<die1<<"+"<<die2<<" = "<<sum<<endl;
    return sum;
}
int main()
{
    int bankBalance=1000,wager;
    cout<<"Input wager: ";
    cin>>wager;
    while(wager>1000)
    {
        cout<<"Input legal wager(1-1000 ):";
        cin>>wager;
    }
    enum Status {CONTINUE, WON, LOST};
    srand( static_cast<unsigned int>(time(0)));

    unsigned int myPoint =0;
    Status gameStatus = CONTINUE;
    unsigned int sumOfDice=rollDice();

    switch(sumOfDice)
    {
    case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is "<<myPoint<<endl;
        break;
    }
    while(CONTINUE==gameStatus)
    {
        sumOfDice=rollDice();
        if(sumOfDice==myPoint)
            gameStatus=WON;
        else
            if(sumOfDice==7)
            gameStatus=LOST;
    }
    if(WON==gameStatus)
    {
        cout<<"Player wins"<<endl;
        bankBalance+=wager;
        cout<<"bankBalance is:"<<bankBalance<<endl;
    }
    else {

            cout<<"Player loses"<<endl;
    bankBalance-=wager;
        cout<<"bankBalance is:"<<bankBalance<<endl;
        if(0==bankBalance) cout<<"Sorry.You busted!"<<endl;

        }



    return 0;
}


