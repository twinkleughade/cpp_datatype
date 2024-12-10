// Write a program to accept two numbers numerator and denominator of type int from user. Perform modulo-division and store the result in remainder variable. Print the value of remainder on the console.
# include <iostream>
using namespace std;
int main()
{
     cout << "enter the numerator" << "\n";
     int numerator;
     cin >> numerator;

     cout << "enter the denominator" << "\n";
     int denominator;
     cin >> denominator;

     int remainder = numerator % denominator;

     cout << "remainder =" << remainder << "\n";

     return 0;
}