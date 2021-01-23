#include<iostream>
using namespace std;
int main ()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number >= 0)
        cout << number << " is a positive number.";
    else 
        cout << number << " is a negative number.";
    return 0;
}
