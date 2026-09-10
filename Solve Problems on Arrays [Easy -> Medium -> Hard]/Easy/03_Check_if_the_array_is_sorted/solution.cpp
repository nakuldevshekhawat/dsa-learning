/**
 * Problem  : Check if the array is sorted
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-08-19
 */

#include <bits/stdc++.h>
using namespace std;


int check_sorted(vector<int>& arr,int n){
 for(int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){

    }
    else{
        return false;
    }

 }
 return true;
}

// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────
int main() {
      int n;

    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<check_sorted(arr,n);

    return 0;
}
