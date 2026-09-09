/**
 * Problem  : Find missing number in an array
 *
 * Platform : Leetcode
 * Difficulty: Easy
 * Link     : https://leetcode.com/problems/missing-number/
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
    // Brute Force — Linear Search
    // Time  : O(n²)
    // Space : O(1)
    // ─────────────────────────────────────────

    int missingNumberBrute(vector<int>& nums) {

        int n = nums.size();

        for(int i = 1; i <= n; i++) {

            int flag = 0;

            for(int j = 0; j < n; j++) {

                if(nums[j] == i) {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0) {
                return i;
            }
        }

        return 0;
    }


    // ─────────────────────────────────────────
    // Better — Using Hash Array
    // Time  : O(n)
    // Space : O(n)
    // ─────────────────────────────────────────

    int missingNumberBetter(vector<int>& nums) {

        int n = nums.size();

        vector<int> hash(n + 1, 0);

        for(int i = 0; i < n; i++) {
            hash[nums[i]] = 1;
        }

        for(int i = 1; i <= n; i++) {

            if(hash[i] == 0) {
                return i;
            }
        }

        return 0;
    }


    // ─────────────────────────────────────────
    // Optimal — Sum Formula
    // Time  : O(n)
    // Space : O(1)
    // ─────────────────────────────────────────

    int missingNumberSum(vector<int>& nums) {

        int n = nums.size();

        int sum = n * (n + 1) / 2;

        int sum2 = 0;

        for(int i = 0; i < n; i++) {
            sum2 = sum2 + nums[i];
        }

        return sum - sum2;
    }


    // ─────────────────────────────────────────
    // Optimal — XOR
    // Time  : O(n)
    // Space : O(1)
    // ─────────────────────────────────────────

    int missingNumberXOR(vector<int>& nums) {

        int xor1 = 0;
        int xor2 = 0;

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            xor2 = xor2 ^ nums[i];

            xor1 = xor1 ^ (i + 1);
        }

        return xor1 ^ xor2;
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
         << sol.missingNumberBrute(nums) << "\n";


    // ─────────────────────────────────────────
    // Better
    // ─────────────────────────────────────────

    cout << "Better: "
         << sol.missingNumberBetter(nums) << "\n";


    // ─────────────────────────────────────────
    // Optimal — Sum
    // ─────────────────────────────────────────

    cout << "Optimal (Sum): "
         << sol.missingNumberSum(nums) << "\n";


    // ─────────────────────────────────────────
    // Optimal — XOR
    // ─────────────────────────────────────────

    cout << "Optimal (XOR): "
         << sol.missingNumberXOR(nums) << "\n";

    return 0;
}

