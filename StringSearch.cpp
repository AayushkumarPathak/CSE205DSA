#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string arr[50];
    cout<<"Enter the ele: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    string x;
    cout<<"Enter the ele to search: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            cout<<"Found at: "<<i;
        }
    }

}