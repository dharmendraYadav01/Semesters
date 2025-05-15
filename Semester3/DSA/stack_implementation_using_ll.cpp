#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct node{
    int info;
    struct node *link;
};
struct node* top=NULL;

int isEmpty(struct node*top){
    if(top==NULL){
        return 1;
    }
    else return 0;
}
int isFull(struct node* top){
    struct node* ptr=new struct node;
    if(ptr==NULL){
        return 1;
    }
    else return 0;
}
struct node* push(struct node* top,int x){
    if(isFull(top)){
        cout<<"Stack is overflow"<<endl;
    }
    else{   
        struct node* new_node=new struct node;
        new_node->info=x;
        new_node->link=top;
        top=new_node;
    } 
}
int pop(struct node* start){
    if(isEmpty(start)){
        cout<<"Stack is underflow"<<endl;
        return -1;
    }
    else{
        struct node*ptr=start; //yaha hum top nahi likh sakte kyuki top aab global variable hai but start is local
        top=start->link;
        int x=ptr->info;
        free(ptr);
        return x;
    }
    
}
struct node* display(struct node* top){
    struct node* ptr;
    ptr= top;
    while(ptr!=NULL){
        printf("%d -> ",ptr->info);
        ptr=ptr->link;
        
    }
    cout << "NULL" << endl;
    return top;
}
int main(){
    top=push(top,72);
    top=push(top,23);
    top=push(top,55);
    top=push(top,43);
    top=push(top,34);
    top=display(top);
    int ele=pop(top);
    cout<<"Element to be deleted is:"<<ele<<endl;
    top=display(top);
    
    return 0;
}