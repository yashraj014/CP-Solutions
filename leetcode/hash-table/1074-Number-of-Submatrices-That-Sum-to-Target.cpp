class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int n = matrix.size();
        vector<vector<int>>countSum(n,vector<int>(col));

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<col;j++){
                sum+=matrix[i][j];
                countSum[i][j]=sum;
            }
        }
        int count=0;
        for(int s_c = 0;s_c<col;s_c++){
            for(int j=s_c;j<col;j++){
                unordered_map<int,int>mpp;
                int sum = 0;
                mpp[0]=1;
                for(int row=0;row<n;row++){

                    sum+=countSum[row][j] - (s_c>0?countSum[row][s_c-1]:0);

                    if(mpp.find(sum-target)!=mpp.end()){
                        count+=mpp[sum-target];
                    }

                    mpp[sum]++;

                }
            }
        }

        return count;
    }
};