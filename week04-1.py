# week04-1.py �G�X�@python for�j�骩��
# leetcode 2579.count total number of colored cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #�j��e�AANS�M��
        for i in range(1,n*2,2):#python��for�j��
            ans+=i#��o��1357���ơA�[�Jans
        for i in range(1,n*2-1,2):
            ans+=i#��o��1357�ơA�[�Jans
        return ans
