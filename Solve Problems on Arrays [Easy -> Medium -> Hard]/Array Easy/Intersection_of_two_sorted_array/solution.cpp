
/**
 * Problem  : Intersection of Two Sorted Arrays
 *
 * Platform : GeeksforGeeks
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-09
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {

public:

    // ─────────────────────────────────────────
    // Brute Force — Using Visited Array
    // Time  : O(n1 * n2)
    // Space : O(n2)
    // ─────────────────────────────────────────

    vector<int> intersectionBrute(vector<int>& arr1, vector<int>& arr2) {

        int n1 = arr1.size();
        int n2 = arr2.size();

        vector<int> visited(n2, 0);
        vector<int> ans;

        for(int i = 0; i < n1; i++) {

            for(int j = 0; j < n2; j++) {

                if(arr1[i] == arr2[j] && visited[j] == 0) {

                    ans.push_back(arr1[i]);
                    visited[j] = 1;

                    break;
                }

                if(arr2[j] > arr1[i]) {
                    break;
                }
            }
        }

        return ans;
    }


    // ─────────────────────────────────────────
    // Optimal — Two Pointers
    // Time  : O(n1 + n2)
    // Space : O(1)  [excluding output]
    // ─────────────────────────────────────────

    vector<int> intersectionOptimal(vector<int>& arr1, vector<int>& arr2) {

        int n1 = arr1.size();
        int n2 = arr2.size();

        int i = 0;
        int j = 0;

        vector<int> ans;

        while(i < n1 && j < n2) {

            if(arr1[i] == arr2[j]) {

                ans.push_back(arr1[i]);

                i++;
                j++;
            }

            else if(arr1[i] < arr2[j]) {

                i++;
            }

            else {

                j++;
            }
        }

        return ans;
    }
};


// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;

    int n1;
    cin >> n1;

    vector<int> arr1(n1);

    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;

    vector<int> arr2(n2);

    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }


    // ─────────────────────────────────────────
    // Brute Force
    // ─────────────────────────────────────────

    vector<int> brute = sol.intersectionBrute(arr1, arr2);

    cout << "Brute Force: ";

    for(int x : brute) {
        cout << x << " ";
    }

    cout << "\n";


    // ─────────────────────────────────────────
    // Optimal
    // ─────────────────────────────────────────

    vector<int> optimal = sol.intersectionOptimal(arr1, arr2);

    cout << "Optimal: ";

    for(int x : optimal) {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}

