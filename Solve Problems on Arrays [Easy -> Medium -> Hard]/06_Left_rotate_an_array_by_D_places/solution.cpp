/**
 * Problem  : Left rotate an array by D places
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/rotate-array/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-08-21
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────
class Solution {
public:
       void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d=d%n;
        vector<int> temp;
        
        for(int i=0;i<d;i++){
            temp.push_back(arr[i]);
        }
        // shifting
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        // put_back
        for(int i= n-d;i<n;i++){
            arr[i]=temp[i-(n-d)];
        }
        
    }
};

// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────
int main() {
     int n;

    cin >> n;
    int d;
    cin >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution sol;
    sol.rotateArr(arr,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
