#include<iostream>
#include<queue>
using namespace std;

void printPairs(queue<pair<int ,int>> q){

}
void show(queue<pair<int ,int>> q){
   while(!q.empty()){
    // printPairs(q.front()); ERROR...
    q.pop();
   }
    
}
int main(){
    queue<pair<int,int>> qe1;

    qe1.push({10,12}); 
    qe1.push({11,13}); 
    qe1.push({12,14}); 
    qe1.push({13,15}); 

    cout<<"Queue of pairs: ";
    show(qe1);
    return 0;
}