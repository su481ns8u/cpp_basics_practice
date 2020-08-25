#include <iostream>

using namespace std;

class Base
{
public:
    virtual void demo() = 0;
};

class Child1 : public Base
{
public:
    virtual void demo()
    {
        cout << "Demo of child 1" << endl;
    }
};

class Child2 : public Base
{
public:
    virtual void demo()
    {
        cout << "Demo of child 2" << endl;
    }
};

class Lowest : public Child1, public Child2
{
public:
    void demoCall()
    {
        demo();
    }
};

int main(int argc, char const *argv[])
{
    Lowest lowestObj;
    lowestObj.demoCall();
    return 0;
}
