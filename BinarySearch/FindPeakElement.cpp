/*
Leetcode 162
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        while(low<high){
            mid=low+(high-low)/2;
            
            if(nums[mid]>nums[mid+1]){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return high;
    }
};