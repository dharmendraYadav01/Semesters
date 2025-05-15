// time complexity is n^2.
#include<iostream>
using namespace std;
int* Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
            swap(arr[min_index],arr[i]);
        }
    }
    return arr;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int *arr= new int[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int* selection =Selection_sort(arr,n);
    cout<<endl;
    cout<<"Sorted array:";
    for (int i = 0; i < n; i++)
    {
        cout<<selection[i]<<" ";
    }
    return 0;
}