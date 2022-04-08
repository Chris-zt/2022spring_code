#include "Base.h"

int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator p;
	p = find(v.begin(), v.end(), 3);
	cout << *p << endl;

	system("pause");
	return 0;
}