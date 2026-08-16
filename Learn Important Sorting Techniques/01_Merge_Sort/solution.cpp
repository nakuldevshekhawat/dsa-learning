/**
 * Problem  : Merge Sort
 * Platform : Gfg
 * Difficulty: Medium
 * Link     : https://www.geeksforgeeks.org/problems/merge-sort/1
 * Topic    : Learn Important Sorting Techniques
 * Date     : 2026-08-16
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────
class Solution {
public:
void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
     while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

    void mergeSort(int arr[], int low, int high) {
        if(low>=high) return;
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

};

// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    // TODO: Add test cases here
    Solution sol;
    sol.mergeSort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
        
        cout<<arr[i]<<" ";
    }


    return 0;
}
