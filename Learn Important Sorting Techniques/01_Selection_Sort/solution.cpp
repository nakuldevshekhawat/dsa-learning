/**
 * Problem  : Selection Sort
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/selection-sort/1
 * Topic    : Learn Important Sorting Techniques
 * Date     : 2026-08-10
 */

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){

    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[min]>arr[j]) min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

}
int main() {
    int n;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
