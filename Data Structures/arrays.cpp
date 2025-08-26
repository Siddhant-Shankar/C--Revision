#include <iostream>
using namespace std;

int main()
{

    /*
    An array is a series of elements of the same type placed in
    contiguous memory locations that can be individually referenced by adding an index to a unique identifier.*/

    int foo[5]; // type name [elements] -> The elements field within square brackets [], representing the number of elements in the array, must be a constant expression, since arrays are blocks of static memory whose size must be determined at compile time, before the program runs.

    // foo = {25, 35, 45}; -> this is not allowed -> values must be given at initialization or individual values must be given through accessing the index
    foo[0] = 25;
    foo[1] = 35;
    foo[2] = 45;
    int arr_size = sizeof(foo) / sizeof(foo[0]);

    for (int i = 0; i < /* foo.size()*/ arr_size; i++)
    {
        cout << foo[i] << endl;
    }

    // Multi - dimensional arrays -> Multidimensional arrays can be described as "arrays of arrays"

    int mult_dimension[2][3]; // the dimensions must be given or only one dimension may be given if the initialization of values is also given so that the compiler may deduce the number of the other dimension

    // each additional dimension of memory exponentially increases the memory they hold -> char century [100][365][24][60][60]; -> declares a char for each second in a century which would hold 3 billion char

    // we can use the #include <array> header which has useful functions like .size(), .at(bounds checking ), .front(returns a reference to first element), .back(returns a reference to last element)
    return 0;
}