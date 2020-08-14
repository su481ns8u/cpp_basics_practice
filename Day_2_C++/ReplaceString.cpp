#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 3)
    {
        string sentance = "Hey there, I am Sudhanshu !!!";
        string oldString = argv[1];
        if (sentance.find(oldString) != -1)
        {
            string newString = argv[2];
            cout << "Sentance before modification: " << sentance << endl;
            sentance.replace(sentance.find(oldString), oldString.length(), newString);
            cout << "Sentance after modification: " << sentance << endl;
        }
        else
            cout << "No such string in sentance !" << endl;
    }
    else
        cout << "Invalid number of arguments !" << endl;
}
