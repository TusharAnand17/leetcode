#include <iostream>
using namespace std;

void MovesZero(int arr[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main()
{
    int arr[5] = {0, 1, 0, 3, 12};
    MovesZero(arr, 5);
    cout << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}