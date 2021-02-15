#include <iostream>
using namespace std;

const int length = 100;
bool composite[length] = {false};

void printPrimes(bool arr[], int size)
{
    for (int i = 2; i < size; i++)
    {
        for (int j = i * i; j < size; j+=i)
        {
            composite[j - 1] = true;
        }
    }
    for (int i = 1; i < (size - 1); i++)
    {
        if (composite[i] == false)
            cout << i + 1 << "\t";
    }
}
 
int main()
{
    printPrimes(composite, length);
}
