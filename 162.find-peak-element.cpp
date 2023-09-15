/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]> nums[n-2]) return n-1;
        int l=1,  h=n-2;
        while (l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]> nums[m-1] && nums[m]>nums[m+1])
            return m;

            else if(nums[m-1]< nums[m])
            l=m+1;

            else
            h=m-1;
        }
        return -1;
        
        
    }
};
// @lc code=end

