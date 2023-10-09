#include<iostream>
using namespace std;
// class Rectangle{
//     public:
//     int leng;
//     int br;
// };

// class Occ{
// private:
//     string str;
//     char ch;
//     public:
//     void count(){
//         cin>>str;
//         cin>>ch;
//         int count = 0;
//         for(char c : str){
//             if(c == ch){
//                 count++;
//             }
//         }
//         cout<<count;
//     }
// };
int modulus(int a, int b){
    if(b == 0){
        cout<<"Divison not possible";
    }
    return(a%b);
}
int main(){
    // Rectangle r;
    // r.leng = 15;
    // r. br = 13;
    // int area = r.leng * r.br;
    // cout<<area;

    // Occ d;
    // d.count();

//    cout<< modulus(10,0);
// int count = 0;
// int arr[] = {6,7,9,12,15,18,21,24};
// for(int i=0;i<7;i++){
//     if (arr[i] % 3==0){
//         count++;
//     }
// }
// cout<<count;
// int size = 7;
// int arr[] = {10,20,30,40,50,60,70};
// int idx =4;
// for(int i=4;i<size-2;i++){
//     arr[i] = arr[i+1];
//     size--;
// }
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
int size = 4;
char arr[] = {'A','B','C','D'};
int idx = 2;
char val = 'x';
for(int i=size;i<idx+1;i--){
    arr[i] = arr[i+1];
    arr[idx] = val;
    size++;
}
arr[idx] = val;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}