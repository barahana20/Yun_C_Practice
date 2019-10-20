#include <stdio.h>

int main()
{
	int n=0,total=1;
	scanf("%d",&n);
	for(n;n>0;n--)
	{
		total=total*n;
	}
	printf("%d",total);
	return 0;
}
