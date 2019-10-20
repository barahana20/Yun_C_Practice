#include <stdio.h>

int main()
{
	int first, second;
	
	printf("두개의 정수 입력 : ");
	scanf("\n%d %d",&first,&second);
	
	if(first<second)
		printf("%d",second-first);
	else
		printf("%d",first-second);
	
	return 0;
}
