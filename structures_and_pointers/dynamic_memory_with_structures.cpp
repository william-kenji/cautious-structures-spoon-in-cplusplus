#include <iostream>
using namespace std;

struct Wee
{
    int x, y;
};

int main()
{
    // dynamically allocate a Wee
    Wee* ex;
    ex = new Wee; // you can initialize it also ... = new Wee { 45, 3 };

    ex-> x = 45;
    ex-> y = 3;

    cout << (*ex).x << ", " << (*ex).y << endl;

    // Now dynamically allocate an array of Wee's
    Wee* u = new Wee[3]; // can also initialize as { {1, 2}, {3, 4}, {5, 6} }

    u[0].x = 3;
    u[0].y = 2;

    (*(u + 1)).x = 7;
    (*(u + 1)).y = 4;

    u[2].x = 0;
    u[2].y = 1;


    cout << endl << endl << "Contents:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << u[i].x << ", " << u[i].y << endl;
    }





    delete[] u;
    delete ex;
}