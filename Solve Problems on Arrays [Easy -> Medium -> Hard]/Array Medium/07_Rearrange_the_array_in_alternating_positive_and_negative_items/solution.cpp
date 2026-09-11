/**
 * Problem  : Rearrange the array in alternating positive and negative items
 *
 * Platform : Leetcode
 * Difficulty: Medium
 * Link     : https://leetcode.com/problems/rearrange-array-elements-by-sign/
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
    // Approach 1 — Separate Positive and Negative
    // Time  : O(n)
    // Space : O(n)
    // ─────────────────────────────────────────

    vector<int> rearrangeArrayBrute(vector<int>& nums) {

        int n = nums.size();

        vector<int> pos;
        vector<int> neg;

        // Separate positive and negative elements
        for (int i = 0; i < n; i++) {

            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
            else {
                pos.push_back(nums[i]);
            }
        }

        // Place positive and negative elements alternately
        for (int i = 0; i < n / 2; i++) {

            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }

        return nums;
    }


    // ─────────────────────────────────────────
    // Approach 2 — Direct Placement Using Indices
    // Time  : O(n)
    // Space : O(n)
    // ─────────────────────────────────────────

    vector<int> rearrangeArrayOptimal(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        int posIdx = 0;
        int negIdx = 1;

        // Place positives at even indices
        // and negatives at odd indices
        for (int i = 0; i < n; i++) {

            if (nums[i] < 0) {

                ans[negIdx] = nums[i];
                negIdx += 2;
            }
            else {

                ans[posIdx] = nums[i];
                posIdx += 2;
            }
        }

        return ans;
    }


    // ─────────────────────────────────────────
    // Special Case — Unequal Positive/Negative
    // Time  : O(n)
    // Space : O(n)
    // ─────────────────────────────────────────

    vector<int> alternateNumbers(vector<int>& arr) {

        int n = arr.size();

        vector<int> pos;
        vector<int> neg;

        // Separate positive and negative elements
        for (int i = 0; i < n; i++) {

            if (arr[i] >= 0) {
                pos.push_back(arr[i]);
            }
            else {
                neg.push_back(arr[i]);
            }
        }

        // More positive elements
        if (pos.size() > neg.size()) {

            // Place alternating elements
            for (int i = 0; i < neg.size(); i++) {

                arr[2 * i] = pos[i];
                arr[2 * i + 1] = neg[i];
            }

            // Place remaining positive elements
            int index = neg.size() * 2;

            for (int i = neg.size(); i < pos.size(); i++) {

                arr[index] = pos[i];
                index++;
            }
        }

        // More negative elements or equal elements
        else {

            // Place alternating elements
            for (int i = 0; i < pos.size(); i++) {

                arr[2 * i] = pos[i];
                arr[2 * i + 1] = neg[i];
            }

            // Place remaining negative elements
            int index = pos.size() * 2;

            for (int i = pos.size(); i < neg.size(); i++) {

                arr[index] = neg[i];
                index++;
            }
        }

        return arr;
    }
};


// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;

    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = sol.rearrangeArrayOptimal(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

