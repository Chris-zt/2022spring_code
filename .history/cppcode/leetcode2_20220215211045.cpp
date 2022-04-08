#include "Base.h"

class Solution
{
private:
	int m = 0, n = 0;
	vector <int> res;
public:
	vector<int> luckyNumbers(vector<vector<int>> &matrix)
	{
		m = matrix.size(), n = matrix[0].size();
		vector <int> Lucky(m);
		for(int i = 0; i < m; i++)
		{
			int minj = 0;
			for(int j = 1; j < n; j++)
			{
				if(matrix[i][j] < matrix[i][mini])
				{
					minj = j;
				}
			}
			Lucky[m] = minj;
		}
		for(int  j = 0; j < n; j++)
		{
			int maxi = 0;
			for(int i = 0; i < m; i++)
			{
				if(matrix[i][j] > matrix[maxi][j])
				{
					maxi = i;
				}
			}
			if(Lucky[maxi] == j)
				res.push_back(matrix[maxi][j]);
		}
	}
};