/**
 * Problem  : Quick Sort
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/quick-sort/1
 * Topic    : Learn Important Sorting Techniques
 * Date     : 2026-08-17
 */

#include <bits/stdc++.h>
using namespace std;

int partitionArray(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part_idx = partitionArray(arr, low, high);
        quickSort(arr, low, part_idx - 1);
        quickSort(arr, part_idx + 1, high);
    }
}
// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────
int main()
{
    int n;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
