#include <stdio.h>
/* копирование ввода на вывод; 1.1-я версия */
int main(void)
{
    int c;
    int is_eof;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        is_eof = (c != EOF);
        printf("EOF = %d\n", is_eof);
    }
    is_eof = (c != EOF);
    printf("EOF = %d\n", is_eof);
    while ((c = getchar()) != EOF)
    {
        /* code */
    }
    
    return 0;
}