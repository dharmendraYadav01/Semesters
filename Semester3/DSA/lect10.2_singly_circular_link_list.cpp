#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node*next;
};
struct node* start=NULL;
struct node* circular_crete(struct node*);
struct node* display(struct node*); 
struct node* insert_begin(struct node*);
struct node* insert_end(struct node*);

int main(){
	start=circular_crete(start);
	display(start);
	start=insert_begin(start);
	display(start);
	start=insert_end(start);
	display(start);
	return 0;
}

struct node* circular_crete(struct node* start){
	struct node *new_node,*ptr;
	int num;
	cout<<"Enter the value until -1:";
	cin>>num;
	while(num!=-1){
		new_node=new struct node;
		new_node->data=num;
		if(start==NULL){
			start=new_node;
			new_node->next=start;

		}
		else {
			ptr=start;
			while(ptr->next!=start){
				ptr=ptr->next;
			}
		ptr->next=new_node;
		new_node->next=start;
		}
		cout<<"Enter the value until -1:";
		cin>>num;
	}
	return start;
}
struct node* display(struct node* start){
	struct node* ptr;
	ptr=start;
	do{
		cout<<ptr->data<<"-> ";
		ptr=ptr->next;
	}while(ptr!=start);
	cout<<start->data<<endl;
	return start;
}
struct node* insert_begin(struct node* start){
	cout<<"   insert_at_begining"<<endl;
	struct node* new_node,*ptr;
	new_node=new struct node;
	int num;
	cout<<"Enter the value to be insert at begining:";
	cin>>num;
	new_node->data=num;
	if(start==NULL){
		start=new_node;
	    new_node->next=start;
	}
	else{
		ptr=start;
		while(ptr->next!=start){
			ptr=ptr->next;
		}	
	}
	new_node->next=start;
	ptr->next=new_node;
	start=new_node;
	return start;
}
struct node* insert_end(struct node* start){
	cout<<"   insert_at_end"<<endl;
	struct node*new_node,*ptr;
	new_node=new struct node;
	int num;
	cout<<"Enter the value to be insert at end:";
	cin>>num;
	new_node->data=num;
	if(start==NULL){
		start=new_node;
		new_node->next=start;
	}
	else{
		ptr=start;
		while(ptr->next!=start){
			ptr=ptr->next;
		}
	}
	ptr->next=new_node;
	new_node->next=start;
	return start;
}