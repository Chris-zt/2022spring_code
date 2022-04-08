#include"Base.h"

int main()
{
	vector<int> Arr(100);

	cout << "Size of Arr : " << Arr.size() << endl;

	Arr[100] = 2;
	cout << "Size of Arr : " << Arr.size() << endl;

	system("pause");
	return 0;
}