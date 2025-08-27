#include <iostream>
#include <typeinfo>

using namespace std;

// pointers -> variables that store the memory address of another variable

// & -> address operatior and * -> dereference operator

void increase(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}

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
    double *pr = prices; // p points to the first element (9.99)

    // Using increment
    cout << "First price: " << *pr << endl; // Output: 9.99
    pr++;                                   // Moves p to the next element
    cout << "Next price: " << *pr << endl;  // Output: 12.50

    // Using addition
    double *third_price = prices + 2;
    cout << "Third price using addition: " << *third_price << endl; // Output: 15.75

    // Using pointer subtraction
    ptrdiff_t distance = third_price - pr;
    cout << "Distance between pointers: " << distance << endl; // Output: 1

    // Pointers can be used to access a variable by its address, and this access may include modifying the value pointed. But it is also possible to declare pointers that can access the pointed value to read it
    int x;
    int y = 10;
    const int *p = &y;
    x = *p; // ok: reading p
    // *p = x;          // error: modifying p, which is const-qualified

    // void pointers
    // The void type of pointer is a special type of pointer. In C++, void represents the absence of type. Therefore, void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties).
    // This gives void pointers a great flexibility, by being able to point to any data type, from an integer value or a
    // float to a string of characters. In exchange, they have a great limitation: the data pointed to by them cannot be directly
    // dereferenced (which is logical, since we have no type to dereference to), and for that reason, any address
    // in a void pointer needs to be transformed into some other pointer type that points to a concrete data type before being dereferenced.
    // see above for an example

    char a = 'x';
    int b = 1602;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));
    cout << a << ", " << b << '\n';

    // null pointers
    // null pointers or pointers that point to spaces in memory that do not exist are valid but can never be dereferenced(which would cause several issues)
    int *m; // uninitialized pointer (local variable)

    int myarray[10];
    int *q = myarray + 20; // element out of bound

    // if you need a pointer to explicityly point to nothing, we use the nullptr syntax
    int *null_example = nullptr; // this stores the variable as a nullptr, dereferencing will crash the program

    cout << typeid(null_example).name(); // returns an instance of null ptr which is its own object type

    return 0;
}