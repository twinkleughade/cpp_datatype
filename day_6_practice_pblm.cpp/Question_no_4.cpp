// Write a program that converts inches to centimeters. For example, if the user enters 16.9 for a length in inches, the output would be 42.926 cm. (One inch equals 2.54 centimeters). Select appropriate datatype to hold length in inches and result in centimeters. Accept length from user. And display the output as 16.9 inches = 42.926 centimeters

/* Sample Run:
input
Enter length in inches: 16.9
output
16.9 inches = 42.926 centimeters.*/
# include <iostream>
using namespace std;
int main()
{
cout << "enter length in inches" << "\n";
float length_in_inches;
cin >> length_in_inches;

float centimeter = 2.54 * length_in_inches;
cout << "inches in centimeter = " << centimeter << "\n";

    return 0;
}