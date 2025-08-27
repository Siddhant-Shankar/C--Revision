#include <iostream> 
#include <format>

using namespace std;

//Dynamic memory in C++ lets you allocate memory during a program's execution, rather than at compile time. 

/* Spaces of Memory in c++

Stack Memory - contigous block of memory used for local variables and call information for functions -> It operates on a Last-In, First-Out (LIFO) basis, like a stack of plates.
If a function is called in code, a stack frame is pushed to the stack with the local variables and its return address.
. When the function returns, its stack frame is popped off, and all the memory it used is automatically deallocated.

Heap Memory -> large pool of memory used for dynamic memory allocation. You manually allocate memory here using the new keyword and unlike the stack, memory here persists and needs to be manually deallocated
 However, this manual management can lead to memory leaks if you forget to deallocate memory, or to dangling pointers if you try to access memory after it's been freed. 

 Static/Global Memory -> The static or global memory space is for variables that have a static storage duration. This includes global variables, static local variables within a function, and static member variables of a class. The memory for these variables is allocated at compile time and persists for the entire duration of the program. 
 Not all const variables go here(only the global ones, outside of any functions or classes)


*/

//new -> allocate memory on the heap(returns a pointer) and delete -> deallocate memory on the heap

int main() {

    /* 
    two use cases of new: 
    pointer = new type -> points to a single dynamic object like int or something 
    pointer = new type [number_of_elements] -> points to an array of objects 
    */

    int* foo;
    foo = new int[5];


    //this is very different from a normally declared array. In that, the size needs to be a constant. In our dynamically allocated array, we can declare it using any variable(like user input)

    // if the allocation fails(dynamic memory is exhausted) _. it throws an exception or the pointer returns a nullptr

    int * foo_2;
    foo_2 = new (nothrow) int [5];
    if (foo_2 == nullptr) {
    // error assigning memory. Take measures.
    }


    /* delete keyword syntax
    

        delete pointer;
        delete[] pointer;
    
    */

    delete[] foo;
    delete[] foo_2;

    //full program using new and delete - asking user for inputs

    int i, n;
    cout << "How many numbers would you like to print: "; 
    cin >> i;
    int* p;
    p = new int[i];
    for (n = 0; n < i; n++) { 
        cout << "Enter a number here: " << endl;
        cin >> p[n];
    }
    cout << " you have entered: " << endl;
    for (n = 0; n < i; n++) { 
        cout << p[n] << " , "; 
    }
    delete[] p;




    return 0; 
}