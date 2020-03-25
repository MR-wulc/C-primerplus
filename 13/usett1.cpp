// usett1.cpp -- using a base class
#include <iostream>
#include "tabtenn1.h"

int main()
{
    using std::cout;
    using std::endl;
    TableTennisPlasyer player1("Chuck", "Blizzard", true);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();
    if (rplayer1.HasTable())
        cout << ": hase a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name();
    if (player1.HasTable())
        cout << ": hase a table.\n";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;
// initialize RatedPlayer using TableTennisPlayer object
    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
    
    return 0;
}