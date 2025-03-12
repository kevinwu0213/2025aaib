//week04-2.c是今天的leetcode挑戰提EAZY是(二和一)
//Leetcode 2529.Maximum count of positive integer and negative integer
int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0;//迴圈前面
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0)pos++;
        if(nums[i]<0)neg++;
    }//迴圈中間，更新、修改它
    //迴圈嘔面，把它拿來用
    if(pos>neg)return pos;//正數比較多，正數
    else return neg;//不然，就負數
}
