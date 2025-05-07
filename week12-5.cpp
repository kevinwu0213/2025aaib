///week12-5.cpp
///leetcode 1920.build array from permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N=nums.size();
        vector<int> ans(N);//C++ªº°}¦C
        for(int i=0;i<N;i++){
            ans[i]=nums[nums[i]];
        }


        return ans;
    }
};
