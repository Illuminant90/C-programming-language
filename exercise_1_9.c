#include <stdio.h>
#include <stdlib.h>

/*Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел.*/
int main(void)
{
    system("chcp 65001 > nul");
    int past_char = 0;
    int current_char;
    while ((current_char = getchar()) != EOF)
    {
        if (current_char == ' ')
        {
            if (past_char == ' ')
            {
                ;
            }
            else
            {
                putchar(current_char);
            }
        }
        else
        {
            putchar(current_char);
        }
        past_char = current_char;
    }
    
    printf("Нажмите Enter для выхода...");
    getchar();
    return 0;
}