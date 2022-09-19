#include<iostream>
using namespace std;

template <typename T>
struct Pair{
    T x, y;
    Pair(T i, T j){x = i; y = j;}
    T getFirst(){return x;}
    T getSecond(){return y;}
};

int main()
{
    Pair <int> p1(10, 20),p2(30,40);
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}

/* When we declare a function outside the structures */

#include<iostream>
using namespace std;

template <typename T>
struct Pair{
    T x, y;
    Pair(T i, T j){x = i; y = j;}
    T getFirst();
    T getSecond(){return y;}
};

template<typename T>
Pair<int>:: T getFirst(){return x;}

int main()
{
    Pair <int> p1(10, 20);
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}
