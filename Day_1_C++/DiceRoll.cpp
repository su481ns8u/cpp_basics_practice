#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Dice roll: " << 1 + rand() % 6;
}