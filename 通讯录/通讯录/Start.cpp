#include"Start.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
Start::Start()
{}
void Start::Display()
{
	fstream in("F:\\person.txt");
	if (!in)
	{
		cout << "Cannot open the file\n";
		return;
	}
	int n;
	while (true)
	{
		cout << "*********************************************\n";
		cout << "*               ͨ��¼����ϵͳ              *\n";
		cout << "*                                           *\n";
		cout << "*               1. ���ͨ��¼               *\n";
		cout << "*               2. ɾ��ͨ��¼               *\n";
		cout << "*               3. ��ʾͨ��¼               *\n";
		cout << "*               4. �޸�ͨ��¼               *\n";
		cout << "*               5. ����ͨ��¼               *\n";
		cout << "*               6. ����ͨ��¼               *\n";
		cout << "*               7. �˳�                     *\n";
		cout << "*********************************************\n";
		cout << "\n������(1 ~ 7): ";
		cin >> n;
		if (n == 1)Insert();
		if (n == 2)Delete();
		if (n == 3)output();
		if (n == 4)Modify();
		if (n == 5)Sort();
		if (n == 6)Search();
		if (n == 7)break;
		if (n <= 0 || n >= 8)continue;
	}
	in.close();
}
