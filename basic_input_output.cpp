#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
using namespace std;

int main()
{
    // normal input and output is understood, need to go over how to extract entire strings from the database
    string mystr;
    cout << "Hello what is your name" << endl;
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";

    // in order to input entire strings we need to use getline not just cin as they end on any terminating charcter(including just one space)

    // we use the string stream to treat strings as streams and convert strings to integers
    int price;
    cout << "Enter price: " << endl;
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Price is currently: " << price << endl;
    cout << "type associated with var: " << typeid(price).name() << endl; // i means an integer on the compiler
    return 0;
}