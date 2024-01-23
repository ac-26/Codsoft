//SIMPLE CALCULATOR
#include <iostream>
using namespace std;
int main(){

    int choice = 1;
    while(choice){

        cout <<endl;
        cout << "\t\t\t----------------SIMPLE CALCULATOR----------------" << endl;
        cout << endl;
        long long int op1;
        cout << "-> Enter first number: ";
        cin >> op1;

        long long int op2;
        cout << "-> Enter second number: ";
        cin >> op2;
        cout << endl;
        char sign;
        cout << "Select the operation you want to perform: " << endl;
        cout << endl;
        cout << "-> +" << endl << "-> -" << endl << "-> *" << endl << "-> /" << endl;
        cout << endl;
        cin >> sign;
        cout << endl;
        cout << "\t\t\t----------------CALCULATING----------------" << endl;

        cout << endl;
    
        switch(sign){
            case '+':
            cout << "-> Your answer: " << endl;
            cout << op1 << " " << sign << " " << op2 << " = " << op1 + op2 << endl;
            break;
        
            case '-':
            cout << "-> Your answer: " << endl;
            cout << op1 << " " << sign << " " << op2 << " = " << op1 - op2 << endl;
            break;

            case '/':
            cout << "-> Your answer: " << endl;
            cout << op1 << " " << sign << " " << op2 << " = " << op1 / op2 << endl;
            break;

            case '*':
            cout << "-> Your answer: " << endl;
            cout << op1 << " " << sign << " " << op2 << " = " << op1 * op2 << endl;
            break;

            default:
            cout << "INVALID COMAND" << endl;
        }

        cout << "-> Do you want to continue: (0 or 1)" << endl;
        cin >> choice;
    }
    if(choice == 0){
        cout << "GoodBye!" << endl;
    }
}