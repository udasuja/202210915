#include <stdio.h>
#include <string.h>

typedef struct 
{
	char name[50];
	char major[50];
	double num;
}CLASS;

void name_sort(CLASS*);
void major_sort(CLASS*);
void num_sort(CLASS*);


int main(void)
{
	CLASS class[5] =
	{ 
		{"GPU���α׷���","������ȭ",4.84},
		{"C���α׷���1","��������",4.82},
		{"�ΰ����ɰ��̷���ȸ","���缱��",4.75},
		{"���̽����α׷���","��������",4.65},
		{"SW���հ���","��������",4.61}
	};//CLASS�ڷ��� �迭(ũ�� 5)�� ���鵵 ����ü ���� ������ ������ ������ ���� �ʱ�ȭ�Ѵ�.
	int n;
	while (1)
	{
		int num1,c;
		char arr[50];
		printf("1)����� �˻�, 2)���񱸺к� �˻�, ");
		printf("3)������������ �˻�, �ٸ� ����)����");
		scanf_s("%d", &n);
		c = getchar();//scanf�� �Է¹��ۿ� �����ִ� ���Ͱ��� �����Ѵ�.
		if (n > 3||n<0)
		{
			printf("\"���ݱ��� S����б� N�𱳼��� ���ǰ��� ������ ����� �ִ� ���α׷��̿����ϴ�. �׷� �ȳ��� �輼��\" ");
			return 0;
		}
		else
		{
			switch (n)
			{
			case 1:
				name_sort(class);
				break;
			case 2:
				major_sort(class);
				break;
			case 3:
				num_sort(class);
				break;
			}
		}
		printf("\n");
	}
}


void name_sort(CLASS* class)
{
	int len1,i1;
	char arr1[30];
	printf("������� �Է��ϼ���>");
	fgets(arr1, sizeof(arr1), stdin);
	len1 = strlen(arr1);
	arr1[len1 - 1] = '\0';
	for (i1 = 0; i1 < 5; i1++)
	{
		if (!strcmp(arr1, class[i1].name))//strcmp�Լ��� �̿��Ͽ� arr1�� class[i1].name�� ���ڿ��� �������� ����(������ 0�� ��ȯ)
		{
			printf("%s ������ %s(��)�� ���еǸ�, ������������ %.2f�� �Դϴ�.\n", class[i1].name, class[i1].major, class[i1].num);
			break;
		}
		else if (i1 == 4 && strcmp(arr1, class[i1].name))//���� ���ڿ��� ������ ������ �ɷ��� break�� ���� ���� ���ε�
			//i1�� 4���� �Դµ��� ���� ���ڿ��� ���ٴ� ���� CLASS�迭 ���� arr1�� ���ٴ� ���̱⿡ ���� �ڵ� ����
		{
			printf("%s ������ �����ϴ�.\n", arr1);
		}
	}
}

void major_sort(CLASS* class)
{
	int len2, i2;
	char arr2[30];
	printf("������� �Է��ϼ���>");
	fgets(arr2, sizeof(arr2), stdin);
	len2 = strlen(arr2);
	arr2[len2 - 1] = '\0';
	for (i2 = 0; i2 < 5; i2++)
	{
		if (!strcmp(arr2, class[i2].major))
		{
			printf("%s ����(��)�� %s(������ %.2f��)", class[i2].major,class[i2].name,class[i2].num);
			while (i2++ < 4)//arr2�� class[i2].major�� ���� �������� i2�� 1�� �÷� �� �Ŀ� ������ ������� ���񱸺а� ���Ͽ� ����Ѵ�.
			{
				if (!strcmp(arr2, class[i2].major))
				{
					printf(",%s(������ %.2f��)", class[i2].name, class[i2].num);
				}
			}
			printf("�Դϴ�.");
			break;
		}
		else if (i2 == 4 && strcmp(arr2, class[i2].major))
		{
			printf("%s ����(��)�� �����ϴ�.\n", arr2);
		}
	}
}


void num_sort(CLASS* class)
{
	double arr3;
	int i3;

	printf("���������� �� �� �̻��� ������ �˻��ϰ��� �ϳ���?>");
	scanf_s("%lf", &arr3);
	for (i3 = 0; i3 < 5; i3++)
	{
		if (arr3 <= class[i3].num)
		{
			printf("%.2f�� �̻��� ������������ �޴� ����(��)�� %s(%s, �������� %.2f��)", arr3, class[i3].name, class[i3].major, class[i3].num);
			while (i3++ < 4)
			{
				if (arr3 <= class[i3].num)
				{
					printf(",%s(%s, �������� %.2f��)", class[i3].name, class[i3].major, class[i3].num);
				}
			}
			printf("�Դϴ�.");
			break;
		}
		else if (i3 == 4 && (arr3 > class[i3].num))
		{
			printf("%.2f�� �̻��� ������������ �޴� ����(��)�� �����ϴ�.",arr3);
		}
	}
}