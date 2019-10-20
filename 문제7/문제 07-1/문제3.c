#include <stdio.h>

int main(void)
{
	int num=1,sum=0;
	while(num!=0)
	{
		printf("ют╥б : ");
		scanf("%d",&num);
		sum+=num;
		printf("%d\n",sum);
	}
	printf("%d",sum);
	return 0;
}
