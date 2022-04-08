#include"Base.h"

int main()
{
	string str1();
	string str2("abcde");
	string str3 = str2;
	string str4(5, '6');
	const char* s = "qwerty";
	string str5(s);

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;

	system("pause");
	return 0;
}