#include <stdio.h>

int main(void)
{
	char str[100];
	int i,charater='A'-'a';
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != 0; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')&&(str[i]!=' '))
		{
			printf("%c", str[i] + charater);
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i] != ' '))
		{
			printf("%c", str[i] - charater);
		}
		else if (str[i] == ' ')
		{
			printf("%c", str[i]);
		}
	}
	return 0;
}