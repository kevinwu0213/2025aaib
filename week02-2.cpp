#week02-3.py寫leetcode
#LeetCode 1. Two Sum
#有一堆數字nums裡面哪兩個相加，是target
#nums[i]+nums[j]==target 找到i和j使得加起來是target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#有一個箱子<裡面放出現過的數字
        #要湊出target這個加總

        for i,num in enumerate(nums):
            other = target-num#另一個需要的數
            if other in box: #在箱子裡有另一個須要的數
                return[box[other],i]
            else: #如果沒有合適的數字能湊
                    box[num]=i#就把現在的數字num，放到box裡面
