#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }

        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}