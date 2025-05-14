#include<bits/stdc++.h>
using namespace std;

const int MAX=100;
int st[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
        cout<<"overflow";
        return;
    }
    st[++top]=x;
}
void pop(){
    if(top==-1){
        cout<<"empty";return;
    }
    top--;
}
int peek(){
     if(top==-1){
         cout<<"empty";return -1;
     }return st[top];
 }
bool Empty(){
    return top==-1;
}
void display(){
    for(int i=top;i>=0;i--){
        cout<<st[i]<<" ";
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();  // Output: 30 20 10

    pop();
    display();  // Output: 20 10

    cout << "Top element is: " << peek() << "\n"; // Output: 20
    return 0;
}
