//
// Created by harya on 31-08-2025.
//

#include "checking_palindrome.h"
#include<iostream>
int pal(int i,int n,char *s) {
    if (i>=n/2) {
        return true;
    }
    if (s[i]!=s[n-i-1]) {
        return false;
    }
    return pal(i+1,n,s);
}
using namespace std;
int main() {
    int n;
    cout<<"Enter lenght of string: ";
    cin>>n;
    char arr[n];
    cout<<"Enter String: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (pal(0,n,arr)) {
        cout<<"Palindrome!";
    }
    else {
        cout<<"Not Palindrome!";
    }
}