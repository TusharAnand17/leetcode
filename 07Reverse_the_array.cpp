#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    for (int i = 0, j = v.size() - 1; i < v.size() / 2; i++, j--)
    {
        swap(v[i], v[j]);
    }
    return v;
}

vector<int> reverseAfterIndex(vector<int> v, int index)
{
    int k = 0;
    for (int i = index + 1, j = v.size() - 1; k < ((v.size() - (index + 1)) / 2); i++, j--, k++)
    {
        swap(v[i], v[j]);
    }
    return v;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(91);
    v.push_back(25);
    v.push_back(12);
    v.push_back(85);
    v.push_back(56);
    cout << "Original Array: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // vector<int> vr = reverse(v);
    vector<int> vr = reverseAfterIndex(v, 3);
    vector<int> vr = reverseAfterIndex(v, 1);
    cout << "After Reverse " << endl;
    for (int i : vr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}