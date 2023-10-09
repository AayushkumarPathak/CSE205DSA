#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

void binary(int arr[], int n, int x, int k) {
    vector<pair<int, int>> diffIdxPairs;

    for (int i = 0; i < n; i++) {
        int diff = abs(arr[i] - x);
        diffIdxPairs.push_back({diff, i});
    }

    sort(diffIdxPairs.begin(), diffIdxPairs.end());

    for (int i = 0; i < k; i++) {
        cout << arr[diffIdxPairs[i].second] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[11];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;

    int k;
    cin >> k;

    binary(arr, n, x, k);
    return 0;
}
