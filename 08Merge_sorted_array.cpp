#include <iostream>
using namespace std;

void merge(int arr[], int size1, int arr2[], int size2, int arr3[], int size3)
{
    int k = 0;
    int i, j;
    for (i = 0, j = 0; i < size1 && j < size2;)
    {
        if (arr[i] < arr2[j])
        {
            arr3[k++] = arr[i];
            i++;
        }
        else
        {
            arr3[k++] = arr2[j];
            j++;
        }
    }
    while (i < size1)
    {
        arr3[k++] = arr[i];
        i++;
    }
    while (j < size2)
    {
        arr3[k++] = arr[j];
        j++;
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3, 8);
    for (int i : arr3)
    {
        cout << i << " ";
    }
    return 0;
}