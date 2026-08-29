#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию */
int main(void)
{
    enum  
    {
        MIN_VALUE = 0,
        MAX_VALUE = 300,
        STEP = 20
    };

    for (int degrees_fahrenheit = MAX_VALUE; degrees_fahrenheit >= MIN_VALUE; degrees_fahrenheit -= STEP)
    {
        /*°С = (5/9) * (°F - 32)*/
        printf("%3d\t%6.1f\n", degrees_fahrenheit, (5.0f / 9.0f) * (degrees_fahrenheit - 32));
    }
    return 0;
}