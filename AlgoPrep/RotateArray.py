class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if k>=len(nums):
            k=k%len(nums)
        ans=nums[len(nums)-k:]+nums[:len(nums)-k]
        for i in range(0,len(nums)):
            nums[i]=ans[i]