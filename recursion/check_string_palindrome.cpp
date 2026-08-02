#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int i,string &s){
    if (i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-1-i]){
        return false;
    }
    return ispalindrome(i+1,s);
}

int main() {

    string s="ramar";
    cout<<ispalindrome(0,s);
    return 0;
}