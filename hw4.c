/*
�Ҽ� �Ǻ� ���α׷�
*/

#include <stdio.h>

int main(void)
{
	int a,num=2;
	printf("Please enter a number:");
	scanf_s("%d", &a);
	for (int i = 2; i < a; i++)
	{
		if (a % i)
		//a�� i�� ������ �� �������� 0�� �ƴ� ���� ������ ������ �Ǻ��ϰ� 
		{
			num++;
			continue;
		}
		else//0�̶�� �Ҽ��� �ƴ϶�� ���̱⿡ �ݺ����� �����Ѵ�.
		{
			break;
		}
	}
	if (num == a)
	//num�� a�� ���� ���ٸ� �������� 0�̿��� ���� ���⿡ �Ҽ��̴�.
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
}