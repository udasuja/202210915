#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 4; k > i; k--)
		//k�� i���� ū ����� ���鹮�� ���
		//���� i�� 3�̶�� ���鹮�ڸ� �� ���� ����Ѵ�.
		{
			printf(" ");
		}
		for (int j = i; j > 0; j--)
		//����� �������� ���ʿ� i����ŭ�� ���� ����Ѵ�.
		{
			printf("*");
		}
		printf("*");//����� �� ���
		for (int j = i; j > 0; j--)
		//����� �������� �����ʿ� i����ŭ�� ���� ����Ѵ�.
		{
			printf("*");
		}
		for (int k = 4; k > i; k--)
			//k�� i���� ū ����� ���鹮�� ���
		{
			printf(" ");
		}
		printf("\n");
	}
}