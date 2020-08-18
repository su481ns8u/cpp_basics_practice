#include <iostream>
#include <regex>
using namespace std;

int binarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid + 1, r, num);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    if (argc == 2 && regex_match(argv[1], regex("[0-9]+")))
    {
        int arr[] = {5, 8, 98, 154, 629, 855};
        int search = atoi(argv[1]);
        int result = binarySearch(arr, 0, sizeof(arr) / sizeof(arr[0]), search);
        if (result == -1)
            cout << "Number not present !!!";
        else
            cout << "Number present at pos: " << result;
        return 0;
    }
    else
        cout << "Invalid Input !!";
}