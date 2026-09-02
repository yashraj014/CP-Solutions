class Solution {
  public:
  typedef pair<int,int> P;
 struct compare {
       bool operator()(const P &a, const P &b) const {
           if (a.first == b.first) {
               return a.second > b.second;
           }
           return a.first > b.first;
       }
   };
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int n = arr.size();
        vector<vector<int>>bucket(n+1);
        
        for(auto& it:mpp){
            bucket[it.second].push_back(it.first);
        }
         vector<int>ans;
        for(int freq = n;freq>=1 && ans.size()<k;freq--){
            if(bucket[freq].empty()) continue;
            
            sort(bucket[freq].begin(),bucket[freq].end(),greater<int>());
            
            for(auto& it:bucket[freq]){
                ans.push_back(it);
                
                if(ans.size()==k) break;
            }
        }
       
        
        return ans;
    }
};
