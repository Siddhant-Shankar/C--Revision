#include <iostream>
#include <string>

using namespace std;

//A class is a blueprint or template for creating objects. Just like a data structure (e.g., struct) groups variables together, a class groups not only data members (attributes) but also functions (behaviors).

/* Access specifiers: 

private: data/functions accessible only inside the class.

protected: accessible in the class and its derived classes.

public: accessible anywhere an object is visible.

*/

/* 

Constructors

Same Name as the Class: A constructor's name must be exactly the same as the class name.

No Return Type: Constructors do not have a return type, not even void.

Automatic Invocation: You don't call a constructor directly; the compiler does it for you whenever you create an object. For example, Rectangle rect; calls the default constructor, and Rectangle rect(5, 10); calls a constructor that accepts two integer arguments.

Overloading: A class can have multiple constructors, as long as each has a different number or type of parameters. This is known as constructor overloading and allows for different ways to initialize an object.

*/


/* 
Pointers to classes -> Objects can also be pointed to by pointers: Once declared, a class becomes a valid type, so it can be used as the type pointed to by a pointer.
*/


class Rectangle { 
    string color; 
    public: 
        int width;
        int height;
        Rectangle(int, int);
        void set_values (int,int);
        int area() {return (width*height);};
};

// void Rectangle::set_values(int x, int y) { 
//     width = x; 
//     height = y; 
// }

Rectangle::Rectangle(int a, int b) { 
    width = a;
    height = b; 
}

int main() {
    Rectangle rect_a(4,5);
    Rectangle * foo, * bar, * baz;
    foo = &rect_a;
    // rect.width = 5; //allowed, because width is public
    // rect.color = "blue" // not allowed, because color is private 
    // rect.set_values (3,4);
    cout << "area: " << rect_a.area() << endl;
    cout << "area: " << (*foo).area();
    return 0;
} 