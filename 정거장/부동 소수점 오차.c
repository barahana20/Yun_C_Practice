#include <stdio.h>

int main()
{
	int i;
	float num=0.0;
	
	for(i=0 ; i<100 ; i++)
		num += 0.1;
	
	printf("%f", num);
	return 0;
}
