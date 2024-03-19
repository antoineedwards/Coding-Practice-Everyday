#include <iostream>
using namespace std;

int main()
{
    int small, large, i, size = 8;
    int arr[8] = {5, 55, 2, 32, 12, 69, 53, 45};

    small = arr[0];
    large = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << "large = " << large << endl;
    cout << "small = " << small << endl;
    return 0;
}