class Solution:
    def rotate(self, arr):
    
        i,j=0,len(arr)-2
        
        while i<j:
            arr[i],arr[j]=arr[j],arr[i]
            i+=1
            j-=1
            
        arr[:]=arr[::-1]
            
