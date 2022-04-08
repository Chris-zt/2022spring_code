#include "Base.h"

int main()
{
	string str1 = "qwert";
	string str2("asdfg hjkl");
	string str3("asdfg hjkl", 3);
	string str4 = str1;
	string str5;
	str5.assign(10, '6');

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;

	system("pause");
	return 0;
}