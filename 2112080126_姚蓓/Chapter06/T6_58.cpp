/*
 * FileName: T6_58.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 计算机辅助教学：消除学生疲劳
 */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int times()
{
    srand((unsigned)time(NULL));
    int a=(rand()%9)+1;
    int b=(rand()%9)+1;
    int n=a*b;
    cout<<"How much is "<<a<<" times "<<b<<"?"<<endl;
    return n;
}
int main()
{
    srand((unsigned)time(NULL));
    for(int i=1; ; i++)
    {
        int m=times();
        int k;
        cin>>k;
        if(k!=m)
        {
            int x_1=(rand()%4)+1;
            switch(x_1)
            {
            case 1:
                cout<<"No.Please try again."<<endl;
                break;
            case 2:
                cout<<"Wrong.Try once more."<<endl;
                break;
            case 3:
                cout<<"Don't give up!"<<endl;
                break;
            case 4:
                cout<<"No.Keep trying."<<endl;
                break;

            }
            for(int j=1; ; j++)
            {
                cin>>k;
                if(k==m) break;
                if(k!=m)
                {
                    int x_2=(rand()%4)+1;
                    switch(x_2)
                    {
                    case 1:
                        cout<<"No.Please try again."<<endl;
                        break;
                    case 2:
                        cout<<"Wrong.Try once more."<<endl;
                        break;
                    case 3:
                        cout<<"Don't give up!"<<endl;
                        break;
                    case 4:
                        cout<<"No.Keep trying."<<endl;
                        break;

                    }

                }
            }
        }
        if(k==m)
        {
            int x_3=(rand()%4)+1;
            switch(x_3)
            {
            case 1:
                cout<<"Very good!"<<endl;
                break;
            case 2:
                cout<<"Excellent!"<<endl;
                break;
            case 3:
                cout<<"Nice work!"<<endl;
                break;
            case 4:
                cout<<"Keep up the good work!"<<endl;
                break;

            }

        }



    }
    return 0;

}

