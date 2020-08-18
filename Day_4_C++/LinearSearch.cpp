#include <iostream>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 2 && regex_match(argv[1], regex("[0-9]+")))
    {
        int arr[] = {55, 46, 8, 132, 47, 6};
        int search = atoi(argv[1]);
        int flag = 0;
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
            if (arr[i] == search)
            {
                cout << "Number found at pos: " << i;
                flag = 1;
                break;
            }
        if (flag == 0)
            cout << "Number not present";
    }
    else
        cout << "Invalid Input !!!";
}