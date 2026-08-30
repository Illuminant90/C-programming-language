#include <stdio.h>
/* копирование ввода на вывод; 1-я версия */
int main(void)
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}