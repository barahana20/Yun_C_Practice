#include <stdio.h>

int big(int num1, int num2, int num3) {
	if(num1 < num2 && num3 < num2)
	printf("���� ū �� : %d\n", num2);
	else if(num1 < num3 && num2 < num3)
	printf("���� ū �� : %d\n", num3);
	else if(num2 < num1 && num3 < num1)
	printf("���� ū �� : %d\n", num1);
}
void small(int num1, int num2, int num3) {
	if(num1 > num2 && num3 > num2)
	printf("���� ���� �� : %d", num2);
	else if(num1 > num3 && num2 > num3)
	printf("���� ���� �� : %d", num3);
	else if(num2 > num1 && num3 > num1)
	printf("���� ���� �� : %d", num1);
}	
int main()
{
	int num1, num2, num3;
	printf("���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	big(num1, num2, num3);
	small(num1, num2, num3);
	return 0;
}
