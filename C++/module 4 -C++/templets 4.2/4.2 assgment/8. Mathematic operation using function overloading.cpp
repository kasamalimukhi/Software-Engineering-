#include <iostream>
using namespace std;

class Calculator {
    public:
		void calculate(int num1, int num2) {
            cout << "Addition: " << num1 + num2 << endl;
            cout << "Subtraction: " << num1 - num2 << endl;
            cout << "Multiplication: " << num1 * num2 << endl;
            cout << "Division: " << num1 / num2 << endl;
        }

        void calculate(int num1, int num2, char op) {
        	cout<<"Enter the operation you perform : ";
        	cin>>op;
            switch(op) {
                case '+':
                    cout << "Addition: " << num1 + num2 << endl;
                    break;
                case '-':
                    cout << "Subtraction: " << num1 - num2 << endl;
                    break;
                case '*':
                    cout << "Multiplication: " << num1 * num2 << endl;
                    break;
                case '/':
                    cout << "Division: " << num1 / num2 << endl;
                    break;
                default:
                    cout << "Invalid operator!" << endl;
            }
        }
};

int main() {
    Calculator c;
    c.calculate(10, 5);
    c.calculate(10, 5, '*');
    return 0;
}

