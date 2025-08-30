//
// Created by harya on 30-08-2025.
//

#include<iostream>
using namespace std;
int count=0;
void print_name(int n,string name) {
    count++;
    if (count==n+1) {
        return;
    }
    cout<<name<<endl;
    print_name(n,name);
}
int main() {
    int n;
    cin>>n;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    print_name(n,name);
}
