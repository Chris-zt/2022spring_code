//ɾ���Ƶ��ʱ��е��ظ�����

#include "Base.h"
int check(string a, string b);

int main()
{
	fstream myfile, file;
	myfile.open("W:\\WorkPlace\\2022spring_code\\tmp\\wordbook0.txt", ios::in);
	file.open("W:\\WorkPlace\\2022spring_code\\tmp\\1.txt", ios::out);

	set <string> words;
	string buf;
	int number = 0;
	while (getline(myfile, buf))
	{
		number++;
		words.insert(buf);
	}
	
	cout << "Initial words number : " << number << endl;
	cout << "Later words number : " << words.size() << endl;
	for(set<string>::iterator it = )


	system("pause");
	return 0;
}

int check(string a, string b)
{ //��������ַ�����ȣ�����1�����򣬷���0.
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
