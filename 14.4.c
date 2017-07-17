#include <stdio.h>

int main()

{
    int chislo = 0;
    printf("Enter number:\n");
    scanf("%d", &chislo);

    for (int b = 1; b <= chislo; b++)
    {
        if (chislo % (b*b) == 0 && chislo % (b*b*b) != 0)
        {
            printf("%d\n", b);
        }
        else
        {
            continue;
        }
    }

    return 0;
}