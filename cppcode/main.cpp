#include"Base.h"
#include"leetcode.cpp"

int main()
{
	vector<vector<int>> grid = {{5,3,36,26,27},{11,31,23,30,4},{5,7,21,38,10},{39,30,10,17,13},{16,0,0,26,1},{25,0,10,0,0}};
	Solution t;
	cout << t.getMaximumGold(grid) << endl;
	system("pause");
	return 0;
}