// Write a program to accept int side of a Square from user. Calculate int area and int perimeter of square. Print the area and perimeter on the console.

   // Formula to calculate area of square -> side * side
   // Formula to calculate area of square -> 4 * side
# include <iostream>
using namespace std;
int main()
{
cout << "enter side of a square" << "\n";
int side_of_square;
cin >> side_of_square;

int area = side_of_square * side_of_square;
int perimeter = 4 * side_of_square;

cout << "area of square  = " << area << "\n";
cout << "perimeter of square = " << perimeter << "\n";

    return 0;
}