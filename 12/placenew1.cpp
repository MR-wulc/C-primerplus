// placenew1.cpp -- new, placement new, no delete
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;
class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0)
    {words = s; number = n; cout << words << "    constructed\n"; }
    ~JustTesting() { cout << words << ", " << number << endl;}
    void show() const { cout << words << ", " << number << endl;}
};
int main()
{
    char * buffer = new char[BUF];

    JustTesting *pc1, *pc2;

    pc1 = new(buffer) JustTesting;      // place object in buffer
    pc2 = new JustTesting("Heap1", 20); // place object in heap

    cout << "Memory block addresses:\n" << "buffer:"
         << (void *) buffer << "    heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->show();
    cout << pc2 << ": ";
    pc2->show();

    JustTesting *pc3, *pc4;
    pc3 = new(buffer) JustTesting("Bad Idea", 6);      // place object in buffer
    pc4 = new JustTesting("Heap2", 20);                // place object in heap

    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->show();
    cout << pc4 << ": ";
    pc4->show();

    delete pc2;
    delete pc4;
    delete [] buffer;
    cout << "Done\n";
    return 0;
}