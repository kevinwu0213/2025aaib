///week14-4.cpp
///73.set matrix zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();//左M"右N
        vector<int> left(M),up(N);//左邊長條、右邊長條的C++陣列
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){
                    left[i]=7;//打勾勾
                    up[j]=7;//打勾勾
                }
            }
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(left[i]==7 || up[j]==7) matrix[i][j]=0;
            }
        }
    }
};
