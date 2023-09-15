#include <stdio.h>

int main(void)
{
	int f_num, s_num;
	printf("input two integers:");
	scanf_s("%d %d", &f_num, &s_num);
	printf("%d & %d=%d\n", f_num, s_num, f_num & s_num);
	printf("%d | %d=%d\n", f_num, s_num, f_num | s_num);
	printf("%d ^ %d=%d\n", f_num, s_num, f_num ^ s_num);
	return 0;
}