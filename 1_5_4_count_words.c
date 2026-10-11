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
        
    }
    
    printf("\nНажмите Enter для выхода...");
    getchar();
    return 0;
}