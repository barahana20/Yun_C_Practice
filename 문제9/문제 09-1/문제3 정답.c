#include <stdio.h>
#include <time.h>

void pibo(int num)
{
	int f1=0, f2=1, f3, i;
	if(num==1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);
	
	for(i=0; i<num-2 ; i++)
	{
		f3=f1+f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main()
{
	clock_t start = clock();
	int n;
	scanf("%d", &n);
	if(n<1)
	{
		printf("1이상의 값을 입력하세요. \n");
		return -1;
	}
	pibo(n);
	printf("\n걸린시간은 %0.5f입니다.\n",(float)(clock() - start)/CLOCKS_PER_SEC);
	return 0;
}
