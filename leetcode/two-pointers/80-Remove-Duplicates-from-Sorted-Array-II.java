class Solution {
    public int removeDuplicates(int[] nums) {
        // HashMap<Integer,Integer>mpp = new HashMap<>();
        int idx=0;
       for(int num:nums){
        if(idx<2 || nums[idx-2]<num){
            nums[idx]=num;
            idx++;
        }
       }
        return idx;
    }
}