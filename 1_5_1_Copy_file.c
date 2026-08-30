#include <stdio.h>
/* копирование ввода на вывод; 1.1-я версия */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    return 0;
}