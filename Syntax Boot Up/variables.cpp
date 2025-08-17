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
}