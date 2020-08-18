#include <iostream>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 2 && regex_match(argv[1], regex("[0-9]+")))
    {
        int number = atoi(argv[1]);
        int revNumber = 0;
        for (int temp = number; temp != 0; temp /= 10)
            revNumber = revNumber * 10 + temp % 10;
        if (revNumber == number)
            cout << number << " is a palindrome";
        else
            cout << number << " is not a palindrome";
    }
    else
        cout << "Invalid Arguments !!!";
    return 0;
}
