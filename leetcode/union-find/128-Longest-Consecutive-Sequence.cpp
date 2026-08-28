class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.empty()) return 0;
        unordered_set<int>st;
        int longest=0;
        st.reserve(nums.size());
        for(auto& it:nums){
            st.insert(it);
        }

        for(auto& it:st){
            if(st.find(it-1)==st.end()){
                int k=it;
                int count=0;
                while(st.find(k)!=st.end()){
                    count++;
                    k++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};