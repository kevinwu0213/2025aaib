///week15-2.cpp
///���P���ƼƦr���v�h��
#include <stdio.h>
int helper(int n)
{
    int a[10]={};
    while(n>0){
        int now=n%10;
        a[now]++;
        if(a[now]>1) return 1;
        n=n/10;
    }
}
int main()
{
    int ans=0;///���X�ӭ��ƪ��Ʀr
    for(int i=0;i<=9999;i++){///0000...9999
        if(helper(i)==1 ) ans++;
    }
    printf("%d",ans);
}

