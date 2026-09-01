class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastZero =0;
        int n  = nums.size();
        for(int i=0;i<n;i++){
            while(lastZero<n && nums[lastZero]!=0) lastZero++;

            if(lastZero>=0 && lastZero<n){
                if(nums[i]!=0 && lastZero<i){
                    swap(nums[i],nums[lastZero]);
                }
            }

        }
    }
};