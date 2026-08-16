#include <stdio.h>
/*Преобразовываем градусы Цельсия в фаренгейты*/
int main(void)
{
    const int LOWER_LIMIT = 0;
    const int UPPER_LIMIT = 300;
    const int STEP = 20;

    int degrees_fahrenheit = LOWER_LIMIT;
    int degrees_celsius = 0;
    
    while (degrees_fahrenheit <= UPPER_LIMIT)
    {
        degrees_celsius = 5 * (degrees_fahrenheit - 32) / 9;
        printf("%d\t%d\n", degrees_fahrenheit, degrees_celsius);
        degrees_fahrenheit += STEP;
    }
    return 0;
}