class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int low = 0;
        int high = arr.size()-1;
        
        while(low<=high){
            int mid = high - (high-low)/2;
            
            if(arr[mid]==key){
                return mid;
            }
            
            else if( arr[mid] >= arr[low]  ){
                if(key>=arr[low] && key<arr[mid]){
                    high = mid-1;
                }
                else low=mid+1;
            }
            else{
                if(arr[high]>=key && arr[mid]<key){
                    low=mid+1;
                }
                else high = mid-1;
            }
        }
        return -1;
    }
};