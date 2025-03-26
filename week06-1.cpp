///Leetcode 2033. Minimum operation to make a uni=value grid
class Solution {
public: ///grid[i][j]
    int minOperations(vector<vector<int>>& grid, int x) {
        int M=grid.size(),N=grid[0].size(), MN=M*N;
        vector<int> a(MN);///c++的陣列，大小事M*N
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                int k=i*N+j;
                a[k]=grid[i][j];
            }
        }///前面把Grid[i][j]的資料，放入簡單的陣列a[k]
        sort(a.begin(),a.end());
        int mid=a[MN/2];
        int ans=0;
        for(int k=0;k<MN;k++){
            int diff=abs(mid-a[k]);
            if(diff%x !=0)return-1;
            ans+=diff/x;
        }
        return ans;///迴圈後面，答案拿來用//迴圈裏面，算答案
    }

};
