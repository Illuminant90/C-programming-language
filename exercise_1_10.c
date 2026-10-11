#include <stdio.h>
#include <stdlib.h>

/*Упражнение 1.10. Напишите программу, копирующую вводимые символы в выходной поток с заменой
символа табуляции на \t, символа забоя на \b и каждой обратной наклонной черты на \\. Это сделает
видимыми все символы табуляции и забоя.*/
int main(void)
{
    system("chcp 65001 > nul");
    int current_char;
    printf("Упражнение 1.10. Напишите программу, копирующую вводимые символы в выходной поток с заменой\nсимвола табуляции на \\t, символа забоя на \\b и каждой обратной наклонной черты на \\\\. Это сделает\nвидимыми все символы табуляции и забоя.\n");
    while ((current_char = getchar()) != EOF)
    {
        if (current_char == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (current_char == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (current_char == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(current_char);
        }
    }
    
    printf("Нажмите Enter для выхода...");
    getchar();
    return 0;
}