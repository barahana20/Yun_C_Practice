#include <stdio.h>

int power(int num)
{
	if(num==0) return 1;
	if(num==1) return 2;
	return 2 * power(num-1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("2ÀÇ %d½ÂÀº %d", n, power(n));
	return 0;
}
