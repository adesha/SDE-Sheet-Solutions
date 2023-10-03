class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n = len(nums)
        l, r = 0, n - 1
        k = n - 1
        ans = [0] * n
        while k >= 0:
            if abs(nums[l]) > nums[r]:
                ans[k] = nums[l] * nums[l]
                l += 1
            else:
                ans[k] = nums[r] * nums[r]
                r -= 1
            k -= 1
        return ans