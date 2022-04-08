#include"Base.h"

int main()
{
	int a = 1, b = 2, c;
	int num = 0;
	for(int i = 0; i < 100; i++)
	{
		num++;
		c = a + b;
		a = b;
		b = c;
		cout << hex << c <<"  \t";
		if(num % 4 == 0)
			cout << endl;
	}
	system("pause");
	return 0;
}