// every base program in c++
#include <iostream>
/*lines started with # in c++ are meant to depict a preprocesser.
These are special lines interepreted before the compilation of the program itself
the iostream is a header in c++ meant to perform standard input and output procedures*/

// declaration of a function, if you had to add parameters they would be in the parenthesis

/* The function named main is a special function in all C++ programs; it is the function called when the program is run.
The execution of all C++ programs begins with the main function,
regardless of where the function is actually located within the code.*/
int main()
{
    std::cout << "Hello world";
    /*Example of a statement in c++, which has three parts:
        std::cout is the standard output character device(usually the computers terminal)
        << which indicates that whatever follows is to be put to the screen
        "Hello World" which is your string given to the terminal
        the semicolon(;) indicates the end of a statement
    */
}

/* Using namespace std
 They create a declarative region that provides a scope to the identifiers (variables, functions, classes, etc.) inside them.
 The C++ Standard Library is a collection of classes and functions that are part of the C++ language standard. It provides a wide range of functionalities, from input/output operations to data structures and algorithms.
 You can also use a using declaration, like using namespace std;, which makes all the names from the std namespace directly accessible without the std:: prefix
 */