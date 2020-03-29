// twod.cpp -- making a 2-d array
#include <iostream>
#include "arraytp.h"
int main()
{
    using std::cout;
    using std::endl;
    ArrayTp<int, 10> sums;  //10个int数组
    ArrayTp<double, 10> aves;
    ArrayTp< ArrayTp<int, 5>, 10> twodee;

    int i,j;

    for (i = 0; i < 10; i++)
    {
        sums[i] = 0;
        for (j = 0; j < 5; j++)
        {
            twodee[i][j] = (i + 1) * (j + 1);
            sums[i] += twodee[i][j];
        }
        aves[i] = (double) sums[i] / 10;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout.width(2);
            cout << twodee[i][j] << " ";
        }
        cout << ": sum = ";
        cout.width(3);
        cout << sums[i] << ", average = " << aves[i] << endl;
    }

    cout << "Done. \n";

    return 0;
}