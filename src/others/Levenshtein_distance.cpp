#include <iostream>
#include <vector>
#include <algorithm>

int levenshteinDistance(const std::string& str1, const std::string& str2) {
    int m = str1.length();
    int n = str2.length();
    
    // Create a 2D matrix to store the distances
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));
    
    // Initialize the matrix
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0) {
                dp[i][j] = j; // If the first string is empty
            } else if (j == 0) {
                dp[i][j] = i; // If the second string is empty
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + std::min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
    }
    
    return dp[m][n];
}

int main() {
    std::string str1 = "kitten";
    std::string str2 = "sitting";
    
    int distance = levenshteinDistance(str1, str2);
    
    std::cout << "Levenshtein distance between '" << str1 << "' and '" << str2 << "' is: " << distance << std::endl;
    
    return 0;
}