#include <stdio.h>
#include <stdlib.h>

/*Упражнение 1.8. Напишите программу для подсчета пробелов, табуляций и новых строк.*/
int main(void)
{
    system("chcp 65001 > nul");
    long count_space = 0;
    long count_tab = 0;
    long count_new_line = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++count_new_line;
        }
        if (c == '\t')
        {
            ++count_tab;
        }
        if (c == ' ')
        {
            ++count_space;
        }
    }
    printf("Количество пробелов = %ld\n", count_space);
    printf("Количество табуляций = %ld\n", count_tab);
    printf("Количество строк = %ld\n", count_new_line);
    printf("Нажмите Enter для выхода...");
    getchar();
    return 0;
}