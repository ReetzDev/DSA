//https://practice.geeksforgeeks.org/problems/reverse-a-string/1
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // // Your code goes here
        // int left=0;
        // int right = str.length();
        // while(left<right)
        // {
        //     //swap(str[left],str[right]);
        //     int temp=str.at(left);
        //     str.at(left)=str.at(right);
        //     str.at(right)=temp;
        //     left++;
        //     right--;
        // }
        //return str;
        
        reverse(str.begin(), str.end());
        return str;
        
    }
};
