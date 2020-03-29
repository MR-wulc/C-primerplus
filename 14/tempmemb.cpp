// tempmemb.cpp -- template members
#include <iostream>
using std::cout;
using std::endl;
template <class T>
class beta
{
private:
    template <class V>
    class hold
    {
    private:
        V val;
    public:
        hold(V v = 0) : val(v) {}
        void show() const { cout << val << endl; }
        V value() const { return val; }
    };
    hold<T> q;          // template object
    hold<int> n;        // template object
public:
    beta(T t, int i) : q(t), n(i) {}
    template<class U>   // template method
    U blab(U u, T t) { return (n.value() + q.value()) * u / t;}
    void Show() const { q.show(); n.show();}
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T was set to double\n";
    guy.Show();
    cout << "V was set to T, which is double, then V was set to int\n";
    cout << guy.blab(10, 2.3) << endl;
    cout << "U was set to int\n";
    cout << guy.blab(10.0, 2.3) << endl;
    cout << "U was set to double\n";
    cout << "Done\n";
    return 0;
}
