#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    struct Node* next;

};
struct st{
struct Node* top = NULL;
}s;
int isEmpty(st *s){
    if(s->top == NULL){
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
void push(st* s,int data){
    if(isFull()){
        cout << "stack overflow..." << endl;
        exit(1);
    }
    struct Node* ptr = new struct Node;
    if(!s->top){
        s->top = ptr;
    }
    ptr->next = s->top;
    ptr->data = data;
    s->top = ptr;

}
void pop(st* s){
    if (isEmpty(s)){
        cout << "stack underflow" << endl;
        exit(2);
    }
    struct Node* temp = s->top;
    s->top = s->top ->next;
    // cout << temp->data << endl;
    delete(temp);
}
void Top(st* s){
    if(isEmpty(s)){
        cout << "stack underflow" << endl;
    }
    cout << s->top->data << endl;
}
void display(st* s){
    if(s->top == NULL){
        return;
    }
    

    struct Node* temp = s->top;
    cout << temp->data<< " ";
    pop(s);
    display(s);
    cout << endl << temp->data<< " ";
    push(s,temp->data);

}    

int main(){
    push(&s,55);
    push(&s,59);
    push(&s,50);
    push(&s,57);
    pop(&s);
    Top(&s);
    display(&s);





    return 0;
}

