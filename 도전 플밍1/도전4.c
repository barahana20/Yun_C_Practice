#include <stdio.h>

int main()
{
	int a=1, b=1, c=1, i;
	for(a=1 ; a<5 ; a++)
	{
		for(b=1 ; b<5 ; b++)
		{
			for(c=1 ; c<5 ; c++)
			{
				if(500*a + 700*b + 400*c == 3500)
				printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n",a, b, c);	
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");
	return 0;
}
	
