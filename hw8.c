#include <stdio.h>
#include <math.h>

int main(void)
{
	double n[5];
	int i;
	double sum = 0, sigma = 0,average;

	printf("Enter 5 real numbers:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%lf", &n[i]);//scanf�� �Է°��� �Ǽ����·� �Է¹޴´�.
		sum += n[i];
	}
	average = sum / 5;//�Է¹��� ���� �� ������ ������ ������.
	for (i = 0; i < 5; i++)
	{
		n[i] = n[i] - average;//��հ� �Է°��� �� ���� �� ��ҿ� ����
		n[i] = pow(n[i], 2);//i��° ��Ҹ� ������ ���� i��° ��ҿ� ����
		sigma += n[i];
	}
	sigma /= 5;
	printf("Standard Deviation = %.3f\n", sqrt(sigma));
	//��Ʈsigma/5�� ���� ��ȯ�Ѵ�.
	return 0;
}