#include <stdio.h>

int main()
{
	int first, second, result;
	scanf("%d %d", &first, &second);
	result = first<second ? second-first : first-second;
	printf("\n°á°ú : %d",result);
	return 0;
}
