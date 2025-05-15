// time complexity is n
#include<iostream>
using namespace std;
int linear_search(int key,int *arr,int n);
int main(){
	int key;
	cout<<"Enter the element to be search:";
	cin>>key;
	int n;
	cout<<"Enter the number of element:";
	cin>>n;
	int arr[n]={};
	printf("Enter the element in array:");
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	int result=linear_search(key,arr,n);
	if(result!=-1){
	cout<<"The searching key is present at index:"<<result<<endl;
	}
	else{
		cout<<"The searching key is not present"<<endl;
	}
	return 0;
}
int linear_search(int key,int *arr,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i+1;
		}
	}
	return -1;
}
