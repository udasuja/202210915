#include <stdio.h>

int main(void)
{
	double km,mile;
	int int_km;
	printf("Please enter kilometer:");
	scanf_s("%lf", &km);
	int_km = (int)(km*10);
	mile = ((int_km / 16)+(int_km%16) * 0.1);
	//float���� ���� �սǵǴ� ��Ʈ�� �߻��ϰ� �װ��� ū ������ �ֱ⿡ double�� ����ȯ�� �Ѵ�.

	printf("%.1f km is equal to %.1f miles", km,mile);

	//printf("%.1f km is equal to %.1f miles", km, km/1.6);
	return 0;
}