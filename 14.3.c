#include <stdio.h>
#include<stdlib.h>

int main()
{
    int chislo1 = 0;
    int chislo2 = 0;
    printf("Enter number:\n");
    scanf("%d", &chislo1);
    printf("Enter number:\n");
    scanf("%d", &chislo2);
    int x = 1;
    for (x; x <= chislo1&&x<=chislo2; x++)
    {
        if (chislo1 % x == 0 && chislo2 % x == 0)
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
