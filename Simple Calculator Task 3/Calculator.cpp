#include<iostream>
#include<cmath>
using namespace std;
int name(){
    string operation;
    double number1, number2;
    printf("Welcome I am here to Add Subtract Multiply & Division");
    cout<<"Enter First Number: ";
    cin >> number1;
    cout<<"Enter Operator (+, -, *, /): ";
    cin >> operation;
    cout<<"Enter Second Number: ";
    cin >> number2;

    if (operation == "+"){
        cout << number1 + number2;
    } 
    else if (operation == "-") {
        cout << number1 - number2;
    } 
    else if (operation == "*") {
        cout << number1 * number2;
    } 
    else if (operation == "/") {
        cout << number1 / number2;
    } 
    else {
        cout << "Not a recognize operation!";
    }
    
    return 0;

}