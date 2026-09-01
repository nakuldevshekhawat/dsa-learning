/**
 * Problem  : Linear Search
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-01
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

int binarySearch(vector<int> arr, int n, int k) {
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
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
    int k;
    cin >> k;
    cout<<binarySearch(arr,n,k);

    return 0;
}
