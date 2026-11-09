#include <iostream>
#include <string>
using namespace std;

// this is the tag: Player
struct Player
{
	string name;
	int age;
	char pos;
};

int main()
{
	// uninitialized: Player p;
	// Initialization is Defining and Assigning at the same time:
	Player s = { "Sam", 50, 'D'}; // initialization list
	// Goes in order: first position for first member, second for second member, thrid for third member

	cout << s.name << endl;
	cout << s.age << endl;
	cout << s.pos << endl;
	cout << endl << endl;


	// partially filled initialization list:
	Player r = { "Robert" }; // Legal
	cout << r.name << endl << r.age << endl << r.pos << endl; // prints 0 for age, because 0 is ASCI code for non-printable character

	// in C++ 11, you don't need to include the '=' sign:
	Player e { "Edward", 43, 2 }; // Special! Number 2 became an emoji character!

	cout << endl << endl;
	cout << e.name << endl << e.age << endl << e.pos << endl;

    cout << char(7); // sound of a bell!

	return 0;
}