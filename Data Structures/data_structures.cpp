#include <iostream> 
#include <string>
#include <sstream>

using namespace std;

/* 
Understanding Structs
Structs work by allowing you to combine different data types—like int, double, char, or even other structs—into one new type.
Structs and CLasses are different because by defualt all members in a struct are public whereas in classes, all are defaulted to private


*/

struct movies_t {
  string title;
  int year;
} mine, yours;

//mine & yours are two instaces of the movies_t struct declared already

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}

int main() {
    string mystr;
    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;
    //to access members of a struct use the dot notation

    cout << "Enter title: ";
    getline (cin,yours.title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite movie is:\n ";
    printmovie (mine);
    cout << "And yours is:\n ";
    printmovie (yours);



    return 0;
}

