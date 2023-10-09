#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    
    int x;
    cin>>x;
    int count = 0;
    
    while(!q.empty()){
        if(x == q.front()){
            count++;
        }
        q.pop();
    }
    
    cout<<"Occurences of "<<x<<" in the queue: "<<count<<endl;
    return 0;
}