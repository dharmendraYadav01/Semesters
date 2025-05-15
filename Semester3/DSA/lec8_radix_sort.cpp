#include<iostream>
using namespace std;
int max_no(int arr[],)
int main(){
    int arr[]={3,0,1,6,3,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lsd=arr[0];
    int msd=arr[n-1];
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    Radix_sort(arr,lsd,msd);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
