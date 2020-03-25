// calling.cpp 定义，提供原型和调用
#include<iostream>
void simple(); // 函数声明

int main()
{
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();  // function call
    cout << "main() is finished with the simple() function.\n";
    // cin.get();
    return 0;
}

// 函数定义
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}