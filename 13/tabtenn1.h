// tabtenn1.h -- a table-tennis base class
#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <string>
using std::string;
// simple base class
class TableTennisPlasyer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlasyer(const string & fn = "none",
                       const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const {return hasTable;};
    void ResetTable(bool v) { hasTable = v;};
};

//simple derived class
class RatedPlayer : public TableTennisPlasyer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string & fn = "none",
                const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlasyer & tp);
    unsigned int Rating() const { return rating; }
    void ResetRating (unsigned int r) { rating = r; }
};

#endif