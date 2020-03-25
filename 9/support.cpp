// support.cpp -- use external variable
// compile with external.cpp
#include <iostream>
extern double warming;          // use warming form another file

// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt)
{
    extern double warming;      // optional redeclaration
    warming += dt;              // uses global warming
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()
{
    double warming = 0.8;

    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees.\n";
}