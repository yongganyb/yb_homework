/*
 * FileName: T4_36.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ʹ�ü���ϵͳ��ǿ��˽
 */
#include <iostream>
using namespace std;
int main()

{
	int n, a, b, c, d;
	cout << "����һ����λ����: ";
	cin >> n;
	a = (n / 1000 + 7) % 10;
	b = (n / 100 % 10 + 7) % 10;
	c = (n % 100 / 10 + 7) % 10;
	d = (n % 10 + 7) % 10;
	n = c * 1000 + d * 100 + a * 10 + b;
	cout << "������ܵ���λ����: " << c << d << a << b << endl;
	a = (a + 3) % 10;
	b = (b + 3) % 10;
	c = (c + 3) % 10;
	d = (d + 3) % 10;
	n = a * 1000 + b * 100 + c * 10 + d;
	cout << "������ܵ���λ����: " << a << b << c << d << endl;
	return 0;
}
