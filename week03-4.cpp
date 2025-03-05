///week03-4.cpp
///M90H044 瘋狂澄社不能打中文，會變亂碼
///程式貼到codblocks 再寫註解
#include <stdio.h>
int main()
{
	int ans=0;///答案加到這裡
	///痕全前面int是0
	int N;///有一個變數N
	scanf("%d",&N);
	for(int i=1;i<=N; i++){
		ans+=i;///迴圈中間修改ans
	}
	printf("%d",ans);
}///迴圈後面，印出ans
