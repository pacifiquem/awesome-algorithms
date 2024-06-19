#include "iostream"

using namespace std;

// Function to calculate the greatest common divisor (GCD) of two numbers using recursion

int gcd_calculator(int a, int b) {
    // Base case: if b is 0, return a as the GCD
    if (b == 0) {
        return a;
    }

    // Recursive case: call the function with b and the remainder of a divided by b
    return gcd_calculator(b, a % b);
}

// sample in the main app

int main(){
    int num1, num2;
    cout << "Enter two non-negative integers: ";
    cin >> num1 >> num2;
    int gcd = gcd_calculator(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    return 0;
}