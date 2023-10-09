#include<iostream>
using namespace std;

// print all number greater than input val in array
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the key val: ";
    cin>>x;
    for(int i=0;i<n;i++){
        while(arr[i]>x){
            cout<<arr[i]<<" ";
            break;

        }
    }


    return 0;
}