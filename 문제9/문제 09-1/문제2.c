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
	printf("Cel �µ� �Է� : ");
	scanf("%lf", &cel);
	printf("Fah �µ� : %f\n",Cel_Fah(cel));
	
	printf("Fah �µ� �Է� : ");
	scanf("%lf", &fah);
	printf("Cel �µ� : %f\n",Fah_Cel(fah));
	return 0;
}
