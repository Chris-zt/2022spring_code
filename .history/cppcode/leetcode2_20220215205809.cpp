#include "Base.h"

class Solution
{
private:
	int m = 0, n = 0;
public:
	vector<int> luckyNumbers(vector<vector<int>> &matrix)
	{
		m = matrix.size(), n = matrix[0].size();
		vector<vector<int>> Lucky(m, vector <int>(n));
		for(int i = 0; i < m; i++)
		{
			int mini = 0;
			for(int j = 1; j < n; j++)
			{
				if(matrix[i][j] < matrix[i][mini])
				{
					mini = j;
				}
			}
			Lucky[i][j] 
		}
	}
};