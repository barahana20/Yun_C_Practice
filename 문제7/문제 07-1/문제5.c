#include <stdio.h>

int main(void)
{
	int n=0, num=0;
	double insult=0, total=0;
	printf("몇 개의 정수? : ");
	scanf("%d",&num);
	
	while(n<num)
	{
		++n;
		printf("%d 번째 정수 입력 ",n);
		scanf("%d",&insult);
		total+=insult;
	}
	printf("%d",total/2);
	return 0;
}
