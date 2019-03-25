#include"people.h"
#include<set>
using namespace std;
class Start
{
	protected:
		set<Person>pe;
public:
	Start()
	{}
	void Run();//运行程序
	void output();//显示全部联系人
	void Printone(set<Person>::iterator p);//打印某个联系人信息
	void Insert();//添加
	void Search();//查找
	void Modify();//修改
	void Delete();//删除
	void Sort();//排序
	void Display();//菜单页面
};
