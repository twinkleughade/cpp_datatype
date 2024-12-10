/* Ravi and Shyam were playing a game. In the first turn of the game, Ravi will give an integer dividend and an integer divisor to Shyam. Then Shyam has to tell him the remainder of the division. In the second turn, Shyam will repeat the procedure.

To help them, please write a program that accepts Dividend, and Divisor from the user and print the remainder on the console. hint*/
# include <iostream>
using namespace std;
int main()
{
cout << "enter dividend" << "\n";
int dividend;
cin >> dividend;

cout << "enter divisor" << "\n";
int divisor;
cin >> divisor;

int remainder = dividend / divisor;
cout << "remainder =" << remainder << "\n";










//dividend 9 divisor 2
    return 0;
}