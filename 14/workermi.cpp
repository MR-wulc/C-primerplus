// workermi.cpp -- working class methods with MI
#include "workermi.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// worker methods
Worker::~Worker() {}

// protected methods
void Worker::Data() const
{
    cout << "Name: " << fullName;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
    getline(cin, fullName);
    cout << "Enter worker's id: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;    
}

// waiter methods
void Waiter::Set()
{
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "Category: waiter\n";
    Worker::Data();
    Data();
}

// protected methods
void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;    
}

// singer methods
char * Singer::pv[] = {"other", "alto", "contralto", "soprano",
                    "bass", "baritone", "tenor"};

void Singer::Set()
{
    cout << "Enter singer's vocal ranger:\n ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

// protected methods
void Singer::Data() const
{
    cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get()
{
    cout << "Enter number for singer's vocal ranger:\n ";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << "   ";
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    cin >> voice;
    while (cin.get() != '\n')
        continue;    
}

// singerwaiter methods
void SingerWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingerWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingerWaiter::Set()
{
    cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingerWaiter::Show() const
{
    cout << "Gategory: singing waiter\n";
    Worker::Data();
    Data();
}