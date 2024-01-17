#include <iostream>
#include <vector>

std::vector<long long> dp;

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main() {
    int n;

    std::cout << "Enter nth Fibonacci number: " <<std::endl;
    std:: cin >> n;
    dp.assign(n + 1, -1);
    long long result = fibonacci(n);
    std::cout << "Fibonacci(" << n << ") = " << result << std::endl;
    return 0;
}