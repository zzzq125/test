//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//void test01()
//{
//	ofstream ofs;
//	ofs.open("text.txt",ios::out);
//	ofs << "������" << "Jack" << endl;
//	ofs << "�Ա�" << "��" << endl;
//	ofs << "���䣺" << "20" << endl;
//	ofs.close();
//}
//void test02()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ�ܣ�" << endl;
//		return;
//	}
//	//���ļ�
//	//��һ��
//	//string buf;
//	//while (getline(ifs, buf)) {
//	//	cout << buf << endl;
//	//	}
//	//�ڶ���
//	//char f[1024] = { 0 };
//	//while (ifs >> f) {
//	//	cout << f << endl;
//	//}
//	////������
//	//char ff[1024] = { 0 };
//	//while (ifs.getline(ff, sizeof(ff)))
//	//	cout << ff << endl;
//	//������
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