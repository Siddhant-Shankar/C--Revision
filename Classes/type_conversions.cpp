#include <iostream> 

using namespace std;

/* Implicit vs Explicit Type Casting 

Implicit Type Casting -> mplicit type casting, also known as coercion, is performed automatically by the compiler. This happens when the conversion is safe and there's no risk of data loss.

Explicit Type Casting -> Explicit type casting, or simply casting, requires a programmer to explicitly specify the conversion. It's used when there's a potential risk of data loss or when the compiler wouldn't perform the conversion automatically. This is necessary for conversions from a larger data type to a smaller one, such as from a double to an int, where the fractional part would be truncated.

*/

int main() {

    //implicit type casting example
    int myInt = 10;
    double myDouble = myInt;
    cout << myDouble << endl;

    double myDouble_2 = 9.99;
    int myInt_2 = (int)myDouble_2; // Explicit cast from double to int, myInt_2 will be 9

    cout << myInt_2 << endl;

    return 0;


}