// Write a program to accept two floating point numbers from user. And perform multiplication and division on the numbers. Display the result on console.


# include <iostream>
using namespace std;
int main()
{
cout << "enter number 1" << "\n";
float number_1;
cin >> number_1;

cout << "enter number 2" << "\n";
float number_2;
cin >> number_2;

float multiplication = number_1 * number_2;
float division = number_1 / number_2;

cout << "multiplication =" << multiplication << "\n";
cout   << "division =" << division << "\n";











    return 0;
}