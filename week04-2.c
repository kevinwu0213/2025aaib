//week04-2.c�O���Ѫ�leetcode�D�Դ�EAZY�O(�G�M�@)
//Leetcode 2529.Maximum count of positive integer and negative integer
int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0;//�j��e��
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0)pos++;
        if(nums[i]<0)neg++;
    }//�j�餤���A��s�B�ק復
    //�j��í��A�⥦���ӥ�
    if(pos>neg)return pos;//���Ƥ���h�A����
    else return neg;//���M�A�N�t��
}
