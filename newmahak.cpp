#include <iostream>

int main() {
    int num;
    std::cout << "Enter a three-digit number: ";
    std::cin >> num;

    // Extracting digits using integer division and modulo
    int hundreds_digit = num / 100;
    int tens_digit = (num % 100) / 10;
    int units_digit = num % 10;

    // Calculating the sum
    int sum = hundreds_digit + tens_digit + units_digit;

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}