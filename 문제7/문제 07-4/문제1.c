#include <stdio.h>

int main()
{
	int a1,a2,sum;
	printf("ют╥б : ");
	scanf("%d %d",&a1, &a2);
	for(sum=0 ; a1<=a2 ; a1++)
	{
		sum+=a1;
	}
	printf("%d",sum);
	return 0;
}
