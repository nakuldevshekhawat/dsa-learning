#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    
    }
    

    int q;
    cin>>q;
    while(q--){
        int numb;
        cin>>numb;
        // fetch
        cout<<hash[numb]<<endl;
    }
    return 0;
}