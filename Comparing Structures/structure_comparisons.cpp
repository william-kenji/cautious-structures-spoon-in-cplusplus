#include <iostream>
using namespace std;


struct Point
{
	int x;
	int y;
};

int main()
{
	Point A, B;

	A.x = 1;
	A.y = 2;

	B.x = 5;
	B.y = 4;

	/*if (A == B) // WRONG!*/
	// Just remember you can't compare structures directly
	if (A.x < B.x && A.y < B.y)
	{
		cout << "A < B\n";
	}
	else
		cout << "A >= B\n";

	if (A.x + A.y < B.x + B.y)
		cout << "A < B\n";
	else
		cout << "B <= A\n";
}