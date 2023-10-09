#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the ele to delete: ";
    cin>>x;
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i<n){
        n = n - 1;
        for(int j=i;j<n;j++){
            arr[j] = arr[j+1];
        }
    }

    for(int j=0;j<n-1;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}