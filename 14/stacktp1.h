// stacktp1.h -- modified Stack template
#ifndef STACKTP1_H_
#define STACKTP1_H_
template <class Type>
class Stack
{
private:
    enum {SIZE = 10};    // default size
    int stacksize;
    Type * items;       // holds stack items
    int top;            // index for top stack item
public:
    explicit Stack(int ss = SIZE);   // 构造函数，初始化SIZE值
    Stack(const Stack & st);         //     复制构造函数
    ~Stack() {delete [] items;}
    bool isempty() { return top == 0; }
    bool isfull() { return top == stacksize; }
    bool push(const Type & item);   // add item to stack
    bool pop(Type & item);          // pop top into item
    Stack & operator=(const Stack & st);    // 运算符=重载
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0)
{
    items = new Type [stacksize];       // items指针指向Type数组
}

template <class Type>
Stack<Type>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];   // 深度复制，自己本身new一个Type数组
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < stacksize)
    {
        items[top++] = item;
        return true;
    }
    else 
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else    
        return false;
}

template <class Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> & st)
{
    if ( this == &st)
        return *this;
    delete [] items;
    stacksize = st.stacksize;
    items = new Type[stacksize];
    top = st.top;
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
    return *this;
}

#endif