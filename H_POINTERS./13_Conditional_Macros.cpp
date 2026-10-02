#include <iostream>
using namespace std;
// Define a macro named DEBUG
#define DEBUG

int main()
{
    int x = 5, y = 10;
    int sum = x + y;
    int z = 9;
// This block will only be compiled if DEBUG is defined
#ifdef DEBUG
    cout << "[DEBUG] x = " << x << endl;
    cout << "[DEBUG] y = " << y << endl;
    cout << "[DEBUG] sum = " << sum << endl;
#endif
    cout << " z = " << z << endl;
    // Always compiled
    cout << "Sum: " << sum << endl;

    return 0;
}