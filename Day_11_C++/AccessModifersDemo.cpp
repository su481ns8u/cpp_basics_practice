#include <iostream>

using namespace std;

class PublicClass
{
public:
    string publicVar;
    string getMessage()
    {
        return "Hello, " + publicVar;
    }
};

class PrivateClass
{
private:
    string privateVar;

public:
    string getMessage(string privateVar)
    {
        this->privateVar = privateVar;
        return "Hello, " + privateVar;
    }
};

class ProtectedClass
{
protected:
    string protectedVar;
};

class NormalClass : public ProtectedClass
{
public:
    void setProtectedVar(string protectedVar)
    {
        this->protectedVar = protectedVar;
    }

    void displayString()
    {
        cout << "Protected string is " << protectedVar << endl;
    }
};

int main(int argc, char const *argv[])
{
    PublicClass publicObj;
    publicObj.publicVar = "Sudhanshu";
    cout << "public String is " << publicObj.publicVar << endl;
    cout << "public Function returns " << publicObj.getMessage() << endl;

    PrivateClass privateObj;
    cout << "public String is " << privateObj.getMessage("Sudhanshu") << endl;

    NormalClass normalObj;
    normalObj.setProtectedVar("Sudhanshu");
    normalObj.displayString();
    return 0;
}
