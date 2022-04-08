#include"Base.h"

void writefile()
{
	ofstream outfile;
	outfile.open("W:\\2021Winter\\tmp\\temp.txt", ios::out);
	if(!outfile.is_open())
	{
		cout << "ERROR" << endl;
	}
	int a = 1, b = 1, c;
	outfile << a << "\t";
	for(int j = 2; j <= 100; j++)
	{
		c = a + b;
		a = b;
		b = c;
		outfile << a << "\t";
		if(! (j%5))
			outfile << "\n";
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

