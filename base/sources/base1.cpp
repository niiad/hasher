#include "../base1.h"

double hasher::calculateCircleArea(double radius) {
    constexpr double PI = 3.14159265358979323846;

    return PI * radius * radius;
}

double hasher::celsiusToFahrenheit(double celsius) {
    return (celsius * (9.0 / 5.0)) + 32.0;
}
