class Solution {
    public int majorityElement(int[] nums) {
        int num=nums[0];
        int sum=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==num){
                sum++;
            }
            else
            sum--;

            if(sum==0){
                num=nums[i];
                sum++;
            }
        }
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==num) count++;
        }
        if(count>=nums.length/2) return num;
        return 0;
    }
}