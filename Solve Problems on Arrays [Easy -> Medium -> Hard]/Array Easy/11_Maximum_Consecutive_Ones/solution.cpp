/**
 * Problem  : Maximum Consecutive Ones
 *
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/max-consecutive-ones/
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
    // Optimal — Counting Consecutive Ones
    // Time  : O(n)
    // Space : O(1)
    // ─────────────────────────────────────────

    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int maxi = 0;
        int count = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] == 1) {

                count++;

                maxi = max(maxi, count);
            }

            else {

                count = 0;
            }
        }

        return maxi;
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

    cout << "Maximum Consecutive Ones: "
         << sol.findMaxConsecutiveOnes(nums) << "\n";

    return 0;
}

