#week02-3.py�gleetcode
#LeetCode 1. Two Sum
#���@��Ʀrnums�̭�����Ӭۥ[�A�Otarget
#nums[i]+nums[j]==target ���i�Mj�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#���@�ӽc�l<�̭���X�{�L���Ʀr
        #�n��Xtarget�o�ӥ[�`

        for i,num in enumerate(nums):
            other = target-num#�t�@�ӻݭn����
            if other in box: #�b�c�l�̦��t�@�Ӷ��n����
                return[box[other],i]
            else: #�p�G�S���X�A���Ʀr���
                    box[num]=i#�N��{�b���Ʀrnum�A���box�̭�
