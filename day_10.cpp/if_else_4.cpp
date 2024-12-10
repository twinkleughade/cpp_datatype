// WAP to check whether the given number is divisible by 5, if yes print divisible by 5, otherwise give the number that will be added 
//to the input number, so it can be divisible by 5

# include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "enter a number" << "\n";
    cin >> number;

    if(number % 5 == 0){
        cout << "divisible by 5" << "\n";
    }
    else{
        int remainder = number % 5;
        int result = 5 - remainder;
        cout << "add "  << " " <<  result  << "to number, to make it divisible by 5" << "\n";
    }
}