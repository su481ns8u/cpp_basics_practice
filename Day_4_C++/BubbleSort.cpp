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
    for (int i = 0; i < size - 1; i++)
    {
        bool swapFlag = false;
        for (int j = 0; j < size - i - 1; j++)
            if (numArr[j] > numArr[j + 1])
            {
                int temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
                swapFlag = true;
            }
        if (swapFlag == false)
            break;
    }
}
