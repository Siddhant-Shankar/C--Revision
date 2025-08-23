#include <iostream>
using namespace std;

int main()
{
    int x = 100;
    // if and else
    if (x == 100)
    {
        cout << " x is valued at " << x << endl;
    }
    else if (x >= 0)
    {
        cout << "x is positive" << endl;
    }
    else
    {
        cout << " x is not valued at what you thought it was" << endl;
    }

    // Iteration statements

    while (x > 96)
    {
        cout << x << endl;
        --x;
    }

    {
        for (int n = 10; n > 0; n--)
        {
            cout << n << ", ";
        }
        cout << "liftoff!\n";
    } // the tree conditions are optional but the semicolons are still required

    // range - based for loop
    string str{"Hello!"};
    for (char c : str)
    {
        cout << "[" << c << "]";
    }
    cout << '\n';
    return 0;
}