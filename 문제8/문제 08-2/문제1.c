#include <stdio.h>

int main()
{
	int n=0;
	int dan=0;
	while(n<10)	
	{
		n++;
		for(dan=1 ; dan<10 ; dan++)
		{
			if(dan%2==0 )
				printf("%d x %d = %d\n", dan, n, dan*n);
			else
			continue;
		}
	}
	return 0;
}
