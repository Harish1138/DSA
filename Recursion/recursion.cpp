#include<iostream>
using namespace std;
int i=0;
void co(int i) {
    if (i<1) {
        return;
    }
    co(i-1);
    cout<<i<<endl;
}
int main() {
    int n;
    cin>>n;
    co(n);
}