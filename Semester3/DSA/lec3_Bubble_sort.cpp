// time complexity is n^2.
#include<iostream>
using namespace std;
int* bubble_sort(int arr[],int n);
void array_print(int arr[],int n);
int main(){
  int n;
  cout<<"Number of element in array:";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements in array:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Original array:";
  array_print(arr,n);
  int* sort_arr=bubble_sort(arr,n);
  cout<<"Sorted array:";
  array_print(sort_arr,n);
  return 0;
}
void array_print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int* bubble_sort(int arr[],int n){
  int temp=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(arr[i]>arr[j]){
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
    }
  }
  return arr;
}