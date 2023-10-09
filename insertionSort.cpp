#include<iostream>
using namespace std;

void getArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void insertionSort(int arr[], int n){
    int key;
    for(int i=1;i<n;i++){
        key  = arr[i];
        int j = i - 1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j -1 ;

        }
        arr[j+1] = key;
        
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    
    getArray(arr,n);
    cout<<"Before sorting\n";
    printArray(arr,n);

    cout<<"After sorting\n";
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}