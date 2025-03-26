///Leetcode 2033. Minimum operation to make a uni=value grid
class Solution {
public: ///grid[i][j]
    int minOperations(vector<vector<int>>& grid, int x) {
        int M=grid.size(),N=grid[0].size(), MN=M*N;
        vector<int> a(MN);///c++���}�C�A�j�p��M*N
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                int k=i*N+j;
                a[k]=grid[i][j];
            }
        }///�e����Grid[i][j]����ơA��J²�檺�}�Ca[k]
        sort(a.begin(),a.end());
        int mid=a[MN/2];
        int ans=0;
        for(int k=0;k<MN;k++){
            int diff=abs(mid-a[k]);
            if(diff%x !=0)return-1;
            ans+=diff/x;
        }
        return ans;///�j��᭱�A���׮��ӥ�//�j���ح��A�⵪��
    }

};
