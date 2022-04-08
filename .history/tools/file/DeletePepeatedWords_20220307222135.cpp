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
	for (j = 0; j < 1024 && getline(myfile, buf[j]); j++)	{}
	cout << "First -- words number :: " << j;




	system("spause");
	return 0;
}


int check(string a, string b)
{
	if(a.size() )
}

