// #include<iostream>
// using namespace std;

// const int MAX_SIZE =  100;
// int stack[MAX_SIZE];
// int top = -1;

// void push(int val){
//     if(top>=MAX_SIZE-1){
//         cout<<"Stack overflow"<<endl;
//     }
//     else{
//         top = top+1;
//         stack[top] = val;
        
//     }
// }

// void pop(){
//     if(top<0){
//         cout<<"Stack is empty."<<endl;
//     }
//     else{
//         cout<<"Popped"<<stack[top]<<endl;
//         top--;
//     }
// }

// void display(){
//     if(top<0){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<"Elements in stack"<<endl;
//         for(int i=top;i>=0;i--){
//             cout<<stack[i]<<" ";
//         }

//     }
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         push(ele);
//     }
//     display();
//     return 0;
// 
// #include <iostream>
// using namespace std;
// class Box {
// private:
//     double width;
//     double height;
//     double depth;

// public:
//     Box() : width(0.0), height(0.0), depth(0.0) {}

//     Box(double w, double h, double d) : width(w), height(h), depth(d) {}

//     Box(double len) : width(len), height(len), depth(len) {}

//     double volume() {
//         return width * height * depth;
//     }
// };

// int main() {
//     double w, h, d, len;

//     cin >> w >> h >> d;
//     cin >> len;

//     Box mybox1(w, h, d);
//     Box mybox2(len);
//     Box mycube(len);
//     Box mybox;

//     cout << "The volume of mybox1 is " << mybox.volume() << endl;
//     cout << "The volume of mybox2 is " << mybox1.volume() << endl;
//     cout << "The volume of mycube is " << mycube.volume() << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

class Demo {
private:
    int n;

public:
    Demo(int num) : n(num) {
        cout << "Inside Constructor" << endl;
    }

    ~Demo() {
        cout << "Inside Destructor" << endl;
    }

    void display() {
        int square = n * n;
        double squareRoot = sqrt(static_cast<double>(n));
        
        cout << "square = " << square << endl;
        cout << "square root = " << fixed << squareRoot << endl;
    }
};

int main() {
    int n;
    
    cin >> n;
    
    Demo demoObject(n);
    
    demoObject.display();
    
    return 0;
}


