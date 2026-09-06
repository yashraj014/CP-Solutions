class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        major=nums[0]
        sum=0
        for num in nums:
            if num==major:
                sum+=1
            else:
                sum-=1
            if sum==0:
                major =num
                sum=1
        if nums.count(major)>=len(nums)/2: 
            return major

