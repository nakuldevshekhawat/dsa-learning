#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=0;
    int n;
    cin>>n;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }

        }
    }
        if(count==2){
            cout<<"Number is prime"<<endl;
            
        }
        else {
        cout<<"NOT PRIME"<<endl;
    }
    return 0;
}