// Write a program to accept two numbers numerator and denominator of type float from user. Perform division and store the result in quotient variable. Print the value of quotient on the console.
# include <iostream>
using namespace std;
int main()
{
    cout << "enter numerator" << "\n";
    float numerator;
    cin >> numerator;

    cout << "enter denominator" << "\n";
    float denominator;
    cin >> denominator;

float quotient = numerator / denominator;
cout << "quotient =" << quotient << "\n";
}