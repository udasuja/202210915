/*
� ���� 2�� ���� �������� ����� �� ������ ���� 1�� �� ���̰�
������ 0�� �� ���̴�.
ex) 20%2==0
	10%2==0
	5%2==1
	2%2==0
	1%2==1
�׷� �̶� 20�� 2���� ���� 10100�̵ȴ�.

*/

#include <stdio.h>

int Binary(int,int);

int main(void)
{
	int n,k;
	//n�� ������ k�� ���� �ȴ�.
	printf("Please enter a number:");
	scanf_s("%d", &n);
	k = n;
	Binary(n,k);
	return 0;
}

int Binary(int n,int k)
{
	//k�� n�� 2�� �������� �ȴ�.
	n = k % 2;
	//k/=2�� ���⿡�ٰ� ���� k�� 2�϶� 2�� �������鼭 �ٷ� �ؿ� �ִ� 
	//���ǹ����� ���� ����Լ��� ������.
	//�׷��� k�� 2�϶��� ������ ���� ������ ���Ѵ�. 
	if (k==1)
	{
		n = k % 2;
		return printf("%d",n);
	}
	else
	{

		k /= 2;
		Binary(n, k);
	}
	printf("%d",n);
}