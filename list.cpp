// list.cpp -- using a list
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) { std::cout << n << " "; }

int main()
{
    using namespace std;
    list<int> one(5, 2);    // list of 5 2s
    int stuff[5] = {1,2,3,8,6};
    list<int> two;
    
}