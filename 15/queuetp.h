// queuetp.h -- queue template with a nested class
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP
{
private:
    enum { Q_SIZE = 10 };
    // node is a nested class definition
    class Node
    {
    public:
        Item item;
        Node * next;
        Node(const Item & i):item(i), next(0) {}    
    };
    Node * front;       // pointer to front of queue
    Node * rear;        // pointer to rear of queue
    int items;          // current number of items in queue
    const int qsize;    // maximum number of items in queue
    QueueTP(const QueueTP & q): qsize(0) {}
    QueueTP & operator=(const QueueTP & q) { return * this; }
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isempty() const
    {
        return items == 0;
    }
    bool isfull() const
    {
        return items == qsize;
    }
    int queuecount() const
    {
        return items;
    }
    bool enqueue(const Item & item);    // add item to end
    bool dequeue(Item & item);          // remove item from front
};

// QueueTP methods
template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
    Node * temp;
    while (front != 0)          // while queue is not yet empty
    {
        temp = front;           // save address of front item
        front = front->next;    // reset pointer to next item
        delete temp;            // delete former front
    }
}

// add item to queue
template <class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node(item);        // create node
    // on failure, new throws std::bad_alloc exception
    items++;
    if (front == 0)         // if queue if empty
        front = add;        // place item at front
    else 
        rear->next = add;
    rear = add;
    return true;
}

// place front item into item variable and remove from queu
template <class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
    if (front == 0)
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = 0;
    return true;
}

#endif