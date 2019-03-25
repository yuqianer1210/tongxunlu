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
		cout << "*               通信录管理系统              *\n";
		cout << "*                                           *\n";
		cout << "*               1. 添加通信录               *\n";
		cout << "*               2. 删除通信录               *\n";
		cout << "*               3. 显示通信录               *\n";
		cout << "*               4. 修改通信录               *\n";
		cout << "*               5. 排序通信录               *\n";
		cout << "*               6. 查找通信录               *\n";
		cout << "*               7. 退出                     *\n";
		cout << "*********************************************\n";
		cout << "\n请输入(1 ~ 7): ";
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
