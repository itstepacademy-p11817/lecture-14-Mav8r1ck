#include<stdio.h>
#include<stdlib.h>

int main()
{
	int chislo = 0;
	printf("Enter number:\n");
	scanf_s("%d", &chislo);
	int x = 1;
		for (x; x <= chislo; x++)
		{
			if (chislo % x == 0)
			{
				printf("%d\n", x);
			}
			else
			{
				continue;
			}
		}
		system("pause");
		return 0;
}