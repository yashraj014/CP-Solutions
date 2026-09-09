class Solution {
    public int majorityElement(int[] nums) {
        int num=0;
        int sum=0;
        for(int i=0;i<nums.length;i++){
           if(sum==0){
            num=nums[i];
           }
           sum+=(num==nums[i])?1:-1;
        }
        return num;
    }
}