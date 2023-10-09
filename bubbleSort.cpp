#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[50];
    for(int i=0;i<n;i++){
        cout<<"Enter the ele: ";
        cin>>arr[i];
    }

    //algo
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}