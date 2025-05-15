#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;
	node(int val){
		data = val;
		next = NULL;
	}
};

struct node* start = NULL;
struct node* create(struct node*);
struct node* display(struct node*);
struct node* insert_begin(struct node*);
struct node* insert_end(struct node*);
struct node* insert_position(struct node*);
struct node* delete_begin(struct node*);
struct node* delete_end(struct node*);
struct node* delete_position(struct node*);

int main(){
	start = create(start);
	display(start);
	start = insert_begin(start);
	display(start);
	start = insert_end(start);
	display(start);
	start = insert_position(start);
	display(start);
	start = delete_begin(start);
	display(start);
	start = delete_end(start);
	display(start);
	start = delete_position(start);
	display(start);
	return 0;
}

struct node* create(struct node* start){
	struct node* new_node, *ptr;
	int num;
	cout << "Enter the value till -1:" << endl;
	cin >> num;
	while(num != -1){
		new_node = new node(num);
		if(start == NULL){
			start = new_node;
		}
		else{
			ptr = start;
			while(ptr->next != NULL){
				ptr = ptr->next;
			}
			ptr->next = new_node;
		}
		cout << "Enter the value till -1:" << endl;
		cin >> num;
	}
	return start;
}

struct node* display(struct node* start){
	struct node* ptr = start;
	while(ptr != NULL){
		cout << ptr->data << " -> ";
		ptr = ptr->next;
	}
	cout << "NULL" << endl;
	return start;
}

struct node* insert_begin(struct node* start){
	cout << "   insert_at_begin" << endl;
	if(start == NULL){
		cout << "Overflow" << endl;
		return start;
	}
	struct node* new_node;
	int num;
	cout << "Enter value to insert at beginning::" << endl;
	cin >> num;
	if(num == -1) return start;
	new_node = new node(num);
	new_node->next = start;
	start = new_node;
	return start;
}

struct node* insert_end(struct node* start){
	cout << "   insert_at_end" << endl;
	if(start == NULL){
		cout << "Overflow" << endl;
		return start;
	}
	struct node* new_node, *ptr;
	int num;
	cout << "Enter value to insert at end::" << endl;
	cin >> num;
	if(num == -1) return start;
	new_node = new node(num);
	ptr = start;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return start;
}

struct node* insert_position(struct node* start){
	cout << "   insert_at_position" << endl;
	if(start == NULL){
		cout << "Overflow" << endl;
		return start;
	}
	struct node* new_node, *ptr;
	int num, pos;
	cout << "Enter the value to insert:" << endl;
	cin >> num;
	cout << "Enter the position to insert at:" << endl;
	cin >> pos;
	if(num == -1) return start;

	if(pos == 1){
		start = insert_begin(start);  // Directly call insert_begin for position 1
		return start;
	}
	
	new_node = new node(num);
	ptr = start;
	for(int i = 1; i < pos - 1 && ptr; i++){
		ptr = ptr->next;
	}
	if(ptr == NULL){
		cout << "Invalid position" << endl;
		return start;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return start;
}

struct node* delete_begin(struct node* start){
	cout << "   delete_begin" << endl;
	if(start == NULL){
		cout << "Underflow" << endl;
		return start;
	}
	struct node* ptr = start;
	start = start->next;
	delete ptr;
	return start;
}

struct node* delete_end(struct node* start){
	cout << "   delete_end" << endl;
	if(start == NULL){
		cout << "Underflow" << endl;
		return start;
	}
	struct node* ptr = start, *pre_ptr = NULL;
	while(ptr->next != NULL){
		pre_ptr = ptr;
		ptr = ptr->next;
	}
	if(pre_ptr != NULL) pre_ptr->next = NULL;
	else start = NULL;
	delete ptr;
	return start;
}

struct node* delete_position(struct node* start){
	cout << "   delete_position" << endl;
	if(start == NULL){
		cout << "Underflow" << endl;
		return start;
	}
	struct node* ptr = start, *preptr = NULL;
	int pos;
	cout << "Enter the position to delete:" << endl;
	cin >> pos;
	for(int i = 1; i < pos && ptr != NULL; i++){
		preptr = ptr;
		ptr = ptr->next;
	}
	if(ptr == NULL){
		cout << "Invalid position" << endl;
		return start;
	}
	if(preptr != NULL) preptr->next = ptr->next;
	else start = ptr->next;
	delete ptr;
	return start;
}


// #include<iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node* next;
// };
// struct node* start=NULL;
// struct node* create(struct node*);
// struct node* delete_first_node(struct node*);
// struct node* display(struct node*);
// // struct node* delete_end_node(struct node*);
// // struct node* display(struct node*);
// int main(){
//     start=create(start);
//     display(start);
//     start=delete_first_node(start);
//     display(start);
//     // delete_end_node(start);
//     // display(start);
//     return 0;
// }
// struct node* create(struct node* start){
//     struct node* new_node, *ptr;
//     int num;
//     printf("\n Enter the data:");   
//     scanf("%d",&num);
//     while(num!=-1){
//         new_node=new struct node;  //for memory allocation like malloc
//         new_node -> data=num;
//         new_node -> next=NULL;
//         if(start==NULL){
//             start=new_node;
//         }
//         else{
//             ptr=start;
//             while(ptr->next!=NULL){
//                 ptr=ptr->next;
                
//             }
//             ptr->next=new_node;
//             new_node->next=NULL;
            
//         }
//         printf("\n Enter the data:");
//         scanf("%d",&num);
//     }
//     return start;       
// }
// struct node* display(struct node* start){
//     struct node* ptr;
//     ptr= start;
//     while(ptr!=NULL){
//         printf("%d -> ",ptr->data);
//         ptr=ptr->next;
//     }
//     cout << "NULL" << endl;
//     return start;
// }
// struct node* delete_first_node(struct node* start){
//     if(start==NULL){
//         cout<<"Underflow";
//         return start;
//     }
//     struct node* ptr;
//     ptr=start;
//     start=start->next;
//     delete ptr;
//     return start;
// }
// another approach for singly ll.................................................
/*#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
    struct node* pre;
};
struct node* start=NULL;
struct node* crete_node(struct node*);
struct node* display(struct node*);
int main(){
    start=crete_node(start);
    display(start);
    return 0;
}
struct node* crete_node(struct node* start){
    struct node* new_node;
    struct node* last=NULL;
    int num;
    cout<<"Enter the data:";
    cin>>num;
    while(num!=-1){
        new_node=new struct node;
        new_node->data=num;
        new_node->next=NULL;
        new_node->pre=last;
        if(last!=NULL){
            last->next=new_node;
        }
        else{
            start=new_node;
        }
        last=new_node;
        cout<<"Enter the data:";
        cin>>num;
    }
    return start;
}
struct node* display(struct node* start){
    struct node* ptr;
    ptr= start;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    cout << "NULL" << endl;
    return start;
}*/