#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int result, headCount = 0, tailCount = 0;
    while (headCount < 11 && tailCount < 11)
    {
        result = rand() % 2;
        if (result == 1)
            headCount++;
        else
            tailCount++;
    }
    cout << "Heads: " << headCount << "\nTails: " << tailCount;
}
