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
        
        priority_queue<P,vector<P>,compare>pq;
        
        for(auto& it:mpp){
            pq.push({it.second,it.first});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans(k);
        int j=k-1;
        while(!pq.empty()){
            ans[j--]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
