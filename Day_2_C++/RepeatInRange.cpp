#include <iostream>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 3 && regex_match(argv[1], regex("[0-9]+")) && regex_match(argv[2], regex("[0-9]+")))
    {
        int repEle[10];
        int counter = 0;
        int start = atoi(argv[1]);
        int end = atoi(argv[2]);

        for (int i = start; i < end; i++)
            if (i % 11 == 0)
                repEle[counter++] = i;

        for (int i = 0; i < counter; i++)
            cout << repEle[i] << ", ";
    }
    else
        cout << "Invalid Arguments !";
}
