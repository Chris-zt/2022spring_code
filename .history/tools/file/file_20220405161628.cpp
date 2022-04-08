#include"Base.h"

void writefile()
{
	ofstream outfile;
	outfile.open("W:\\WorkPlace\\2022spring_code\\tools\\temp\\temp.txt", ios::out);
	if(!outfile.is_open())
	{
		cout << "ERROR" << endl;
	}
	for(int i = 0; i < 10; i++)
	{
		outfile << "\t\ta = 4"
	}
	outfile.close();
}

void readfile()
{
	ifstream infile;
	infile.open("W:\\2021Winter\\tmp\\temp.txt", ios::out);

}

int main()
{
	
	system("pause");
	return 0;
}

