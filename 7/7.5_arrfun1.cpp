// arrfun1.cpp -- functions with an array argument
#include<iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);          // 函数原型
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    int sum = sum_arr(cookies, ArSize);
    // 数组名解释为数组的第一个元素的地址
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}

int sum_arr(int arr[], int n)
{
    // arr[i] == *(arr + i)
    // &arr[i] == arr + i
    int total = 0;
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}