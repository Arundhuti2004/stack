#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    struct Node* next;

};

struct Node* top = NULL;
int isEmpty(){
    if(top == NULL){
        return 1;
    }
    return 0;
}
int isFull(){
     Node *ptr = new struct Node;
    if (ptr == NULL)
        return 1;
    return 0;
}
void push(int data){
    if(isFull()){
        cout << "stack overflow..." << endl;
        exit(1);
    }
    struct Node* ptr = new struct Node;
    if(!top){
        top == ptr;
    }
    ptr->next = top;
    ptr->data = data;
    top = ptr;

}
void pop(){
    if (isEmpty()){
        cout << "stack underflow" << endl;
        exit(2);
    }
    struct Node* temp = top;
    top = top ->next;
    // cout << temp->data << endl;
    delete(temp);
}
void Top(){
    if(isEmpty()){
        cout << "stack underflow" << endl;
    }
    cout << top->data << endl;
}
void display(){
    if(top == NULL){
        return;
    }

    int temp = top->data;
    cout << temp<<" " ;
    pop();
    display();
    cout << endl << temp << " ";
    push(temp);

}    
int main(){
    push(55);
    push(59);
    push(50);
    push(57);
    pop();
    Top();
    display();





    return 0;
}


