#include <iostream>

// Custom implementation of gcd using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0;  // Failure to reduce
    }
    int gcdValue = gcd(num, denom);  // Use the custom gcd function
    num /= gcdValue;
    denom /= gcdValue;
    return 1;  // Success
}

int main() {
    int numerator, denominator;

    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    int result = reduce(numerator, denominator);

    if (result == 0) {
        std::cout << "Reduction failed. Invalid input." << std::endl;
    } else {
        std::cout << "Reduced fraction: " << numerator << "/" << denominator << std::endl;
    }

    return 0;
}
