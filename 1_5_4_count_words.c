#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*подсчет строк, слов и символов*/
int main(void)
{
    system("chcp 65001 > nul");
    int current_char;
    long count_chars = 0;
    int count_lines = 0;
    int count_words = 0;
    bool in_word = false;
    while ((current_char = getchar()) != EOF)
    {
        ++count_chars;
        if (current_char == '\n')
        {
            ++count_lines;
        }
        if (current_char == ' ' || current_char == '\n' || current_char == '\t')
        {
            in_word = false;
        }
        else if (!in_word)
        {
            in_word = true;
            ++count_words;
        }
        else
        {
            /*Ничего не делаем*/
        }
    }
    printf("Количество строк %d, количество слов %d, количество символов %ld\n", count_lines, count_words, count_chars);
    printf("\nНажмите Enter для выхода...");
    getchar();
    return 0;
}