#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 3)
    {
        ifstream file1, file2;
        file1.open(argv[1]);
        file2.open(argv[2]);
        if (file1 && file2)
        {
            file1.close();
            file2.close();
            rename(argv[1], "temp.txt");
            rename(argv[2], argv[1]);
            rename("temp.txt", argv[2]);
            cout << "Files swapped successfully !!!";
        }
        else
            cout << "File not exists !";
    }
    else
        cout << "Invalid Arguments !";
    return 0;
}
