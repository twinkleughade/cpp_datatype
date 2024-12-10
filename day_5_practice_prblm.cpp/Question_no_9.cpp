// Write a program to accept radius of circle from user. And calculate area and perimeter of circle. Display the result on console. Hint value of PI = 3.14 formula
# include <iostream>
using namespace std;
int main()
{
cout << "enter the radius of circle" << "\n";
int radius;
cin >> radius;

float area_of_circle = 3.14 * radius *radius;
float perimeter_of_circle = 2 *  3.14 * radius;

cout << "area of circle =" << area_of_circle << "\n";
cout << "perimeter of circle =" << perimeter_of_circle << "\n";














    return 0;
}