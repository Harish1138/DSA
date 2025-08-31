//
// Created by harya on 31-08-2025.
//

#include "fibonacci.h"
#include<iostream>
using namespace std;
int fib(int n) {
    if (n<=1) {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;
    cout<<"Fibonacci of "<<n<<"th term is: "<<fib(n)<<endl;
}