#include <iostream>

int sum_from_to(int first, int last) {
    if (first > last) {
        return 0; // Return 0 if the range is invalid
    }
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    // Test the sum_from_to function
    std::cout << "sum_from_to(1, 5): " << sum_from_to(1, 5) << std::endl; // Expected output: 15
    std::cout << "sum_from_to(5, 1): " << sum_from_to(5, 1) << std::endl; // Expected output: 0
    return 0;
}
