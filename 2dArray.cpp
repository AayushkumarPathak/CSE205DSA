#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the m and n: ";
    cin>>m>>n;

    int arr[m][n];

    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){

            cin>>arr[row][col];
        }
    }

    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<"\n";
    }
    
    return 0;
}