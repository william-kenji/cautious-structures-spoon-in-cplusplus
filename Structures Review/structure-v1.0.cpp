#include <iostream>
using namespace std;

struct example
{
    int a;
    int b;
    double c;
};

int main()
{
    example w, y;
    w.a = 20;
    w.b = 34;
    w.c = -4.5;

    cout << w.a << " " << w.b << " " << w.c << endl;

    y.a = 34;
    y.b = -30;
    y.c = 4.5;

    cout << y.a << " " << y.b << " " << y.c << endl;
    
    int total = w.a + y.b;
    cout << total << endl;


    // For whitespace in vs code terminal:
    cout << endl << endl << endl << endl;
    return 0;
}