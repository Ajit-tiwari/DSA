class Solution {
public:
    int findOccurance(vector<int>& nums, int start, int end, int target,bool first){
        int occurance=-1;
        long mid=0;
        while(start<=end){
            mid=start + (end-start)/2;
            if(nums[mid]==target){
                if(first){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
                occurance=mid;
            }else
            if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return occurance;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurance=findOccurance(nums,0,nums.size()-1,target,true);
        if(firstOccurance == -1){
            return {-1,-1};
        }else{
            int lastOccurance = findOccurance(nums,firstOccurance,nums.size()-1,target,false);
            return{firstOccurance,lastOccurance};
        }
    }
};