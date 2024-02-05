#include<iostream>
#include<stack>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
public:
    Stack(int s){
        top = -1;
        size = s;
        arr = new int[size];
    
    }
void push(int x){
    if(top == size - 1){
        cout << "stack overflow" << endl;
        exit(1);
    }
    arr[++top] =x;
}
int pop(){
    if(top == -1){
        cout << "stack uderflow" << endl;
        exit(2);
    }
    int temp = arr[top];
    top--;
    return temp;
}

int Top(){
    return arr[top];
}
int Size(){
    return top+1;
}
void display(){
    if(top == -1){
        return;
    }

    int temp = arr[top];
    cout << temp << " ";
    pop();
    display();
    cout << endl << temp << " ";
    push(temp);

}
};
int main(){
    Stack s(10);
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    // cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.Size() << endl;
    s.display();
    return 0;
}




