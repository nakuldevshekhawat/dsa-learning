
/**
 * Problem  : Pascal's Triangle
 *
 * Platform : Leetcode
 * Difficulty: Medium
 * Link     : https://leetcode.com/problems/pascals-triangle/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-14
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {

public:

    // ─────────────────────────────────────────
    // Approach 1 — Generate Nth Row
    // Time  : O(n)
    // Space : O(n)
    // ─────────────────────────────────────────

    vector<int> nthRowOfPascalTriangle(int n) {

        vector<int> ansArr;

        int ans = 1;

        ansArr.push_back(ans);

        for (int i = 1; i < n; i++) {

            ans = ans * (n - i);
            ans = ans / i;

            ansArr.push_back(ans);
        }

        return ansArr;
    }


    // ─────────────────────────────────────────
    // Approach 2 — Generate Complete Pascal's Triangle
    // Time  : O(n²)
    // Space : O(n²) for output
    // ─────────────────────────────────────────

    vector<int> generateRow(int row) {

        long long ans = 1;

        vector<int> ansArr;

        ansArr.push_back(ans);

        for (int col = 1; col < row; col++) {

            ans = ans * (row - col);
            ans = ans / col;

            ansArr.push_back(ans);
        }

        return ansArr;
    }


    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {

            ans.push_back(generateRow(row));
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

    int numRows = 5;

    vector<vector<int>> ans = sol.generate(numRows);

    for (auto row : ans) {

        for (int x : row) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}

