#include <iostream>
using namespace std;
void sort(int numArr[], int size);

int main()
{
    int numArray[] = {5, 9, 3, 2, 5, 44, 1};
    int size = sizeof(numArray) / sizeof(numArray[0]);
    sort(numArray, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
        cout << numArray[i] << ", ";
    return 0;
}

void sort(int numArr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = numArr[i];
        int j = i - 1;
        while (j >= 0 && numArr[j] > key)
        {
            numArr[j + 1] = numArr[j];
            j--;
        }
        numArr[j + 1] = key;
    }
}