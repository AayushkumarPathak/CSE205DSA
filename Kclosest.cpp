
#include <stdio.h>
#include<iostream>
using namespace std;

int findCrossOver(int arr[], int low, int high, int x)
{
    // Base cases
    if (arr[high] <= x) // x is greater than all
        return high;
    if (arr[low] > x) // x is smaller than all
        return low;

    // Find the middle point
    int mid = (low + high) / 2; /* low + (high - low)/2 */

    /* If x is same as middle element, then return mid */
    if (arr[mid] <= x && arr[mid + 1] > x)
        return mid;

   
    if (arr[mid] < x)
        return findCrossOver(arr, mid + 1, high, x);

    return findCrossOver(arr, low, mid - 1, x);
}


void printKclosest(int arr[], int x, int k, int n)
{
    // Find the crossover point
    int l = findCrossOver(arr, 0, n - 1, x);
    int r = l + 1; // Right index to search
    int count = 0; // To keep track of count of elements already printed

    
    if (arr[l] == x)
        l--;

    
    while (l >= 0 && r < n && count < k)
    {
        if (x - arr[l] < arr[r] - x)
            printf("%d ", arr[l--]);
        else
            printf("%d ", arr[r++]);
        count++;
    }

    
    while (count < k && l >= 0)
        printf("%d ", arr[l--]), count++;

    // If there are no more elements on left side, then
    // print right elements
    while (count < k && r < n)
        printf("%d ", arr[r++]), count++;
}

/* Driver program to check above functions */
int main()
{
    int n;
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,k;
    cin>>x>>k;

    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 5, k = 3;
    printKclosest(arr, x, k, n);
    return 0;
}
