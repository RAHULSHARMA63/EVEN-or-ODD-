#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter an integer: ";
    cin >> n;
    
    (n % 2 == 0) ? cout << n << " is even number." :  cout << n << " is odd number.";
    
    return 0;
}
