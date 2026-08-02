// fibonacci number : 0,1,1,2,3,5,8,13,..
#include <bits/stdc++.h>
using namespace std;
int fiboonaci(int n){
    if(n<=1) return n;
    return fiboonaci(n-1)+fiboonaci(n-2);
}


int main() {
    int n;
    cin>>n;
    cout<<fiboonaci(n);
    return 0;
}