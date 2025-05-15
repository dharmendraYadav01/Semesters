// time complexity is n^2.
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
	int n;
	cout<<"Enter the number of element:";
	cin>>n;
    int *arr= new int [n];
    cout<<"Original array:";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	cout<<endl;
    insertionSort(arr, n);
    cout << "Sorted array:";
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
    return 0;
}
