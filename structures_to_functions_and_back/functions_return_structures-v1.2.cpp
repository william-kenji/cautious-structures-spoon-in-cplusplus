// structures let you return multiple values from a function
#include <iostream>
using namespace std;

struct Nums
{
    int w, x, y, z;
};

Nums foo()
{
    Nums n = {88, 3, 9, 0};
    return n; // returning more than one
}
int main()
{
    Nums p = foo();
    cout << p.w << " " << p.x << " " << p.y << " " << p.z << endl;
    return p.z;
}