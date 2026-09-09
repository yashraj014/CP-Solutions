class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // int[] ans = new int [m+n];
        // if(m==0 || n==0) return;
        int l=m-1;int r=n-1;
        int mid = m+n-1;
        while(l>=0 && r>=0){
            if(nums1[l]>=nums2[r]){
                nums1[mid]=nums1[l];
                l--;
            }
            else{
                nums1[mid]=nums2[r];
                r--;
            }
            mid--;
        }
        while(l>=0){
            nums1[mid]=nums1[l];
                l--;
                mid--;
        }
        while(r>=0){
             nums1[mid]=nums2[r];
                r--;
                mid--;
        }
        

        
    }
}