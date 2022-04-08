#include "Base.h"

template <typename T1>
T1 my_max(T1 a, T1 b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	float x = 200.2, y = 200;
	cout << my_max<double>(x, y) << endl;

	system("pause");
	return 0;
}