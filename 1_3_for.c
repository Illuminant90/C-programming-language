#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию */
int main(void)
{
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 300;
    const int STEP = 20;
    for (int degrees_fahrenheit = MIN_VALUE; degrees_fahrenheit <= MAX_VALUE; degrees_fahrenheit += STEP)
    {
        /*°С = (5/9) * (°F - 32)*/
        printf("%3d\t%6.1f\n", degrees_fahrenheit, (5.0f / 9.0f) * (degrees_fahrenheit - 32));
    }
    return 0;
}