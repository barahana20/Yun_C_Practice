#include <stdio.h>

int main()
{
	int kor, eng, math;
	double avr;
	printf("����, ����, ���� �Է� : ");
	scanf("%d %d %d",&kor, &eng, &math);
	avr=(kor+eng+math)/3.0;
	printf("%f\n",avr);
	
	if(avr>=90.0)
	printf("A");
	else if(avr>=80.0)
	printf("B");
	else if(avr>=70.0)
	printf("C");
	else if(avr>=50.0)
	printf("D");
	else
	printf("F");
	return 0;
}
