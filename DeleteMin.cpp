#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<float> q;
    
    int n;
    cin>>n;
    float min = INT16_MAX;
    for(int i=0;i<n;i++){
        float val;
        cin>>val;
        q.push(val);
        if(val<min){
            min = val;
        }
    }
    
    while(!q.empty()){
        if(q.front()==min){
            q.pop();
        }
        
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
   
    return 0;
}