#include <iostream>
#include <vector>

using namespace std;

int main() {
	
    vector<int> numbers; // Declare a vector of integers

    // Initialize the vector with some values
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    
    cout << "Output of begin and end: ";
    for (auto i = numbers.begin(); i != numbers.end(); ++i)
        cout << *i << " ";
		
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = numbers.cbegin(); i != numbers.cend(); ++i)
        cout << *i << " ";

    // Print by rbegin and rend		
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = numbers.rbegin(); ir != numbers.rend(); ++ir)
        cout << *ir << " ";

    // Print by crbegin and crend
    cout << "\nOutput of crbegin and crend: ";
    for (auto ir = numbers.crbegin(); ir != numbers.crend(); ++ir)
        cout << *ir << " ";
		
    cout << endl;

    return 0;
}

