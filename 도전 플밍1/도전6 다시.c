#include <stdio.h>

int main()
{
	int h, m, s;
	scanf("%d", &s);
	h = s/3600;
	m = (s%3600)/60;
	s = s%60;
	printf("[h:%d, m:%d, s:%d]", h, m, s);
	return 0;
}
	
