#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        } 
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
void Quick_sort(int arr[],int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        Quick_sort(arr,start,p-1);
        Quick_sort(arr,p+1,end);
    }
}
int main(){
    int n;
    cout<<"Enter the no. of element:";
    cin>>n;
    int* arr= new int[n];
    cout<<"Enter the element in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    cout<<"Original array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Quick_sort(arr,start,end);
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}