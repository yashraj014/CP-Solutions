class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size()-1;
        int high=n;
        int mini=INT_MAX;
        while(low<=high){
            int mid = high - (high-low)/2;

            if(nums[mid]<=nums[high]){
                mini=min(mini,nums[mid]);
                high=mid-1;
            }
            else if(nums[mid]>=nums[low]){
                mini = min(mini,nums[low]);
                low = mid+1;
            }
        }
        return mini;
    }
};