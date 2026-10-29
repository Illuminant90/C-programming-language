#include <stdio.h>
/*Упражнение 1.14. Напишите программу, печатающую гистограммы частот встречаемости вводимых
символов.*/
int main(void)
{
    enum {ASCII_CHARS = 128,
        START_PRINT_CHAR = 32,
        STOP_PRINT_CHAR = 126,
        HISTOGRAM_SYMBOL = '*'}; /*В ASCII печатные символы 32-126.*/
    int current_char;
    int count_chars[ASCII_CHARS] = {0};
    while ((current_char = getchar()) != EOF)
    {
        if (0 <= current_char && current_char < ASCII_CHARS)
        {
            count_chars[current_char] += 1;
        }
    }
    for (int symb = START_PRINT_CHAR; symb < STOP_PRINT_CHAR + 1; symb++)
    {
        if (count_chars[symb] > 0)
        {
            printf("\nThe number of characters '");
            putchar(symb);
            printf("': ");
            for (int count_symb = 0; count_symb < count_chars[symb]; count_symb++)
            {
                putchar(HISTOGRAM_SYMBOL);
            }
        }
    }
    printf("\nTo exit press enter...");
    getchar();
    return 0;
}