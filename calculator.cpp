#include <iostream>
using namespace std;

int main() {
	char operation;
	int num1, num2;

	cout << "Enter two numbers: ";
	cin >> num1>>num2;
	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;
	switch (operation) {
		case '+':
			cout<<"Result: "<< num1+num2<<endl;
			break;
		case '-':
			cout<<"Result: "<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Result: "<<num1*num2<<endl;
			break;
		case '/':
			cout<<"Result: "<<num1/num2<<endl;
			break;
		default:
			cout << "Error: Invalid operation." << endl;
			break;
	}

	return 0;
}
