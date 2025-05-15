#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *arr;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top= -1;
    }
    void push(int num){
        if(size-top>1){
            top++;
            arr[top]=num;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is underflow"<<endl;
        }
    }
    int peek(){
        int x;
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            x=arr[top];
        }
        return x;
        
    }
};
int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.peek()<<endl;
    return 0;
}