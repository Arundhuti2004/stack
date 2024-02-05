#include<iostream>
#include<stack>
using namespace std;
#define size 7
class Stack{
    int arr[size];
    int top;
public:
    Stack(){
        top = -1;
    }
void push(int x){
    if(top == size - 1){
        cout << "stack overflow" << endl;
        exit(1);
    }
    arr[++top] = x;
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
    cout << endl ;
    cout << temp << " ";
    push(temp);

}

};
int main(){
    Stack s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    cout << s.Top() << endl; //20
    cout << s.pop() << endl; //20
    cout << s.Size() << endl; // 4
    cout << s.Top() << endl; //30
    s.display();
    return 0;
}




