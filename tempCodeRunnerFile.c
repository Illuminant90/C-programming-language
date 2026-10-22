#include <stdio.h>
/*Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.*/
int main(void)
{
    enum {MAX_LEN_WORD = 34}; /*Длина самого длинного слова supercalifragilisticexpialidocious стала популярным благодаря фильму и мюзиклу «Мэри Поппинс»*/
    int current_char;
    int count_word_for_len[MAX_LEN_WORD + 1] = {0}; 
    int len_current_word = 0;
    while ((current_char = getchar()) != EOF)
    {
        if (current_char == ' ' || current_char == '\n' || current_char == '\t')
        {
            if (len_current_word != 0)
            {
                if (len_current_word <= MAX_LEN_WORD)
                {
                    count_word_for_len[len_current_word] += 1;   
                }
                len_current_word = 0;
            }
        }
        else
        {
            if (current_char != '.' && current_char != ',' && current_char != ';' && current_char != ':' && current_char != '"')
            {
                len_current_word += 1;
            }
        }
    }
    if (len_current_word != 0)
    {
        if (len_current_word <= MAX_LEN_WORD)
        {
            count_word_for_len[len_current_word] += 1;
        }
        len_current_word = 0;
        putchar('\n');
    }
    for (int len_word = 1; len_word <= MAX_LEN_WORD; len_word += 1)
    {
        if (count_word_for_len[len_word] != 0)
        {
            printf("The number of words with a length of %d:", len_word);
            for (int count_symb = 0; count_symb < count_word_for_len[len_word]; count_symb += 1)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }
    printf("\nTo exit press enter...");
    getchar();
    return 0;
}