#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Get user input for the number
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    // Check if the number is non-negative
    if (num < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    }
    else {
        // Call the factorial function and print the result
        unsigned long long result = factorial(num);
        std::cout << "Factorial of " << num << " is: " << result << std::endl;
    }

    return 0;
}