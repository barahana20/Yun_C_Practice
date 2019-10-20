#include <stdio.h>
#include <time.h>

int pibo(int n)
{
	if(n==1) return 0;
	else if(n==2) return 1; 
	else if(n>=3) return pibo(n-1) + pibo(n-2);
}
int main()
{
	int insult, i=1;
	clock_t start = clock(); 
	scanf("%d",&insult);
	while(i<insult)
	{
	printf("%d, ", pibo(i));
	i++;
	}
	printf("%d.......\n", pibo(i));
	printf("걸린 시간은 %0.5f입니다.\n",(float)(clock() - start)/CLOCKS_PER_SEC);
	return 0;
}
