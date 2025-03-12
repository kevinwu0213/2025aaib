# week04-1.py 二合一python for迴圈版本
# leetcode 2579.count total number of colored cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #迴圈前，ANS清空
        for i in range(1,n*2,2):#python的for迴圈
            ans+=i#把這些1357的數，加入ans
        for i in range(1,n*2-1,2):
            ans+=i#把這些1357數，加入ans
        return ans
