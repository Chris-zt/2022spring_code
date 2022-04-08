#include"Base.h"

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid = (left + right) / 2;
		while(left <= right)
		{
			if(nums[mid] > target)
			{
				right = mid - 1;
				mid = (left + right) / 2;
			}
			else if(nums[mid] < target)
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
			else
			{
				if(mid - 1 >= 0 && nums[mid - 1] == target)
				{
					right = mid - 1;
					mid = (left + right) / 2;
				}
				else
				{
					return mid;
				}
			}
		}
		return -1;
    }
};