#include <stdio.h>

int main()
{
	int i=0, n=0;
	for(n=0 ; n<=100 ; n++)
	{
		printf("%d \n", n);
		for(i=0 ; i<10000 ; i++) {}
	}
	printf("hello");
	return 0;
}
