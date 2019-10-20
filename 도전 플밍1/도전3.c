#include <stdio.h>

void dd(int a, int b)
{
	int i;
	for(i=a ; i>0 ; i--)
		{
			if(a%i == 0 && b%i == 0)
			{
				printf("두 수의 최대 공약수 : %d\n", i);
				break;
			}
		}
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if(num1<num2)
		dd(num1, num2);
	if(num1>num2)
		dd(num2, num1);
	return 0;
}
					
