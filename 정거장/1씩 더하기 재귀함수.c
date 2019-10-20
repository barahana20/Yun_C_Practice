#include <stdio.h>
#include <time.h>

int sum;

void delay(clock_t n)
{
  clock_t start = clock();
  while(clock() - start < n);
}

int a(int num)
{
	if(num==0) return 0;
	else if(num==1) return 1;
	return 1 + a(num-1);
}

int main()
{
	clock_t start = clock();
	int insult, i=1, sum=0, e=1, n=0;
	scanf("%d", &insult);
	while(e<=5)
	{
		sum=0;
	for(i=1 ; i<=insult ; i++)
	{
		sum += a(i);
		printf("%d, ", a(i-1));
		for(n=0 ; n<10000 ; n++)
		{
		}
	}
	printf("%d", a(i-1));
	printf("\n1부터 %d까지 더한 결과 : %d", i-1, sum);
	printf("\n걸린 시간 : %0.5f\n",(float)(clock() - start)/CLOCKS_PER_SEC);
	e++;
	}
	return 0;
}
