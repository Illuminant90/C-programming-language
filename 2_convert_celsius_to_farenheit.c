#include <stdio.h>
/*Преобразовываем градусы Цельсия в фаренгейты*/
int main(void)
{
    const int LOWER_LIMIT = 0;
    const int UPPER_LIMIT = 300;
    const int STEP = 20;
    const char *DEGREES_FAHRENHEIT_SYMB = "°F";
    const char *DEGREES_CELSIUS_SYMB = "°C";

    int degrees_fahrenheit = LOWER_LIMIT;
    float degrees_celsius = 0;
    
    printf("%3s\t%6s\n", DEGREES_FAHRENHEIT_SYMB, DEGREES_CELSIUS_SYMB);
    while (degrees_fahrenheit <= UPPER_LIMIT)
    {
        degrees_celsius = (5.0f / 9.0f) * (degrees_fahrenheit - 32.0f);
        printf("%3d\t%6.1f\n", degrees_fahrenheit, degrees_celsius);
        degrees_fahrenheit += STEP;
    }
    return 0;
}