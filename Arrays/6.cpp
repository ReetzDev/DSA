//https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
class Solution {
public:
    int index;
    int search(vector<int>& nums, int target) {

        //time complexity O(n)
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        

        
    //time complexity O(logn)
    int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid;

        //start
        //Iterative binary search
        while(left<=right)
        {
            mid = (left+right)/2;
            //cout<<nums[mid]<<"\n";
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>=nums[left])
            {
                if(target<=nums[mid] && target>=nums[left])
                    right = mid-1;
                else
                    left = mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[right])
                    left = mid+1;
                else
                    right = mid-1;
            }
        }

        //end 

        return -1;
    }
};
