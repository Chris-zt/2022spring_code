//删除云单词本中的重复单词

#include "Base.h"

int main()
{
	fstream myfile, file;
	myfile.open("W:\\WorkPlace\\2022spring_code\\tmp\\wordbook0.txt", ios::in);
	file.open("W:\\WorkPlace\\2022spring_code\\tmp\\1.txt", ios::out);

	string buf[1024];
	for (int j = 0; j < 1024 && getline(myfile, buf[j]); j++)	{}

	system("spause");
	return 0;
}