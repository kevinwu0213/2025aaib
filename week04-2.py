# week04-2.py�O���Ѫ�leetcode�D�Դ�EAZY�O(�G�M�@)
# Leetcode 2529.Maximum count of positive integer and negative integer
# ��X���X�ӥ��ơB���X�ӭt�ơA�j�����Ӽƶq�^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0#�j��e�v�A�ǳƦn�A����0
        for i in range(len(nums)):#�j����A��s��
            if nums[i]>0: pos+=1
            if nums[i]<0: neg+=1
        return max(pos,neg)
