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
	void Run();//���г���
	void output();//��ʾȫ����ϵ��
	void Printone(set<Person>::iterator p);//��ӡĳ����ϵ����Ϣ
	void Insert();//���
	void Search();//����
	void Modify();//�޸�
	void Delete();//ɾ��
	void Sort();//����
	void Display();//�˵�ҳ��
};
