/*
어떤 값을 2로 나눠 나머지가 생기면 그 나머지 값은 1이 될 것이고
없으면 0이 될 것이다.
ex) 20%2==0
	10%2==0
	5%2==1
	2%2==0
	1%2==1
그럼 이때 20의 2진수 값은 10100이된다.

*/

#include <stdio.h>

int Binary(int,int);

int main(void)
{
	int n,k;
	//n은 나머지 k는 몫이 된다.
	printf("Please enter a number:");
	scanf_s("%d", &n);
	k = n;
	Binary(n,k);
	return 0;
}

int Binary(int n,int k)
{
	//k는 n을 2로 나눈값이 된다.
	n = k % 2;
	//k/=2를 여기에다가 쓰면 k가 2일때 2로 나눠지면서 바로 밑에 있는 
	//조건문으로 가서 재귀함수가 끝난다.
	//그러면 k가 2일때의 나머지 값을 구하지 못한다. 
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