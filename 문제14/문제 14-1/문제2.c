#include <stdio.h>

void Swap(int *ptr1, int *ptr2, int *ptr3);

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	Swap(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
	return 0;
}

void Swap(int *ptr1, int *ptr2, int *ptr3)
{
	int temp = *ptr1;
	*ptr1 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = temp;
}
