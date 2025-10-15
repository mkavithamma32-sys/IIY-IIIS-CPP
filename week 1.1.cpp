#include <iostream>
using namespace std;

int fact(int n);  // Function declaration

int main()
{
    int n;
    cout << "Enter n value: ";
    cin >> n;

    int result = fact(n);  // Corrected variable name

    if (result == -1)
        cout << "Factorial is not defined" << endl;
    else
        cout << "Factorial: " << result << endl;

    return 0;
}

int fact(int n)  // Corrected function definition
{
    if (n < 0)
        return -1;  // Factorial not defined for negative numbers
    else if (n == 0)
        return 1;   // Base case
    else
        return n * fact(n - 1);  // Recursive call
}

