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
		scanf_s("%lf", &n[i]);//scanf로 입력값을 실수형태로 입력받는다.
		sum += n[i];
	}
	average = sum / 5;//입력받은 값을 다 더한후 개수로 나눈다.
	for (i = 0; i < 5; i++)
	{
		n[i] = n[i] - average;//평균과 입력값을 뺀 값을 그 요소에 저장
		n[i] = pow(n[i], 2);//i번째 요소를 제곱한 것을 i번째 요소에 저장
		sigma += n[i];
	}
	sigma /= 5;
	printf("Standard Deviation = %.3f\n", sqrt(sigma));
	//루트sigma/5의 값을 반환한다.
	return 0;
}