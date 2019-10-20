#include <stdio.h>

int main()
{
	int num, i=1;
	for(num=1 ; num<30 ; num++)
	{
		for(i=1 ; i<num ; )
		{
			i++;
			if(num%i==0)
			break;
		}
	}
}
