// FInd Unique
#include <iostream>
using namespace std;

int main()
{
    // You have been given integer arraylist[ARR] of size N. Where N is equals to [2M+1]
    // Now, IN the given arrayList.'M' number are present twice and one number is present only once.
    // You need to find that number which is unique
    int m;
    cin >> m;
    int arr[100];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == arr[j])
            {
                flag++;
            }
        }
        if (flag == 1)
        {
            cout << "Unique Number is " << arr[i] << endl;
        }
    }

    return 0;
}