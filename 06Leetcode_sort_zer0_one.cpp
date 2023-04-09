#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {0, 1, 1, 1, 0, 0, 1, 0, 0};

    int left = 0, right = 8;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            int t = arr[left];
            arr[left] = arr[right];
            arr[right] = t;
            left ++;
            right--;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}