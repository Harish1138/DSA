//
// Created by harya on 31-08-2025.
//


#include<iostream>
using namespace std;
void disp(int *arr,int n) {
    for (int i=0;i<n;i++) {
        cout<<arr[i];
        if (i!=n-1) {
            cout<<" ";
        }
    }
}
// with 1 pointer
void rev_with_1_pointer(int *arr,int i,int n) {
    if (int (i>n/2)) return;
    swap(arr[i],arr[n-i-1]);
    rev_with_1_pointer(arr,i+1,n);
}
// With 2 pointer
void rev_with_2_pointer(int *arr,int start,int end) {
    if (start>=end) return;
    swap(arr[start],arr[end]);
    rev_with_2_pointer(arr,start+1,end-1);
}
int main() {
    int n;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    disp(arr,n);
    rev_with_1_pointer(arr,0,n);
    cout<<endl;
    cout<<"Reverse Array using 1 pointer: ";
    disp(arr,n);
    cout<<endl;
    cout<<"Reverse Array using 2 pointer: ";
    disp(arr,n);


}



