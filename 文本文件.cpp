//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//void test01()
//{
//	ofstream ofs;
//	ofs.open("text.txt",ios::out);
//	ofs << "姓名：" << "Jack" << endl;
//	ofs << "性别：" << "男" << endl;
//	ofs << "年龄：" << "20" << endl;
//	ofs.close();
//}
//void test02()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败！" << endl;
//		return;
//	}
//	//读文件
//	//第一种
//	//string buf;
//	//while (getline(ifs, buf)) {
//	//	cout << buf << endl;
//	//	}
//	//第二种
//	//char f[1024] = { 0 };
//	//while (ifs >> f) {
//	//	cout << f << endl;
//	//}
//	////第三种
//	//char ff[1024] = { 0 };
//	//while (ifs.getline(ff, sizeof(ff)))
//	//	cout << ff << endl;
//	//第四种
//	char s;
//	while ((s = ifs.get()) != EOF)
//		cout << s;
//	ifs.close();
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}