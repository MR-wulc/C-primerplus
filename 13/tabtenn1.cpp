// tabtenn1.cpp -- simple base-class methods
#include "tabtenn1.h"
#include <iostream>

TableTennisPlasyer::TableTennisPlasyer (const string & fn ,
    const string & ln , bool ht ) : firstname(fn), 
            lastname(ln), hasTable(ht) {}

void TableTennisPlasyer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

// RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r , const string & fn,
    const string & ln , bool ht ) : TableTennisPlasyer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlasyer & tp)
    : TableTennisPlasyer(tp), rating(r)
{
}