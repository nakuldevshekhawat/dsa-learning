/**
 * Problem  : Remove duplicates from Sorted array
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-08-20
 */

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int i =0;
	for(int j=1;j<n;j++){
		if(arr[j]!=arr[i]){
			arr[i+1]=arr[j];
			i++;
		}
	} return i+1;
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
    cout<<removeDuplicates(arr,n);
    return 0;
}
