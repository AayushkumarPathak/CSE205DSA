// You are using GCC
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> empId(1000);
    for(int i=0;i<n;i++){
        cin>>empId[i];
    }
    
    int numPos;
    cin>>numPos;
    numPos = (numPos % n + n) % n;

    vector<int> rotatedEmpId(1000);
    for(int i=0;i<n;i++){
        int newPos =  (i - numPos) % n;
        if(newPos<0){
            newPos += n;
        }
        
        rotatedEmpId[newPos] = empId[i];
    }
    for(int i=0;i<n;i++){
        cout<<rotatedEmpId[i]<<" ";
    }
    return 0;
}
