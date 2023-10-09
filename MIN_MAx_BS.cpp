#include <iostream>
#include <array>
using namespace std;

int findMinimum(const array<int, 100> &arr, int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return arr[left];
}

int main()
{
    int n;
    cin >> n;
    array<int, 100> arr;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int minimum = findMinimum(arr, n);
    cout << minimum << endl;
    return 0;
}