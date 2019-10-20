#include <stdio.h>

int main()
{
	int num=0,sum=0;
	do
	{
		sum+=num;
		num=num+2;
	}while(num<=100);
	printf("%d",sum);
	return 0;
}
