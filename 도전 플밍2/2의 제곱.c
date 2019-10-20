#include <stdio.h>

int main()
{
	int mul = 1;
	for(int i=1 ; i<=50 ; i++)
	{
		mul *= 2;
		printf("2ÀÇ %d½Â : %d \n",i ,mul);
	}
	return 0;
}
