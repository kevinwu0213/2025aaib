# week04-2.py是今天的leetcode挑戰提EAZY是(二和一)
# Leetcode 2529.Maximum count of positive integer and negative integer
# 找出有幾個正數、有幾個負數，大的那個數量回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0#迴圈前眠，準備好，都放0
        for i in range(len(nums)):#迴圈哩，更新它
            if nums[i]>0: pos+=1
            if nums[i]<0: neg+=1
        return max(pos,neg)
