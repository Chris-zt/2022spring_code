#include "Base.h"

void myPrint(int val)
{
	cout << val << endl;
}

int main()
{
	vector<vector<int>> vv;
	vector<int> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 1; i < 5; i++)
	{
		v.push_back(i);
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	vv.push_back(v);
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	vv.push_back(v4);

	for (vector<int>::iterator p1 = v.begin(); p1 != v.end(); p1++)
	{
		cout << *p1 << ",";
	}
	cout << endl;

	for (vector<int>::reverse_iterator r = v.rbegin(); r != v.rend(); r++)
	{
		cout << *r << ",";
	}
	cout << endl;

	for_each(v.begin(), v.end(), myPrint);

	for (vector<vector<int>>::iterator p = vv.begin(); p != vv.end(); p++)
	{
		for(vector<int>::iterator t = (*p).begin(); t != (*p).end(); t++)
		{
			cout << *t << ",";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}