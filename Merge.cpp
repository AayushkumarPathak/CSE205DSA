#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter the size of arr1: ";
    cin>>n1;
    cout<<"Enter the size of arr2: ";
    cin>>n2;
    n3 = n1+n2;
    int arr1[n1],arr2[n2],arr3[n3];

    for(int i=0;i<n1;i++){
        cout<<"Enter the ele of arr1: ";
        cin>>arr1[i];
        arr3[i] = arr1[i];
    }
    int k = n1;
    for(int i=0;i<n2;i++){
        cout<<"Enter the ele of arr2: ";
        cin>>arr2[i];
        arr3[k] = arr2[i];
        k++;
    }
    cout<<"Before sorting"<<endl;
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<" ";

    }
    cout<<"\nAfter sorting"<<endl;
    for(int i=0;i<n3;i++){
        for(int j=0;j<n3-1;j++){
            int temp = arr3[j];
            if(arr3[j]>arr3[j+1]){
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<" ";
    }



    return 0;
}