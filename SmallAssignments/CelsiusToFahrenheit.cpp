#include "CelsiusToFahrenheit.h"

#include <iostream>
#include <string>

void CelsiusToFahrenheit::ConvertToFahrenheit(float Celsius)
{
    const auto fahrenheit = Celsius *  9 / 5 + 32;
    std::cout << printf("%s degrees Celsius is %s degrees Fahrenheit", std::to_string(Celsius).c_str(), std::to_string(fahrenheit).c_str()) << std::endl;
}
