/*FileName:T6_55.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Inprovement of double game.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;


unsigned int rollDice()
{
    default_random_engine engine ( static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1,6);

    int die1=randomInt( engine );
    int die2=randomInt( engine );

    int sum=die1+die2;

    cout<<"Player rolled "<<die1<<"+"<<die2<<" = "<<sum<<endl;
    return sum;
}
int main()
{
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
    return 0;
}


