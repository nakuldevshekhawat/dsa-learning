#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> lis;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            lis.push_back(i);

            if(n/i!=i){
            lis.push_back(n/i);

            }
        }
    }
        sort(lis.begin(),lis.end());
        for(auto it : lis) cout << it<< " ";
    return 0;
}