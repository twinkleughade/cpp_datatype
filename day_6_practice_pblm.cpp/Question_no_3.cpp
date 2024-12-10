// Write a program to accept int length and int breadth of rectangle from user. Calculate int area and int perimeter of rectangle. Print the area and perimeter on the console.

  //  Formula to calculate area of square -> length * breadth
  //  Formula to calculate area of square -> 2 * (length + breadth)
# include <iostream>
using namespace std;
int main()
{
cout << "enter length of rectangle" << "\n";
int length;
cin >> length;

cout << "enter breadth of rectangle" << "\n";
int breadth;
cin >> breadth;

int area = length * breadth;
int perimeter = 2 * (length + breadth);

cout << "area of rectangle = " << area << "\n";
cout << "perimeter of rectangle = " << perimeter << "\n";


    return 0;
}