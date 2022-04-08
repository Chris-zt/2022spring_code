#include "Base.h"

class Solution
{
public:
	int minimumOperations(vector<int> &nums)
	{
		if (nums.size() == 1)
			return 0;
		vector<int> map1(100000, 0);
		vector<int> map2(100000, 0);
		for (int i = 0; i < nums.size(); i += 2)
		{
			map1[nums[i]-1]++;
		}
		for (int i = 1; i < nums.size(); i += 2)
		{
			map2[nums[i]-1]++;
		}
		int max1 = 0, max2 = 0, max3 = 0, max4 = 0;
		int maxi1 = 0, maxi2 = 0, maxi3 = 0, maxi4 = 0;
		for(int i = 0; i < 100000; i++)
		{
			if(map1[i] >= max1)
			{
				max2 = max1;
				maxi2 = maxi1;
				max1 = map1[i];
				maxi1 = i;
			}
			if(map2[i] >= max3)
			{
				max4 = max3;
				maxi4 = maxi3;
				max3 = map2[i];
				maxi3 = i;
			}
		}
		if(maxi1 == maxi3)
		{
			if(max3 - max4 > max1 - max2)
			{
				return (nums.size() - max3 - max2);
			}
			else
			{
				return (nums.size() - max1 - max4);
			}
		}
		else
		{
			return (nums.size() - max1 - max3);
		}
	}
};