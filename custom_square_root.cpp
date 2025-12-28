/* Algorithm Challenge & Problem Solving
 * 50 - Custom Square Root Function (Series Finale)
 *
 * This program implements a custom square root calculation using mathematical principles, then compares the result with the built-in sqrt() function in C++.
 *
 * Mathematical Rule:
 * - The square root of a number is the value that, when multiplied by itself, produces the original number.
 * - Any square root can be represented as raising the number to the power of 0.5.
 *
 * This challenge marks the final algorithm in this series (Algorithms2 #1 → #50).
 */

#include <iostream>
#include <cmath>

using namespace std;

float MySqrt(float Number)
{
    // Calculate square root using power function
    // sqrt(Number) == pow(Number, 0.5)
    return pow(Number, 0.5);
}

float ReadNumber()
{
    float Number;

    // Read a floating-point number from the user
    cout << "Enter Float Number\n";
    cin >> Number;

    return Number;
}

int main()
{
    float Number = ReadNumber();

    // Display custom square root result
    cout << "My Sqrt = " << MySqrt(Number) << endl;

    // Display C++ built-in square root result for comparison
    cout << "C++ Sqrt = " << sqrt(Number) << endl;

    return 0;
}
