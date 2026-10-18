#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*Упражнение 1.12. Программа, которая печатает содержимое своего ввода, помещая по одному
слову на каждой строке*/
int main(void)
{
    system("chcp 65001 > nul");
    int current_char;
    bool in_word = false;
    while ((current_char = getchar()) != EOF)
    {
        if (current_char == ' ' || current_char == '\n' || current_char == '\t')
        {
            if (in_word)
            {
                putchar('\n');
                in_word = false;
            }
        }
        else
        {
            in_word = true;
            putchar(current_char);
        }
    }
    printf("\nНажмите Enter для выхода...");
    getchar();
    return 0;
}