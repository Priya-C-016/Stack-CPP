#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node*top=nullptr;
void push(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;top=temp;
}
void pop(){
    if(top==nullptr){
        cout<<"empty";return;
    }Node* temp=top;
    top=top->next;
    delete temp;
}
int peek(){
    if(top==nullptr){
        cout<<"empty";return -1;
    }
    return top->data;
}
bool Empty(){
    return top==nullptr;
}
void display(){
    Node* temp=top;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    push(5);
    push(10);
    push(15);
    display();  // Output: 15 10 5

    pop();
    display();  // Output: 10 5

    cout << "Top element is: " << peek() << "\n";  // Output: 10

    return 0;
}
