#include <bits/stdc++.h>
using namespace std;



int main() {
     int reverse_n=0;
    int lastdigit;
    int n; 

    cin>>n;
    int original=n;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        reverse_n=(reverse_n *10)+lastdigit;
    }
    cout<<reverse_n<<endl;        
    if(original==reverse_n){
        cout<<"no is an palindrome no";
    }
    else cout<<"no is not an palindrome no";
    return 0;
}