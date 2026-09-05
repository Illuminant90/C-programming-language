#include <stdio.h>
#include <stdlib.h>   // для system
/* копирование ввода на вывод; 1.1-я версия */
int main(void)
{
    system("chcp 65001 > nul");  // переключаем консоль на UTF-8
    int c;
    int is_eof;
    printf("Значение EOF: %d\n", EOF);
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        is_eof = (c != EOF);
        printf("EOF = %d\n", is_eof);
    }
    is_eof = (c != EOF);
    printf("EOF = %d\n", is_eof);
    printf("Нажмите Enter для выхода...");
    getchar();  /* Но это тоже может вернуть EOF без ожидания */
    return 0;
}