#include<iostream>
#include<array>
using namespace std;
//sum of two digits number in the array

int main(){
    int n;
    cin>>n;

    int arr[50];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=10){
            sum +=arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}