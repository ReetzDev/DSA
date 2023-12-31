//https://leetcode.com/problems/contains-duplicate/submissions/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 1) {
            return false;
        }
        
        sort(nums.begin(),nums.end());
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};
