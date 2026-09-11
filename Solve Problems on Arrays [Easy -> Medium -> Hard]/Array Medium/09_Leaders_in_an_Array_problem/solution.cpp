
/**
 * Problem  : Leaders in an Array problem
 *
 * Platform : Gfg
 * Difficulty: Easy
 * Link     : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-11
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {

public:

    // ─────────────────────────────────────────
    // Brute Force — Compare with Elements to Right
    // Time  : O(n²)
    // Space : O(1) [excluding output]
    // ─────────────────────────────────────────

    vector<int> leadersBrute(vector<int>& arr) {

        int n = arr.size();

        vector<int> ans;

        for(int i = 0; i < n; i++) {

            bool leader = true;

            for(int j = i + 1; j < n; j++) {

                if(arr[i] < arr[j]) {

                    leader = false;

                    break;
                }
            }

            if(leader == true) {

                ans.push_back(arr[i]);
            }
        }

        return ans;
    }


    // ─────────────────────────────────────────
    // Optimal — Traverse from Right to Left
    // Time  : O(n)
    // Space : O(1) [excluding output]
    // ─────────────────────────────────────────

    vector<int> leadersOptimal(vector<int>& arr) {

        int n = arr.size();

        int maxi = INT_MIN;

        vector<int> ans;

        for(int i = n - 1; i >= 0; i--) {

            if(arr[i] >= maxi) {

                ans.push_back(arr[i]);

                maxi = max(maxi, arr[i]);
            }
        }

        reverse(ans.begin(), ans.end());

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

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // ─────────────────────────────────────────
    // Brute Force
    // ─────────────────────────────────────────

    vector<int> brute = sol.leadersBrute(arr);

    cout << "Brute Force: ";

    for(int x : brute) {
        cout << x << " ";
    }

    cout << "\n";


    // ─────────────────────────────────────────
    // Optimal
    // ─────────────────────────────────────────

    vector<int> optimal = sol.leadersOptimal(arr);

    cout << "Optimal: ";

    for(int x : optimal) {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}

