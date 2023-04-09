#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element of 2nd array\n";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "\nIntersection of array is ";
    int k = 0, l = 0;
    while (k < n && l < m)
    {
        if (arr[k] == arr2[l])
        {
            cout << arr[k];
            k++;
            l++;
        }
        else if (arr[k] < arr2[l])
        {
            k++;
        }
        else
        {
            l++;
        }
    }

    return 0;
}