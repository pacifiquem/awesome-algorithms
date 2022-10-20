#include <bits/stdc++.h>

using namespace std;

void startUpLogger() {
	cout << "MENU :" <<endl;
	cout << "1 Add" <<endl;
	cout << "2 Substract" <<endl;
	cout << "3 Multiply" <<endl;
	cout << "4 Divide " <<endl;
	cout << "5 Modulus" <<endl;
}


namespace arthmetic {
	int add(int a, int b) {
		return a+b;
	}
	
	int substract(int a, int b) {
		return a-b;
	}
	
	int multiply(int a, int b) {
		return a*b;
	}
	
	int divide(int a, int b) {
		return a/b;
	}
	
	int modulus(int a, int b) {
		return a%b;
	}
}

int main() {
	string nextOperation = "n";
	do {
		
		int operationIndex, firstNumber, secondNumber;
		startUpLogger();
		cout << "Enter Operation Index : ";
		cin >> operationIndex;
	
		if(operationIndex > 0 && operationIndex < 6) {
			cout << "Enter firstNumber : ";
			cin >> firstNumber;
			cout << "Enter secondNumber : ";
			cin >> secondNumber;		
		}else {
		
			cout << "Invalid Operation Index" << endl;
			exit(1);
		}
	
		switch(operationIndex) {
			case 1:
				cout << "Result is : " << arthmetic::add(firstNumber, secondNumber) <<endl;
				break;
			case 2:
				cout << "Result is : " << arthmetic::substract(firstNumber, secondNumber) <<endl;
				break;
			case 3:
				cout << "Result is : " << arthmetic::multiply(firstNumber, secondNumber) <<endl;
				break;
			case 4:
				cout << "Result is : " << arthmetic::divide(firstNumber, secondNumber) <<endl;
				break;
			case 5:
				cout << "Result is : " << arthmetic::modulus(firstNumber, secondNumber) <<endl;
				break;
			default:
				cout << "Operation not completed";
			break;
		}
		
		cout << "Countinue ? (y/n) : ";
		cin >> nextOperation;
		
	}while( nextOperation == "y");
	
	return 0;
}