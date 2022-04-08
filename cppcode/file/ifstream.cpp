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

	//第一种方式
	// char buf[1024] = { 0 };
	// while (ifs >> buf)
	// {
	// 	cout << buf << endl;
	// }
	// cout << endl;

	//第二种
	// char buf[1024] = { 0 };
	// while (ifs.getline(buf,sizeof(buf)))
	// {
	// 	cout << buf << endl;
	// }

	//第三种
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//第四种（不推荐）
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