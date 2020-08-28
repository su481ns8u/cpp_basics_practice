#include <iostream>

using namespace std;

class Conv
{
    int num;
    string str;

public:
    Conv(int i)
    {
        num = i;
        str = "Nothing";
    }

    explicit Conv(string any)
    {
        str = any;
        num = -1;
    }

    void print()
    {
        cout << "\nnum: " << num << "\nstr: " << str;
    }
};

int main(int argc, char const *argv[])
{
    Conv demoInplicit = 5;
    Conv demoExplicit("Sudjahs");
    demoInplicit.print();
    demoExplicit.print();
    return 0;
}
