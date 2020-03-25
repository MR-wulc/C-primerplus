// sceref.cpp -- defining and using a reference
#include<iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;
    cout << "bunnies = " << bunnies << endl;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies << endl;
    cout << "rodents address = " << &rodents << endl;

    return 0;
}