/**
 * Problem  : Second Largest Element in an Array without sorting
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/second-largest3735/1
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-08-18
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────
class Solution {
public:
int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
        
    }

};

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
   
    Solution sol;
    cout<< sol.getSecondLargest(arr);

    return 0;
}
