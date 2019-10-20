#include <stdio.h>

int main()
{
	int n=0,a=0;
	while(n++<5)
	{
		printf("*\n");
		a=0;
		while(a++<n)
			printf("o ");
	}
	return 0;
}
