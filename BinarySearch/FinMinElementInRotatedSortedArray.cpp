class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1 || nums[0]<nums[nums.size()-1]){
            return nums[0];
        }
        int low=0,high=nums.size()-1,mid;
        while(low<high){
            mid=low+(high-low)/2;

            //------------------Handling Duplicates-------------------//
            if(nums[high]==nums[mid]){
                high--;
            }
            //------------------Handling Duplicates-------------------//

            if(nums[high]<nums[mid]){
                low=mid+1;
            }else{
                high=mid;
            }
        }

        return nums[low];
    }
};