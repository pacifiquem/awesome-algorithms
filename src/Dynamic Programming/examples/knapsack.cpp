#include <iostream>
#include <vector>

int knapsack(int capacity, const std::vector<int>& weights, const std::vector<int>& values, int n) {
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = std::max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    int capacity = 50;
    std::vector<int> weights = {10, 20, 30};
    std::vector<int> values = {60, 100, 120};
    int n = weights.size();

    int result = knapsack(capacity, weights, values, n);
    std::cout << "Maximum value in the knapsack: " << result << std::endl;
    return 0;
}