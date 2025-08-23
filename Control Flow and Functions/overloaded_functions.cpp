#include <iostream>
using namespace std;

// we can overload functions based on the signature which only includes the name of the function and the parameters(their type, their ordering and the number of them)
int operate(int a, int b)
{
    return (a * b);
}

double operate(double a, double b)
{
    return (a / b);
}

// templates allow us to write generic code that can work with any data type - acting as a blueprint for functions and classes
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
} // example function declaration -> based on this you can create maximum functions with integers and double data types

int main()
{
    int x = 5, y = 2;
    double n = 5.5, m = 2.0;
    cout << operate(x, y) << '\n'; // returns 10
    cout << operate(n, m) << '\n'; // returns 2.5

    cout << maximum(x, y) << endl; // gives out x
    cout << maximum(n, m) << endl; // gived out n

    return 0;
}

/*
Scope Notes:
An entity declared outside any block has global scope, meaning that its name is valid anywhere in the code. While an entity declared within a block, such as a function or a selective statement, has block scope, and is only visible within the specific block in which it is declared, but not outside it.

Variables with block scope are known as local variables.


*/