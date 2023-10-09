#include <iostream>
using namespace std;

void evenOddInsertionSort(int arr[], int n) {
    for (int i = 2; i < n; i++) {
        int j = i - 2;
        int temp = arr[i];

        if ((i + 1) & 1) {
            while (temp >= arr[j] && j >= 0) {
                arr[j + 2] = arr[j];
                j -= 2;
            }
            arr[j + 2] = temp;
        } else {
            while (temp <= arr[j] && j >= 0) {
                arr[j + 2] = arr[j];
                j -= 2;
            }
            arr[j + 2] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    evenOddInsertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
