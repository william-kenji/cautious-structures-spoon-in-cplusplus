#include <iostream>
using namespace std;

struct Wee
{
    int x, y;
};



int main()
{
    Wee w { 5, 10 };
    // create a pointer that holds a memory address for a Wee pointer:
    Wee* p = &w;

    cout << w.x << endl; // this works and shows 5
    /*
    this below doesn't work! Why?
    Because of order of operations. It is saying "Dereference x because the dot has priority".
    It basically extracts 5, and tries to dereference 5 [>_<]

    cout << *p.x << endl;
    */
    cout << (*p).x << endl; // works
    cout << p->x << endl; // the same! syntactically cleaner

    // an arrow with pointing symbol
    cout << p->y << endl;

    return 0;
}