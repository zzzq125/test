#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//二进制文件可以对任意类型的数据（包括自定义的数据类型）
class Person {
public:
	char m_name[20];
	int m_Age;
};
//写文件
void test01()
{
	ofstream ofs;
	ofs.open("person.txt",ios::out|ios::binary );
	Person p = { "Tom",20 };
	//写入操作
	ofs.write((const char*)&p,sizeof(p));

	ofs.close();

}
//读文件
void test02()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
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