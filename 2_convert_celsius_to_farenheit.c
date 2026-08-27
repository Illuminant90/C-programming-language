#include <stdio.h>
/*Преобразовываем градусы Цельсия в фаренгейты*/
int main(void)
{
    const int LOWER_LIMIT = 0;
    const int UPPER_LIMIT = 300;
    const int STEP = 20;

    int degrees_fahrenheit = LOWER_LIMIT;
    float degrees_celsius = 0;
    
    while (degrees_fahrenheit <= UPPER_LIMIT)
    {
        degrees_celsius = 5.0f * (degrees_fahrenheit - 32.0f) / 9.0f;
        printf("%3d\t%6.1f\n", degrees_fahrenheit, degrees_celsius);
        degrees_fahrenheit += STEP;
    }
    return 0;
}