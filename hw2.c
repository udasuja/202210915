#include <stdio.h>

int main(void)
{
	double km,mile;
	int int_km;
	printf("Please enter kilometer:");
	scanf_s("%lf", &km);
	int_km = (int)(km*10);
	mile = ((int_km / 16)+(int_km%16) * 0.1);
	//float으로 쓰면 손실되는 비트가 발생하고 그것이 큰 영향을 주기에 double로 형변환을 한다.

	printf("%.1f km is equal to %.1f miles", km,mile);

	//printf("%.1f km is equal to %.1f miles", km, km/1.6);
	return 0;
}