#include <iostream>
using namespace std;


struct Circle
{
    double radius;
    double area;
};

double findArea(double r)
{
    const double PI = 3.14159;
    double area = PI * r * r;
    return area;
}

// pass-by-copy
void print(const Circle& d) // constant reference with least-privilege principle
{
    cout << "Radius = " << d.radius << endl;
    cout << "Area = " << d.area << endl;
}

// pass-by-reference
void fillCircle(Circle& r)
{
    cout << "Enter the radius: ";
    cin >> r.radius;
    r.area = findArea(r.radius);
}

int main()
{
    Circle c;
    c.radius = 1.2;
    c.area = findArea(c.radius);
    cout << "Radius = " << c.radius << endl;
    cout << "Area = " << c.area << endl; 
    cout << endl << endl;
    print(c); // pass-by-copy

    cout << "\n\n\tNow with fillCircle() function:\n";
    fillCircle(c); // pass-b-reference
    print(c);
    // more efficient to use pass-by-reference

    return 0;
}