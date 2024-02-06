#include <iostream>

int fibbonacci(int number) {
   if(number == 0){
      return 0;
   }
   if(number == 1) {
      return 1;
   }
   return (fibbonacci(number-1) + fibbonacci(number-2));
}

int main() {
    int number;

    // Get user input for the number
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        std::cout << "Fibonacci is not allowed for negative numbers." << std::endl;
        return 1;
    }

    std::cout << "Fibbonacci of " << number << " is:" << std::endl;

    for(int i = 0; i < number; i++) {
        std::cout << fibbonacci(i) << " ";
    }

    std::cout << std::endl;
}
