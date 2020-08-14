#include <iostream>
using namespace std;

int main()
{
    int primeArray[10], count = 0, n;
    cout << "Enter Number to find prime factors: ";
    cin >> n;

    for (int i = 2; i * i <= n; i += 2)
        while (n % i == 0)
        {
            primeArray[count++] = i;
            n /= i;
        }

    if (n > 2)
        primeArray[count++] = n;

    for (int i = 0; i < count; i++)
        cout << primeArray[i] << ", ";
}
