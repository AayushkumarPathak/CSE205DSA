#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {10, 20, 30, 40, 50};

    make_heap(a.begin(), a.end());

    int arr[] = {11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    make_heap(arr, arr+n);

    cout << "Max-Heap (a): ";
    for (int num : a)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Max-Heap (arr): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}