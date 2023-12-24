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
		{"GPU프로그래밍","전공심화",4.84},
		{"C프로그래밍1","전공선택",4.82},
		{"인공지능과미래사회","교양선택",4.75},
		{"파이썬프로그래밍","전공선택",4.65},
		{"SW융합개론","전공선택",4.61}
	};//CLASS자료형 배열(크기 5)를 만들도 구조체 내의 각각의 변수에 각각의 값을 초기화한다.
	int n;
	while (1)
	{
		int num1,c;
		char arr[50];
		printf("1)과목명 검색, 2)과목구분별 검색, ");
		printf("3)강의평가점수로 검색, 다른 숫자)종료");
		scanf_s("%d", &n);
		c = getchar();//scanf로 입력버퍼에 남아있는 엔터값을 제거한다.
		if (n > 3||n<0)
		{
			printf("\"지금까지 S모대학교 N모교수의 강의과목 정보를 출력해 주는 프로그램이였습니다. 그럼 안년히 계세요\" ");
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
	printf("과목명을 입력하세요>");
	fgets(arr1, sizeof(arr1), stdin);
	len1 = strlen(arr1);
	arr1[len1 - 1] = '\0';
	for (i1 = 0; i1 < 5; i1++)
	{
		if (!strcmp(arr1, class[i1].name))//strcmp함수를 이용하여 arr1과 class[i1].name의 문자열이 같은지를 구별(같으면 0을 반환)
		{
			printf("%s 과목은 %s(으)로 구분되며, 강의평가점수는 %.2f점 입니다.\n", class[i1].name, class[i1].major, class[i1].num);
			break;
		}
		else if (i1 == 4 && strcmp(arr1, class[i1].name))//같은 문자열이 있으면 위에서 걸려서 break에 의해 끝날 것인데
			//i1이 4까지 왔는데도 같은 문자열이 없다는 것은 CLASS배열 내의 arr1이 없다는 것이기에 밑의 코드 실행
		{
			printf("%s 과목은 없습니다.\n", arr1);
		}
	}
}

void major_sort(CLASS* class)
{
	int len2, i2;
	char arr2[30];
	printf("과목명을 입력하세요>");
	fgets(arr2, sizeof(arr2), stdin);
	len2 = strlen(arr2);
	arr2[len2 - 1] = '\0';
	for (i2 = 0; i2 < 5; i2++)
	{
		if (!strcmp(arr2, class[i2].major))
		{
			printf("%s 과목(들)은 %s(강의평가 %.2f점)", class[i2].major,class[i2].name,class[i2].num);
			while (i2++ < 4)//arr2와 class[i2].major이 같은 지점부터 i2을 1씩 늘려 그 후에 나오는 과목들의 과목구분과 비교하여 출력한다.
			{
				if (!strcmp(arr2, class[i2].major))
				{
					printf(",%s(강의평가 %.2f점)", class[i2].name, class[i2].num);
				}
			}
			printf("입니다.");
			break;
		}
		else if (i2 == 4 && strcmp(arr2, class[i2].major))
		{
			printf("%s 과목(들)은 없습니다.\n", arr2);
		}
	}
}


void num_sort(CLASS* class)
{
	double arr3;
	int i3;

	printf("강의평가점수 몇 점 이상의 과목을 검색하고자 하나요?>");
	scanf_s("%lf", &arr3);
	for (i3 = 0; i3 < 5; i3++)
	{
		if (arr3 <= class[i3].num)
		{
			printf("%.2f점 이상의 강의평가점수를 받는 과목(들)은 %s(%s, 과목점수 %.2f점)", arr3, class[i3].name, class[i3].major, class[i3].num);
			while (i3++ < 4)
			{
				if (arr3 <= class[i3].num)
				{
					printf(",%s(%s, 과목점수 %.2f점)", class[i3].name, class[i3].major, class[i3].num);
				}
			}
			printf("입니다.");
			break;
		}
		else if (i3 == 4 && (arr3 > class[i3].num))
		{
			printf("%.2f점 이상의 강의평가점수를 받는 과목(들)은 없습니다.",arr3);
		}
	}
}