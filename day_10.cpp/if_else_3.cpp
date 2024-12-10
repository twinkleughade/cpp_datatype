// WAP to accept a number from the user, if the number is divisible by 5 print its is divisible by 5 otherwise print not divisible by 5
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
        cout << " not divisible " << "\n";
    }
}