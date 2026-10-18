#include <stdio.h>
#include <stdlib.h>
/*1.6. Массивы
 подсчет цифр, символов-разделителей и прочих символов*/
 int main(void)
 {
    system("chcp 65001 > nul");
    int c, i, nwhite,nother;
    int ndigit[10];
    nwhite = nother = 0;
    for ( i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }
    printf("Цифры = ");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", ndigit[i]);
    }
    printf(", символы-разделители = %d, прочие = %d\n", nwhite, nother);
    printf("\nНажмите Enter для выхода...");
    getchar();
    return 0;
 }