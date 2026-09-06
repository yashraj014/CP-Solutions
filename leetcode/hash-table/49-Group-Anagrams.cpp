class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto& it:strs){
            string temp = it;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(it);

        }

        vector<vector<string>>ans(mpp.size());
        int j=0;
        for(auto& it:mpp){

            for(auto& k:it.second){
                ans[j].push_back(k);
            }
            j++;
        }
        return ans;
    }
};