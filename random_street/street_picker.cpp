#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

struct StreetAddress
{
    int house_number;
    string street_name;
};

StreetAddress make_random_address();

int main()
{
    srand(time(0));
    StreetAddress te = make_random_address();
    cout << "Your house number is: " << setw(30) << te.house_number << endl;
    cout << "Your street is: " << setw(30) << te.street_name << endl;
    cout << char(2);
    cout << char(7);
    return 0;
}

StreetAddress make_random_address()
{
    const int SIZE = 6;
    string names[SIZE] = { "Main Street", "Jackville Road", "Northsouth Street", "Eastwest Street", "Somewhere Street", "Nothingsburg Street"};
    StreetAddress result;
    result.house_number = 100 + rand() % 1000;

    int i = rand() % 6;
    result.street_name = names[i];
    return result;
}