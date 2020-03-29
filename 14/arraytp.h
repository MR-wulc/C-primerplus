//  arraytp.h -- array template
#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTp
{
private:
    T ar[n];
public:
    ArrayTp() {}
    explicit ArrayTp(const T & v);
    virtual T & operator[] (int i);
    virtual T operator[] (int i) const;
};

template <class T, int n>
ArrayTp<T,n>::ArrayTp(const T & v)
{
    for (int i = 0; i < n; i++)
        ar[i] = v;
}

template <class T, int n>
T & ArrayTp<T,n>::operator[] (int i)
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i
            << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

template <class T, int n>
T ArrayTp<T,n>::operator[] (int i) const
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i
            << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif