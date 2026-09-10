/**
 * Problem  : Majority Element (>n/2 times)
 *
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/majority-element/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-10
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {

public:

    // ─────────────────────────────────────────
    // Brute Force — Nested Loops
    // Time  : O(n²)
    // Space : O(1)
    // ─────────────────────────────────────────

    int majorityElementBrute(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int count = 0;

            for(int j = 0; j < n; j++) {

                if(nums[j] == nums[i]) {
                    count++;
                }

                if(count > (n / 2)) {
                    return nums[i];
                }
            }
        }

        return -1;
    }


    // ─────────────────────────────────────────
    // Better — Using Hash Map
    // Time  : O(n log n)
    // Space : O(n)
    // ─────────────────────────────────────────

    int majorityElementBetter(vector<int>& nums) {

        int n = nums.size();

        map<int, int> hashmap;

        for(int i = 0; i < n; i++) {
            hashmap[nums[i]]++;
        }

        for(auto it : hashmap) {

            if(it.second > (n / 2)) {
                return it.first;
            }
        }

        return -1;
    }


    // ─────────────────────────────────────────
    // Optimal — Moore's Voting Algorithm
    // Time  : O(n)
    // Space : O(1)
    // ─────────────────────────────────────────

    int majorityElementOptimal(vector<int>& nums) {

        int n = nums.size();

        int count = 0;
        int el;

        for(int i = 0; i < n; i++) {

            if(count == 0) {

                el = nums[i];
                count = 1;
            }

            else if(nums[i] == el) {

                count++;
            }

            else {

                count--;
            }
        }

        int count1 = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] == el) {
                count1++;
            }
        }

        if(count1 > (n / 2)) {
            return el;
        }

        return -1;
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


    // ─────────────────────────────────────────
    // Brute Force
    // ─────────────────────────────────────────

    cout << "Brute Force: "
         << sol.majorityElementBrute(nums) << "\n";


    // ─────────────────────────────────────────
    // Better
    // ─────────────────────────────────────────

    cout << "Better: "
         << sol.majorityElementBetter(nums) << "\n";


    // ─────────────────────────────────────────
    // Optimal
    // ─────────────────────────────────────────

    cout << "Optimal: "
         << sol.majorityElementOptimal(nums) << "\n";

    return 0;
}

