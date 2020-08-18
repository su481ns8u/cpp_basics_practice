#include <iostream>
using namespace std;
void sort(int numArr[], int low, int high);

int main()
{
    int numArray[] = {5, 9, 3, 2, 5, 44, 1};
    int size = sizeof(numArray) / sizeof(numArray[0]);
    sort(numArray, 0, size - 1);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
        cout << numArray[i] << ", ";
    return 0;
}

int partition(int numArr[], int low, int high)
{
    int pivot = numArr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
        if (numArr[j] <= pivot)
        {
            i++;
            int temp = numArr[i];
            numArr[i] = numArr[j];
            numArr[j] = temp;
        }
    int temp = numArr[i + 1];
    numArr[i + 1] = numArr[high];
    numArr[high] = temp;
    return i + 1;
}

void sort(int numArr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(numArr, low, high);
        sort(numArr, low, pi - 1);
        sort(numArr, pi + 1, high);
    }
}