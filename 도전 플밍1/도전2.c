#include <stdio.h>

void multi(int num)
{
	for(int i=1 ; i<=9 ; i++)
	{
		printf("%d x %d = %d\n", num, i, num*i);
	}
}

int main()
{
	int n, num1, num2;
	scanf("%d %d", &num1, &num2);
	if(num1<num2)
		for(num1 ; num1<=num2 ; num1++)
			multi(num1);
	else 
		for(num2 ; num2<=num1 ; num2++)
			multi(num2);
	return 0;
}
