#include <iostream>
using namespace std;

struct Circle
{
    double radius;
    double area;
};

Circle getCircle(); // return a circle!

int main()
{
    Circle p;
    p = getCircle(); // this only works because getCircle() will return a circle

    cout << "Radius of the circle: " << p.radius << endl;
    cout << "Area of the circle: " << p.area << endl;
    return 0;
}

Circle getCircle()
{
    Circle c;
    const double PI = 3.14159;
    cout << "Enter a radius: ";
    cin >> c.radius;
    c.area = PI * c.radius * c.radius;

    return c; // just return 'c'
}