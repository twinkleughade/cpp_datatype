// WAP to accept a number from user, if the number is greater than 100, print greater than 100, otherwise print less than 100.
# include <iostream>
using namespace std;
int main()
{
  int number = 0;
  cout << "Enter the number"   << "\n";
  cin >> number;

  if(number > 100) {
    cout << "greater than 100" << "\n";
  }
  else{
    cout << "less than 100" << "\n";
  }
}