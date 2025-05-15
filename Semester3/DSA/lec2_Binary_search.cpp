//Run time complexity of this searching is logarithmic
#include<iostream>
using namespace std;
int Binary_search(int *nums,int key,int size){
	
	int start=0;
	int last=size-1;
	while(start<=last){
	int mid=start+(last-start)/2;
	if(nums[mid]==key){
		return mid;
	}
	else if(key>nums[mid]){
		start=mid+1;
	}
	else{
		last=mid-1;
	}
	}
	return -1;
}
int count_occurrence(int *nums,int key,int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(nums[i]==key){
			count++;
		}
	}
	return count; 
}
int main(){
	int key;
	cout<<"Enter the key element:";
	cin>>key;
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	int nums[size];
	cout<<"Enter the element:";
	for(int i=0;i<size;i++){
		cin>>nums[i];
	}
	int result=Binary_search(nums,key,size);
	int count=count_occurrence(nums,key,size);
	cout<<"frequency of key- "<<key<<":"<<count<<endl;
	if(result!=-1)
	cout<<"The key element is present at index:"<<result<<endl;
	else{
		cout<<"The key element is not present"<<endl;
	}
}

