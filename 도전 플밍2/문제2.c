#include <stdio.h>

int power(int num)
{
	if(num==0) return 1;
	if(num==1) return 2;
	return 2 * power(num-1);
}

int main()
{
	int arr[100], num, mul=1, i=0;
	for(int i=0;i<20;i++)
		arr[i]=0;
	
	scanf("%d", &num);
	
	while(num != 0)
	{
		if(power(i)>num)
		{
			arr[i-1] = 1;
			num = num - power(i-1);
			i=0;
		}
		else if(power(i) == num)
		{
			arr[i] = 1;
			break;
		}
		i++;
	}
	for(i=19 ; i>=0 ; i--)
	{	
		printf("%d", arr[i]);
	}0;
}
