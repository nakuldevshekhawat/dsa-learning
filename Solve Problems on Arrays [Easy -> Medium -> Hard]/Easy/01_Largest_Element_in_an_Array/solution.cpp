/**
 * Problem  : Largest Element in an Array
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-08-18
 */

#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
        int n =arr.size();
        int largest=arr[0];
        for(int i=0;i<=n-1;i++){
            if(arr[i]>largest)largest=arr[i];
        }
        return largest;
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
   cout<<largest(arr);

    return 0;
}
