#ifndef HASHER_BASE1_H
#define HASHER_BASE1_H

namespace hasher {
    /**
     * @brief calculate the area of a circle given its radius
     *
     * @param radius the radius of the circle
     *
     * @return the area of the circle
     * */
    inline constexpr double calculateCircleArea(double radius) {
        constexpr double PI = 3.14159265358979323846;

        return PI * radius * radius;
    }

    /**
     * @brief takes a temperature value in Celsius and converts it to Fahrenheit
     *
     * @param celsius the temperature value in celsius
     *
     * @return the temperature in Fahrenheit
     * */
    inline constexpr double celsiusToFahrenheit(double celsius) {
        return (celsius * (9.0 / 5.0)) + 32.0;
    }

    /**
      * @brief calculate the factorial of a number
      *
      * @param num the number to find the factorial of
      *
      * @return the factorial of the input number
      * */
    inline constexpr unsigned long long factorial(unsigned int num) {
        unsigned long long result = 1;

        for (int i = 2; i <= num; ++i) {
            result *= i;
        }

        return result;
    }

    /**
      * @brief calculate the factorial of a number using recursion
      *
      * @param num the number to find the factorial of
      *
      * @return the factorial of the input number
      * */
    inline constexpr unsigned long long recursiveFactorial(unsigned int num) {
        return (num <= 1) ? 1 : num * recursiveFactorial(num - 1);
    }

    /**
     * @brief calculate the factorial of a number using tail recursion
     *
     * @param num the number to find the factorial of
     * @param result accumulates intermediate result
     *
     * @return the factorial of the input number
     * */
     inline constexpr unsigned long long tailRecursiveFactorial(unsigned int num, unsigned long long result = 1) {
        return (num <= 1) ? result : tailRecursiveFactorial(num - 1, num * result);
     }

}

#endif //HASHER_BASE1_H
