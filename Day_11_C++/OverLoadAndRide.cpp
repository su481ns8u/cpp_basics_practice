#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void Display()
    {
        cout << "\nThis is Display() method of BaseClass";
    }
    void Show()
    {
        cout << "\nThis is Show() method of BaseClass";
    }
};

class DerivedClass : public BaseClass
{
public:
    void Display()
    {
        cout << "\nThis is Display() method of DerivedClass";
    }
};

int main()
{
    DerivedClass dr;
    BaseClass &bs = dr;
    BaseClass bs2;
    bs2.Display();
    bs.Display();
    dr.Display();
    dr.Show();
}