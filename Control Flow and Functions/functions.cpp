#include <iostream>

using namespace std;

int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
    // if i do not include a return type in the function, the behavuiour becomes unpredictable, it may return 0, 9 or any other random number
}

// functions with no type
void printmessage()
{
    cout << "Hello world" << endl;
}

/* pass by reference - not value:
if you pass arguments by value, the value externally does not change, it remains the same outside the function as if the function never happend
in order to access and edit variables outside a function, you need to pass by reference -> int& a, int& b and so on
*/

void duplicate(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

// recursive functions
long factorial(const int &a)
{
    if (a > 1)
    {
        return (a * factorial(a - 1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int zx;
    zx = addition(5, 4);
    cout << "the result with the function: " << zx << endl;
    printmessage(); // because it does not return a value there is no need to assign it a variable
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl; // because we passed by reference, the values with x, y and z have changed\

    long number = 3;
    cout << number << "! = " << factorial(number);

    return 0;
}

// The order in which they are defined does not matter, but main is always called first during a programs operation
