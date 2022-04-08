//删除云单词本中的重复单词

#include "Base.h"
int check(string a, string b);

int main()
{
	fstream myfile, file;
	myfile.open("W:\\WorkPlace\\2022spring_code\\tmp\\wordbook0.txt", ios::in);
	file.open("W:\\WorkPlace\\2022spring_code\\tmp\\1.txt", ios::out);

	string buf[1024];
	int j = 0;
	for (j = 0; j < 1024 && getline(myfile, buf[j]); j++)
	{
	}
	cout << "First -- words number :: " << j << endl;

	int number = 0;
	int k;
	for (int i = 0; i < j; i++)
	{
		for (k = i + 1; k < j; k++)
		{
			int t = check(buf[i], buf[k]);
			if (t)
				break;
		}
		if (k == j)
		{
			file << buf[i] << endl;
			number++;
		}
	}
	cout << "Second -- words number :: " << number << endl;

	system("pause");
	return 0;
}

int check(string a, string b)
{ //如果两个字符串相等，返回1，否则，返回0.
	if (a.size() == b.size())
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i])
				return 0;
		}
	}
	else
		return 0;
	return 1;
}
