#include <stdio.h>

int SquareByValue(int num);
void SquareByReference(int *arr);

int main()
{
	int num;
	scanf("%d", &num);
	printf("SquareByValue = %d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("SquareByReference = %d", num);
	return 0;
}

int SquareByValue(int num)
{
	return num*num;
}

void SquareByReference(int *ptr)
{
	*ptr = ptr[0] * ptr[0];
}
