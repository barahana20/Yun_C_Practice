#include <stdio.h>

double Cel_Fah(double cel) {
	double fah;
	fah=1.8*cel + 32;
	return fah;	
}
double Fah_Cel(double fah) {
	double cel;
	cel=(fah-32)/1.8;
	return cel;
}
int main()
{
	double cel, fah;
	printf("Cel 온도 입력 : ");
	scanf("%lf", &cel);
	printf("Fah 온도 : %f\n",Cel_Fah(cel));
	
	printf("Fah 온도 입력 : ");
	scanf("%lf", &fah);
	printf("Cel 온도 : %f\n",Fah_Cel(fah));
	return 0;
}
