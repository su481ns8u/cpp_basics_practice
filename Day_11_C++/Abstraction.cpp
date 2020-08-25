#include <iostream>

using namespace std;

class AbstractionDemo
{
private:
    int a, b;

public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main(int argc, char const *argv[])
{
    AbstractionDemo obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
