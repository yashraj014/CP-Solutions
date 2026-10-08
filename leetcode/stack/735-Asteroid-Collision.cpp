class Solution {
public:

    vector<int> asteroidCollision(vector<int>& aster) {
        int n = aster.size();
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<n;i++){

            if(aster[i]<0){
               
                while(!st.empty() && st.top()>0 && (st.top()<abs(aster[i]))){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(aster[i])){
                    st.pop();
                
                }
                else if(st.empty() || st.top()<0){
                    st.push(aster[i]);
                }
            }
            else if(aster[i]>0){
                st.push(aster[i]);
            }  
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};