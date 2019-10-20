#include <stdio.h>

int main()
{
	int second, hour=0, minute=0, num1=0, num2=0;
	scanf("%d", &second);
	while(hour<second)
	{
		num1 = second-3600;
		if(num1<0)
		{	
			num1+3600;
			break;
		}
		else if(num1 == 0)
			break;
		hour++;
	}
	while(minute<second)
	{
		num2 = num1 - 60;
		if(num2<0)
		{
			num2 = num2+60;
			break;
		}
		else if(num2 == 0)
			break;
		minute++;
	}
	second = num2;
	printf("hour : %d, minute : %d, second = %d",hour, minute, second);
	return 0;
}	
