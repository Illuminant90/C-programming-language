#include <stdio.h>
#include <stdlib.h>   // для system
/* подсчет вводимых символов; 2 версия */
int main(void)
{
    system("chcp 65001 > nul");  // переключаем консоль на UTF-8
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    {
        ;
    }
    printf("Количество введенных символов: %.0f\n", nc);    
    printf("Нажмите Enter для выхода...");
    getchar();  /* Но это тоже может вернуть EOF без ожидания */
    return 0;
}