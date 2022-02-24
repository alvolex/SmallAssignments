#include "CelsiusToFahrenheit.h"

#include <iostream>
#include <string>

void CelsiusToFahrenheit::ConvertToFahrenheit(float Celsius)
{
    const auto fahrenheit = Celsius *  9 / 5 + 32;
    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit\n", Celsius, fahrenheit);
}
