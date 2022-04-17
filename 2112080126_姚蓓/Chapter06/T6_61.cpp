/*
 * FileName: T6_61.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 计算机辅助教学：问题分类
 */
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int times_1(int x)
{
    srand((unsigned)time(NULL));
    int n_1=pow(10,x);
    int a=(rand()%(n_1))+1;
    int b=(rand()%(n_1))+1;
    int n=a+b;
    cout<<"How much is "<<a<<" + "<<b<<"?"<<endl;
    return n;
}
int times_2(int x)
{
    srand((unsigned)time(NULL));
    int n_1=pow(10,x);
    int a=(rand()%(n_1))+1;
    int b=(rand()%(n_1))+1;
    int n=a-b;
    cout<<"How much is "<<a<<" - "<<b<<"?"<<endl;
    return n;
}
int times_3(int x)
{
    srand((unsigned)time(NULL));
    int n_1=pow(10,x);
    int a=(rand()%(n_1))+1;
    int b=(rand()%(n_1))+1;
    int n=a*b;
    cout<<"How much is "<<a<<" * "<<b<<"?"<<endl;
    return n;
}
int times_4(int x)
{
    srand((unsigned)time(NULL));
    int n_1=pow(10,x);
    int a=(rand()%(n_1))+1;
    int b=(rand()%(n_1))+1;
    int n=a/b;
    cout<<"How much is "<<a<<" / "<<b<<"?"<<endl;
    return n;
}
int main()
{
    srand((unsigned)time(NULL));
    cout<<"请输入运算类型（1或2或3或4或5）：";
    int type;
    cin>>type;
    cout<<"请输入运算难度：";
    int rate;
    cin>>rate;
    switch(type)
    {
    case 1:
    {
        for(int i=1; ; i++)
        {
            int m=times_1(rate);
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
        break;

    }
    case 2:
    {
        for(int i=1; ; i++)
        {
            int m=times_2(rate);
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
        break;

    }
    case 3:
    {
        for(int i=1; ; i++)
        {
            int m=times_3(rate);
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
        break;

    }
    case 4:
    {
        for(int i=1; ; i++)
        {
            int m=times_4(rate);
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
        break;

    }
    case 5:
    {
        for(int i=1; ; i++)
        {
            int five=(rand()%4)+1;
            int m;
            switch(five)
            {
            case 1:
                m=times_1(rate);
                break;
            case 2:
                m=times_2(rate);
                break;
            case 3:
                m=times_3(rate);
                break;
            case 4:
                m=times_4(rate);
                break;
            }
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
        break;
    }

    }

    return 0;

}

