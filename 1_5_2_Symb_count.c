#include <stdio.h>
#include <stdlib.h>   // для system
/* подсчет вводимых символов; 1 версия */
int main(void)
{
    system("chcp 65001 > nul");  // переключаем консоль на UTF-8
    long nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("Количество введенных символов: %ld\n", nc);    
    printf("Нажмите Enter для выхода...");
    getchar();  /* Но это тоже может вернуть EOF без ожидания */
    return 0;
}