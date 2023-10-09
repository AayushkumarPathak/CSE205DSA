#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }
}

void binarySearch(int arr[],int n,int val){
    int low = 0;
    int high = n-1;
    

    while(low<=high){
        int mid = (low+high)/2;
        if(val == arr[mid]){ 
            cout<<"Found"<<endl; 
            break; 
        }

        else if(val <arr[mid]){ 
            high  = mid - 1; 
        }

        else{ 
            low = mid + 1; 
        }
    

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {12,20,40,14,0,2,-2};
    int n = 7;

    int val = 40;

    bubbleSort(arr,n);
    binarySearch(arr,n,val);
    printArray(arr,n);
}