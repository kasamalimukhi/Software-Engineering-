#include <iostream>
using namespace std;

class Calculator {
    public:
		void calculate() {
            cout << "Addition(+) "<< endl;
            cout << "Subtraction(-) "<<endl;
            cout << "Multiplication(*) "<< endl;
            cout << "Division(/) "<<endl ;
        }

        void calculator(float num1, float num2, char op) {
        	cout<<"Enter the operation you perform : ";
        	cin>>op;
        	if (op=='+' || op=='-' || op=='*' || op=='/'){
        	cout<<"enter number one : ";
        	cin>>num1;
        	cout<<"enter number two : ";
        	cin>>num2;
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
          else{
          	cout<<"invalid asign...";
		  }
        }
};

int main() {
    Calculator c;
    c.calculate();
    c.calculator(10,5,'m');
    return 0;
}

