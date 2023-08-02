//https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
class Solution {
public:
    int index;
    int search(vector<int>& nums, int target) {
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            // else
            // {    
            //     index=-1;
            // }
        }
        
    return -1;
    }
};
