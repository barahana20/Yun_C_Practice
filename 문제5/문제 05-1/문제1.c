#include <stdio.h>

int main(void)
{
	int a,b,z,e,area;
	printf("�� ����� x, y ��ǥ : ");
	scanf("%d %d",&a, &b);
	printf("�� ����� x, y ��ǥ : %d %d\n",a,b);
	printf("�� �ϴ��� x, y ��ǥ : ");
	scanf("%d %d",&z, &e);
	printf("�� �ϴ��� x, y ��ǥ : %d %d\n",z,e);
	area=(z-a)*(e-b);
	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.",area);
	return 0;
}
