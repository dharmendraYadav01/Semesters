#include<bits/stdc++.h>
using namespace std;
struct node{
    int coeff;
    int expo;
    struct node *next;
};

struct node* start=NULL;
struct node* create(struct node*);
struct node* display(struct node*);

int main(){
    start=create(start);
    display(start);
    return 0;
}

struct node *create(struct node*start){
    struct node*new_node;
    int num,exp;
    new_node=new struct node;
    cout<<"Enter the coefficient of the term: ";
    cin>>num;
    cout<<"Enter the exponent of the term: ";
    cin>>exp;
    new_node->coeff=num;
    new_node->expo=exp;
    if(start==NULL){
        return start;
    }
    
}