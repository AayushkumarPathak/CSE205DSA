#include<iostream>
using namespace std;
// linear search
int main(){
    int arr[] = {24,39,36,47,78,89,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found at: "<<i<<endl;
        }
    }
    return 0;
}