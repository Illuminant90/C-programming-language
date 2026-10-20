#include <stdio.h>
#include <stdbool.h>
/*Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.*/
int main(void)
{
    int current_char;
    int len_current_word = 0;
    bool in_word = false;
    while ((current_char = getchar()) != EOF)
    {
        if (current_char == ' ' || current_char == '\n' || current_char == '\t')
        {
            in_word = false;
        }
        else
        {
            in_word = true;
        }
        if (in_word)
        {
            len_current_word++;
        }
        else if (!in_word && len_current_word != 0)
        {
            for (int i = 0; i < len_current_word; i++)
            {
                printf("*");
            }
            printf("\n");
            len_current_word = 0;
        }
        else
        {
            /*Строка показывающая, что я знаю misra*/
        }
    }
    printf("\nTo exit press enter...");
    getchar();
    return 0;
}