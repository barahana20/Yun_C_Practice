#include <stdio.h>

int main()
{
	int A=0, Z=0;
	int sum;
	for(A=1 ; A<10 ; A++)
	{
		for(Z=1 ; Z<10 ; Z++)
		{
			sum = 11*A + 11*Z;
			if(sum==99)
			printf("%d%d + %d%d = %d\n", A, Z, Z, A, sum);
			else
			continue;
		}
	}
	return 0;
}
