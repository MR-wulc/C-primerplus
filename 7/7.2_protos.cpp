// protos.cpp -- 使用原型和函数调用
#include<iostream>
void cheers(int);           //prototype 原型: 没有返回值
double cube(double x);      //prototype: 有返回值
int main()
{
    using namespace std;
    cheers(5);              //function call
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side); //function call
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));        //调用中两次出现类型不匹配的情况
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers!";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}