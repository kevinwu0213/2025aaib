///week15-1.cpp���A��ӼƦrN����1...n����Am�n�����k���l��
///leetcide2894.divisible and non-divisible sums difference
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;//���䤣�㰣�A�k��㰣
        for(int  i=1;i<=n;i++){
            if(i%m>0) num1+=i;//���㰣�A�a�Dnum1
            else num2+=i;//�㰣�A�a�Dnum2
        }
        return num1-num2;
    }
};
