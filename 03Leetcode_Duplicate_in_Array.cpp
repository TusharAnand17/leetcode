// // Duplicate in Array
// #include <iostream>
// using namespace std;

// void duplicate(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag++;
//             }
//         }
//         if (flag == 2)
//         {
//             cout << "The Duplicate number in array is " << arr[i] << endl;
//             break;
//         }
//     }
// }

// int main()
// {
//     // You are given a array 'ARR' of size N containing each number between 1 to N-1 at least once.There is a single Integer Value that is present
//     // in the array twice. Your task is to find the duplicate number in the array.
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     duplicate(arr, n);

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr2[n] = {0};
    int count = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        // int flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = 0; k < n; k++)
                {
                    if (arr2[k] == arr[j])
                    {
                        // arr2[k] = arr[j];04
                        // count++;
                        break;
                    }
                    else
                    {
                        arr2[k] = arr[j];
                        count++;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}