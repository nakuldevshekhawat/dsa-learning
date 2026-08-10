/**
 * Problem  : Bubble Sort
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/bubble-sort/1
 * Topic    : Learn Important Sorting Techniques
 * Date     : 2026-08-10
 */

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i = n-1;i>=1;i--){
        int swap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }
        if (swap == 0){
                break;
            }
            cout<<"runs\n";
    }

    
    

}
int main() {
    int n;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}