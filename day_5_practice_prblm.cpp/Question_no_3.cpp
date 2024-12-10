//Write a program to accept three integer number1, number2 and number3 from user. Perform addition of number1 and number2 and store the result in sum variable. Perform subtraction of number3 and sum and store the result in subtraction variable. Print the values of sum and subtraction on console.
# include <iostream>
using namespace std;
int main()
{
cout <<"enter number1" << "\n";
int number1;
cin  >> number1;

cout <<"enter number2" << "\n";
int number2;
cin >> number2;

cout <<"enter number3" << "\n";
int number3;
cin >> number3;

int sum = number1 + number2;
int subtraction = number3 - sum;

cout << "sum =" << sum << "\n";
cout << "subtraction =" << subtraction << "\n";



    return 0;
}