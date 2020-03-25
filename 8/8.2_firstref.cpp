// firstref.cpp -- defining and using a reference
#include<iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    // addresses to type unsinged
    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;

    return 0;
}