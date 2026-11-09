#include <iostream>
#include <string>

using namespace std;

// structure declaration
struct Special
{
    string name;
    float f;
};

int main()
{
    // define an array of structures
    const int SIZE = 3;
    Special a[SIZE]; // array of specials!
    

    a[0].name = "Cat";
    a[0].f = 5.4;

    // better still, initialization lists:
    Special b[const] = {{"Rick", 3.4}, {"Tom", 4.5}, {"Herald", 6.8}};
    for (int i = 0; i < 3; i++)
    {
        cout << b[i].name << " " << b[i].f << endl;
    }

    return 0;
}