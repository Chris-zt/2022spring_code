#include"Base.h"

void test01()
{
	ifstream ifs;
	ifs.open("W:\\2021Winter\\cppcode\\file\\test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "open file failed" << endl;
		return;
	}

	//��һ�ַ�ʽ
	// char buf[1024] = { 0 };
	// while (ifs >> buf)
	// {
	// 	cout << buf << endl;
	// }
	// cout << endl;

	//�ڶ���
	// char buf[1024] = { 0 };
	// while (ifs.getline(buf,sizeof(buf)))
	// {
	// 	cout << buf << endl;
	// }

	//������
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//�����֣����Ƽ���
	// char c;
	// while ((c = ifs.get()) != EOF)
	// {
	// 	cout << c;
	// }

	// ifs.close();

}

int main() {

	test01();

	system("pause");

	return 0;
}