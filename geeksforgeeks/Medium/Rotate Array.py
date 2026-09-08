class Solution:
    def rotateArr(self, arr, d):
        # code here
        d=d%len(arr)
        i=0
        j=d-1
        while i<j:
           arr[i],arr[j]=arr[j],arr[i]
           i+=1
           j-=1
        
        k=len(arr)-1
        i=d
        while i<k:
            arr[i],arr[k]=arr[k],arr[i]
            i+=1
            k-=1
        arr.reverse()
        
       