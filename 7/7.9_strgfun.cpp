// strgfun.cpp -- functions with a string argument
#include<iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
    using namespace std;
    char mmm[15] = "minnimum";      // string in an array
    char *wail = "ululate";         // wail points to string

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)            // 不为空值符号 '\0'
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}