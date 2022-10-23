#include<iostream>
using namespace std;

int main(){
   char c; 

    do { 
    char i;
    int num1, num2, add, minus, prod, div, result;
   
cout << "Mini Calculator" << endl;
cout << "Input first number: " ;
cin >> num1;
cout << "Input second number: " ;
cin >> num2;

cout << "Pick one operation to be use: " << endl;
cout << "a. Addition" << endl << "b. Subtraction" << endl << "c. Multiplication" << endl << "d. Division" << endl << "e. Modulus"<< endl;
cout << "Input here the letter: ";
cin >> i;

switch (i) {
    case 'a': 
    result = num1 + num2;
    cout << "The result is: " <<result << endl;
    break;
    case 'b':
    result = num1 - num2;
    cout << "The result is: " << result << endl;
    break;
    case 'c':
    result = num1 * num2;
    cout << "The result is: " <<result << endl;
    break;
    case 'd':
    break;
    result = num1 / num2;
    cout <<"The result is: " << result << endl;
    break;
    case 'e':
    result = num1 % num2;
    cout <<"The result is: " << result << endl;
    break;
    default: 
    cout << "Invalid Operation" << endl;
    
}  

cout << "Do you want to continue? (Y/n): ";
    cin >> c;
}while(c == 'y' || c == 'Y');

    return 0;
};