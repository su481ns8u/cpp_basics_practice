#include <iostream>

using namespace std;

class Base
{
public:
    void callPrint()
    {
        print();
    }

    virtual void print()
    {
        cout << "Print in Base\n";
    }
};

class Derieved : public Base
{
public:
    void print()
    {
        cout << "Print in Derieved\n";
    }
};

int main(int argc, char const *argv[])
{
    Base b;
    Derieved d;
    b.callPrint();
    d.callPrint();
    return 0;
}
