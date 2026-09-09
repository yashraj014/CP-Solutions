class Solution {
    public int removeDuplicates(int[] nums) {
        HashMap<Integer,Integer>mpp = new HashMap<>();
        int idx=0;
        for(int i=0;i<nums.length;i++){
            if(mpp.getOrDefault(nums[i],0)<2){
                nums[idx]=nums[i];
                idx++;
                mpp.put(nums[i],mpp.getOrDefault(nums[i],0)+1);
            }
        }
        return idx;
    }
}