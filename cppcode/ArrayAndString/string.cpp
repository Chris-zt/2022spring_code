#include"w:\\2021winter\\cppcode\\Base.h"


int main()
{
	string A ("Hellow String!");
	cout << A << endl;

	cout << "Enter a line of text :" << endl;
	string B;
	getline(cin, B);

	string C;
	getline(cin, C);

	string D = A + "\n" + B + "\n" + C ;
	cout << "A + B + C" << endl;
	cout << D << endl;

	system("pause");
	return 0;
}