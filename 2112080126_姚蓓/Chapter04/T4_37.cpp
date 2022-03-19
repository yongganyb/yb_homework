/*
 * FileName: T4_37.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 世界人口增长
 */
#include <iostream>
using namespace std;
int main()

{
	double x = 0.05, n = 100, s, m, a = 100;
	//x为人口增长率，n为人口基数
	for (int i = 1; i <= 75; i++)
	{
		cout << "第" << i << "年 ";
	}
	cout << endl;
	for (int j = 1; j <= 75; j++)
	{
		s = n * (1.0 + x);
		n = s * 1.0;
		cout << s<<" ";
	}
	cout << endl;
	for (int k = 1; k <= 75; k++)
	{
		m = a * x;
		s = a * (1.0 + x);
		a = s * 1.0;
		cout << m << " ";
	}



	return 0;
}
