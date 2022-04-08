#include"W:\\2021Winter\\cppcode\\Base.h"

int main()
{
	vector<int> Arr (3);

	cout << "Size:" << Arr.size() << endl;
	for(int i = 0; i < Arr.size(); i++)
	{
		cout << Arr[i] << endl;
	}

	int anotherNum;
	cin >> anotherNum;
	Arr.push_back(anotherNum);

	cout << "Size:" << Arr.size() << endl;
	cout << "Last number:" << Arr[Arr.size() - 1] << endl;

	system("pause");
	return 0;
}