/**
 * Problem  : Move Zeros to end
 *
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/move-zeroes/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-03
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {
public:

    // ─────────────────────────────────────────
    // Brute Force — Using Extra Array
    // Time  : O(n)
    // Space : O(n)
    // ─────────────────────────────────────────

    void moveZeroesBrute(vector<int>& nums) {

        vector<int> temp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        int nz = temp.size();

        for(int i = 0; i < nz; i++) {
            nums[i] = temp[i];
        }

        for(int i = nz; i < n; i++) {
            nums[i] = 0;
        }
    }


    // ─────────────────────────────────────────
    // Optimal — Two Pointers
    // Time  : O(n)
    // Space : O(1)
    // ─────────────────────────────────────────

    void moveZeroesOptimal(vector<int>& nums) {

        int n = nums.size();

        int j = -1;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }

        if(j == -1) return;

        for(int i = j + 1; i < n; i++) {

            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
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

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> brute = nums;
    vector<int> optimal = nums;

    sol.moveZeroesBrute(brute);

    sol.moveZeroesOptimal(optimal);

    cout << "Brute Force: ";

    for(int x : brute) {
        cout << x << " ";
    }

    cout << "\n";

    cout << "Optimal: ";

    for(int x : optimal) {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}