/**
 * Problem  : Insertion Sort
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/insertion-sort/0
 * Topic    : Learn Important Sorting Techniques
 * Date     : 2026-08-10
 */

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "runs" << endl;
        }
    }
}
int main()
{
    int n;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}