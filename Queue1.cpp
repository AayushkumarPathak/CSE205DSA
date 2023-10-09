#include<iostream>
#include<queue>
using namespace std;
/* FUNCTIONS 

1.push() => to push value in Rear.
2.pop() => to pop the front val().
3.empty() => to check whether queue is empty.
4.front() => to display the front value.


*/
int main(){
    queue<int> q1;

    cout<<"Enter n:";
    int n;
    cin>>n;
    
    if(n == 0){
        cout<<"Error 901"<<endl;
    }
    else{
        cout<<"Enter val to push: ";
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            q1.push(val);
        }
    }
    if(q1.empty()){
        cout<<"Empty!"<<endl;
        
    }
    else{
        while(!q1.empty()){
            cout<<q1.front()<<" <- ";
            q1.pop();
        }
    }

    /*  Input  :  myqueue = 1, 2, 3
          myqueue.front();
        Output :  1

        Input  :  myqueue = 3, 4, 1, 7, 3
          myqueue.front();  
        Output :  3       */


    queue<int> q2;

    q2.push(3);
    q2.push(4);
    q2.push(1);
    q2.push(7);
    q2.push(3);

    cout<<"Front: "<<q2.front()<<endl;
    cout<<"Back: "<<q2.back()<<endl;


    return 0;
}