#include<iostream>
using namespace std;

// INSERTION
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;

    int arr[200];

    for(int i=0;i<n;i++){
        cout<<"Enter the ele:";
        cin>>arr[i];
    }

    int x, pos;
    cout<<"Enter the element to insert:";
    cin>>x;
    cout<<"Enter the position to insert:";
    cin>>pos;

    for(int i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    /* TIME COMPLEXITY O(n) && SPACE COMPLEXITY */

}