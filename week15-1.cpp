///week15-1.cpp給你兩個數字N對應1...n的樹，m要做除法的餘數
///leetcide2894.divisible and non-divisible sums difference
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;//左邊不整除，右邊整除
        for(int  i=1;i<=n;i++){
            if(i%m>0) num1+=i;//不整除，家道num1
            else num2+=i;//整除，家道num2
        }
        return num1-num2;
    }
};
