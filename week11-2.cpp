///week11-2.cpp
///�禡�ŧi�A�禡�w�q�A�禡�I�s
# include <stdio.h>
int addnum(int a,int b)///�ŧi��ӰѼƪ��Ϊ��W�r
{///�e�������/�禡���w�q
    printf("�{�b�i�J addnum() �禡�̡Aa:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("���ۥ[��A�o��ƭ� %d�Nreturn�^��\n",x);
    return x;
}

int main()
{
    int ans=addnum(10,30);
    printf("%d", ans);
}
