#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int celsius;
    float fahrenheit;
    float kelvin;
    printf ("Digite a temperatura em celsius: ");
    scanf("%i", &celsius);
    getchar();
    fahrenheit = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;
    printf ("\nCelsius: %i \nFahrenheit: %.2f \nKelvin: %.2f\n", celsius, fahrenheit, kelvin);
    getchar();
}
