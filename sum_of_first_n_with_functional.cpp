//
// Created by harya on 31-08-2025.
//
#include <iostream>
using namespace std;
int f(int n) {
    if (n==0) {
        return 0;
    }
    return n+f(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<f(n);
}