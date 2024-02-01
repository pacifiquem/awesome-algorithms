#include <iostream>
#include <string>

void reverseString(std::string& str, int start, int end) {
    // Base case: if start is greater than or equal to end, stop recursion
    if (start >= end) {
        return;
    }

    // Swap characters at start and end positions
    std::swap(str[start], str[end]);

    // Recursively call the function with updated start and end positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    // Call the reverseString function to reverse the string
    reverseString(input, 0, input.length() - 1);

    // Output the reversed string
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}