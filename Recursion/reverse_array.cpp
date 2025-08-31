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
void rev(int *arr,int start,int end) {
    if (start>=end) return;
    swap(arr[start],arr[end]);
    rev(arr,start+1,end-1);
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
    rev(arr,0,n-1);
    cout<<endl;
    cout<<"Reverse Array: ";
    disp(arr,n);


}