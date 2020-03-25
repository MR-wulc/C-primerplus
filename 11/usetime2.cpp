// usetime2.cpp -- using the first draft of the Time class
// comile usetime2.cpp and mytime2.cpp together
#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time dif;
    Time adjustde;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;   // use operator+()
    total.Show();
    cout << endl;

    dif = weeding - waxing;     // use operator-()
    cout << "weeding time - waxing time = ";
    dif.Show();
    cout << endl;

    adjustde = total * 1.5;     // use operator+()
    cout << "adjusted work time = ";
    adjustde.Show();
    cout << endl;
    
    return 0;
}