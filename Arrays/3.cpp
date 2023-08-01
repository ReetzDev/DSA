//https://leetcode.com/problems/maximum-subarray/submissions/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int max = 0;
        for(int i=0;i<size(nums);i++)
        {
            max=max+nums[i];
            if(max_so_far<max)
            {
                max_so_far=max;
            }
            if(max<0)
            {
                max=0;
            }
        }
        return max_so_far;
    }
};
