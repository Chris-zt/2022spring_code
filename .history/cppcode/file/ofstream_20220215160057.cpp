#include"Base.h"

void test01()
{
	ofstream ofs;
	ofs.open("W:\\WorkPlace\\2022spring_code\\cppcode\\file\\test.txt", ios::out);


	ofs << "name:zhangshan" << endl;
	ofs << "sex:male" << endl;
	ofs << "age:18" << endl;

	

	ofs.close();
}

int main() {

	test01();

	system("pause");

	return 0;
}