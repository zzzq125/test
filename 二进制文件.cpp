#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�������ļ����Զ��������͵����ݣ������Զ�����������ͣ�
class Person {
public:
	char m_name[20];
	int m_Age;
};
//д�ļ�
void test01()
{
	ofstream ofs;
	ofs.open("person.txt",ios::out|ios::binary );
	Person p = { "Tom",20 };
	//д�����
	ofs.write((const char*)&p,sizeof(p));

	ofs.close();

}
//���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p,sizeof(p));
	cout << p.m_name <<"  " << p.m_Age << endl;
	ifs.close();

}
int main()
{
	//test01();
	test02();
	
	return 0;
}