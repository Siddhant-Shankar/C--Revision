#include <iostream>
#include <string>

using namespace std;
int main()
{
    /* variables in c++ are portions of memory to store value
    they are stored using identifiers - valid sequences of letters, digits or underscores - also c++ is a case sensitive language
    Fundamental data types -> Character types, Numerical integer types, Floating point types and Boolean type

    Complete list of fundamental types is attached in the folder for more details(general rule of thumb is that for each category the smallest is 8 bits(1 byte))
    Note -> for integer types, the unsigned will always be able to represent a greater range of values( a 16 bit unsignd integer will be able to represent values from 0 to 65535 whereas a signed one will only be able to show -32768 to 32768)\

    C++ is a strong typed language which means that every variable be declared with its type prior to usage

    */
    int a;
    float my_num;
    // a = 5;
    my_num = 5.8;
    int result = my_num - a;
    // float result = my_num - a; will give a value of 0.8, whereas for the int values it gets rounded down to 0(implici type casting)
    cout << result << endl;
    cout << "size of int: " << sizeof(a) << "bytes" << endl; // common size of ints before initialization is 4 bytes which is 32 bits

    /*
    Strings are compond data types - not fundamental but declaration and all works the same in them as they do otherwise
    they come with many useful in built methods into the <string> header(since they are not standrard, you need to declare them elsewhere)
    */
    string first_name = "John";
    string last_name = "Doe";

    string full_name = first_name + " " + last_name;
    cout << full_name << endl;
    cout << size(full_name) << endl; // 8 characters -> 7 + space

    string text = "C++ strings";
    char first_char = text[0];
    char third_char = text[2];
    cout << first_char << " " << third_char << endl;

    int last_char_index = size(text) - 1;
    cout << text[last_char_index] << endl;

    // string_identifier.find('substring') returns the first index of a search

    // Operators - Once introduced to variables and constants, we can begin to operate with them by using operator
    int aa, b;                                 // aa = b = ?, this is typically stored in memory as 32 bits whgich is 4 bytes
    cout << sizeof(aa) << " in bytes" << endl; // 4 bytes right now
    aa = 10;                                   // a:10, b:?
    b = 4;                                     // a:10, b:4
    aa = b;                                    // a:4,  b:4
    b = 7;                                     // a:4,  b:7
    // operations are performed from right to left
    int xx = 11 % 3;
    cout << sizeof(xx) << " in bytes" << endl; // also stored as 4 bytes or 32 bits

    // C++ does have access to the incremement and decrement operators ->
    //++x, x+=1, and x = x + 1 all have the same effect

    /* Difference between ++x and x++
    ++x means the increment occurs prior to its usage in the expression
    x++ means the increment occurs after its usage in the expression
    */

    int test_1 = 5;
    int test_1_a = ++test_1;
    cout << "test_1_a: " << test_1_a << endl; // 6

    int test_2 = 5;
    int test_2_a = test_2++;
    cout << "test_2_a: " << test_2_a << endl; // 5

    // Comparing non - fundamental data types like strings
    string s_1 = "apple";
    string s_2 = "bannnana";
    if (s_1 < s_2)
    {
        cout << s_1 << "comes before " << s_2 << endl;
    } // these operations compare their aschii values

    // Ternary Operators
    // The conditional operator evaluates an expression, returning one value if that expression evaluates to true, and a different one if the expression is false

    int c = (a > b) ? a : b;
    cout << c;

    return 0;
}