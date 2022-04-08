#include"Base.h"

int main()
{
	fstream myfile, file;
	myfile.open("W:\\WorkPlace\\2022spring_code\\tmp\\wordbook0.txt", ios::in);
	file.open("W:\\WorkPlace\\2022spring_code\\tmp\\1.txt", ios::out);


	string buf;
	while (getline(myfile, buf))
	{
		for(int i = 0; i < buf.size(); i++)
		{
			if(buf[i] <= 'z' && buf[i] >= 'a')
				file << buf[i];
			else
			{
				if()
				break;
			}
		}
	}


	system("spause");
	return 0;
}