#include<iostream>
using namespace std;
#include<string>

class Person
{
protected:
	string name;
	string jp;
	string sex;
	string comp;
	string addr;
	int tele;
	int mobile;
	string email;
	string note;
public:
	Person()
	{}
	string getname();
	string getjp();
	string getsex();
	string getcomp();
	string getaddr();
	int gettele();
	int getmobile();
	string getemail();
	string getnote();
};

string Person::getname()
{
	return name;
}
string Person::getjp()
{
	return jp;
}
string Person::getsex()
{
	return sex;
}
string Person::getcomp()
{
	return comp;
}
string Person::getaddr()
{
	return addr;
}
int Person::gettele()
{
	return tele;
}
int Person::getmobile()
{
	return mobile;
}
string Person::getemail()
{
	return email;
}
string Person::getnote()
{
	return note;
}
