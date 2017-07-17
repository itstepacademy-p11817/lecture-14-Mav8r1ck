#include <stdio.h>
#include <stdlib.h>
int main()
{
	int chislo = 0;
	printf("Enter number:\n");
	scanf_s("%d", &chislo);
	for (int stroka = 0; stroka <= chislo; stroka++)
	{
		for (int stolb = 0; stolb <= chislo; stolb++)
		{
			printf("0");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}