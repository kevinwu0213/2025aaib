/// leetcode 3375. minimum operations to make array values equal to k
///要切幾刀，才能把數字全部變成K(也就是K以上，有幾個數字)
///數字只有1...100
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101]={};///陣列宣告，裡面放0
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
