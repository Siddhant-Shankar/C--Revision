#include <iostream>

using namespace std;

// pointers -> variables that store the memory address of another variable

// & -> address operatior and * -> dereference operator

int main()
{
    string name = "Siddhant";

    string *p_name = &name; // this var points to the address of the name variable
    // cout << p_name; -> this will give us the addres it stores

    cout << *p_name << endl; // access the values at that given address

    // you can create pointers to datastructures like arrays
    string pizzas[5] = {
        "Pepperoni",
        "Margarita",
        "Supreme",
        "BBQ Chicken",
        "Hawaiian"};

    // arrays are already address to the first variable -> so we declare a pointer without the address of operator

    string *p_pizzas = pizzas;

    cout << *p_pizzas << endl;
    cout << *(p_pizzas + 1) << endl; // access the next index after the first one

    // the amount of space held by a pointer is always the same -> it does not change if it points to various data types(it only stores the address which is an 8 byte (64 bit))

    // pointer arithmetic -> arithmetic operations—like addition, subtraction, increment, and decrement—on pointers. It's used to navigate through arrays and other contiguous blocks of memory.

    // key notes about pointer arithmetic -> type aware[When you add an integer n to a pointer p, the compiler calculates the new memory address as p + n * sizeof(data_type) which means that it moves n placew though the array]

    double prices[] = {9.99, 12.50, 15.75, 20.00};
    double *p = prices; // p points to the first element (9.99)

    // Using increment
    cout << "First price: " << *p << endl; // Output: 9.99
    p++;                                   // Moves p to the next element
    cout << "Next price: " << *p << endl;  // Output: 12.50

    // Using addition
    double *third_price = prices + 2;
    cout << "Third price using addition: " << *third_price << endl; // Output: 15.75

    // Using pointer subtraction
    ptrdiff_t distance = third_price - p;
    cout << "Distance between pointers: " << distance << endl; // Output: 1
    return 0;
}