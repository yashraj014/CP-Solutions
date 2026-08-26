class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int>st;
        
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
           
            
                while(!st.empty()){
                    if(temp[st.top()]>temp[i]){
                        ans[i]=st.top()-i;
                        break;
                    }
                    st.pop();
                }
             if(st.empty()){
                ans[i]=0;
            }
            st.push(i);
        }
        return ans;
    }
};