//week05-3.cpp
//leetcode 2206.drive array into equal pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={};//�}501�Ӥj�p���}�C�A������0
        int odd=0;
        for(int i=0;i<nums.size();i++){
            int now=nums[i];//�{�b�B�z���Ʀr
            a[now]++;//now�W�[1��
            if(a[now]%2==0) odd--;//�[������O���ơA�֤@�ө_��
            else odd++;//�h1�ө_��
        }
        if(odd==0) return true;
        else return false;
    }

};

[ ]

