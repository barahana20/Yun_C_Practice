#include <stdio.h>

int main()
{
	int dan, n=1;
	for(dan=1 ; dan<10 ; dan++)
	{
		if(dan%2!=0) continue; 
			for(n=1 ; n<10 ; n++)
			{
				if(n>dan) break;
				printf("%d x %d = %d\n",dan, n, dan*n);
			}
	}
	return 0;
}
