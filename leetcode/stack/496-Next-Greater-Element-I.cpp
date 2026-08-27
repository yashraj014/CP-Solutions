class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        stack<int>st;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()){
                if(st.top()>nums2[i]){
                    mpp[nums2[i]]=st.top();
                    break;
                }
                st.pop();
            }
            if(st.empty()){
                mpp[nums2[i]]=-1;
            }
            st.push(nums2[i]);
        }
        int m=nums1.size();
        vector<int>ans(m);
        for(int i=0;i<m;i++){
            ans[i]=mpp[nums1[i]];
        }
        return ans;
    }
};