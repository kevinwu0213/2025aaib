/// leetcode 3375. minimum operations to make array values equal to k
///�n���X�M�A�~���Ʀr�����ܦ�K(�]�N�OK�H�W�A���X�ӼƦr)
///�Ʀr�u��1...100
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101]={};///�}�C�ŧi�A�̭���0
        int N=nums.size();
        for(int i=0;i<N;i++){
            int now=nums[i];
            if(now<k)return-1;
            a[now]++;
        }
        int ans=0;
        for(int now=k+1;now<=100;now++){
                if(a[now]>0)ans++;

        }
        return ans;
    }
};
