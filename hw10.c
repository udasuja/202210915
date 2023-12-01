#include <stdio.h>
#include <string.h>

typedef struct
{
	char city_n[30];
	char country[30];
	char population[30];
}CITY;

int main(void)
{
	CITY arr[3];
	int i=0,j;

	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("Name>");
		fgets(arr[i].city_n, sizeof(arr[i].city_n), stdin);
		printf("Country>");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population>");
		fgets(arr[i].population, sizeof(arr[i].population), stdin);
		for (j = 0; j < 30; j++)
		{
			if (arr[i].city_n[j] == '\n')
			{
				arr[i].city_n[j] = 0;
			}
			if (arr[i].country[j] == '\n')
			{
				arr[i].country[j] = 0;
			}
			if (arr[i].population[j] == '\n')
			{
				arr[i].population[j] = 0;
			}
		}
	}
	

	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. ",i+1);
		printf("%s in %s with a population of %s people\n", arr[i].city_n, arr[i].country,arr[i].population);
	}

}