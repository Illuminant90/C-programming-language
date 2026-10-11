#include <stdio.h>
#include <stdlib.h>
/*Подсчет строк входного потока*/
int main(void)
{
    system("chcp 65001 > nul"); // переключаем консоль на UTF-8
    int c = 0;
    int nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d\n", nl);
    printf("Нажмите Enter для выхода...");
    getchar();
    return 0;
}