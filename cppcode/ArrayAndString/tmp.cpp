#include "Base.h"
class Solution
{
public:
	int romanToInt(string s)
	{
		int num = 0;
		int l = s.size();
		for (int i = 0; i < l; i++)
		{
			switch (s[i])
			{
			case 'I':
				num += 1;
				break;
			case 'V':
				num += 5;
				break;
			case 'X':
				num += 10;
				break;
			case 'L':
				num += 50;
				break;
			case 'C':
				num += 100;
				break;
			case 'D':
				num += 500;
				break;
			case 'M':
				num += 1000;
				break;
			default:
				break;
			}
		}
		for (int i = 0; i < l - 1; i++)
		{
			if (s[i] == 'I')
				if (s[i + 1] == 'V' || s[i + 1] == 'X')
					num -= 2;
			if (s[i] == 'X')
				if (s[i + 1] == 'L' || s[i + 1] == 'C')
					num -= 20;
			if (s[i] == 'C')
				if (s[i + 1] == 'D' || s[i + 1] == 'M')
					num -= 200;
		}
		return num;
	}
};

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << i << "*" << j << "=" << i * j << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}