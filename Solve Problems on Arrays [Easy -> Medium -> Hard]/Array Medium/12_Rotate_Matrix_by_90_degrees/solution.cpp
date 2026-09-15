
/**
 * Problem  : Rotate Matrix by 90 degrees
 *
 * Platform : Leetcode
 * Difficulty: Medium
 * Link     : https://leetcode.com/problems/rotate-image/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-15
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {

public:

    // ─────────────────────────────────────────
    // Approach 1 — Brute Force
    // 90° Clockwise Rotation Using Extra Matrix
    //
    // Time  : O(n²)
    // Space : O(n²)
    // ─────────────────────────────────────────

    void rotateBrute(vector<vector<int>>& matrix) {

        int n = matrix.size();

        vector<vector<int>> ans(n, vector<int>(n));

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                ans[j][n - i - 1] = matrix[i][j];
            }
        }

        matrix = ans;
    }


    // ─────────────────────────────────────────
    // Approach 2 — Optimal
    // 90° Clockwise Rotation Using Transpose
    // + Reverse
    //
    // Time  : O(n²)
    // Space : O(1)
    // ─────────────────────────────────────────

    void rotateOptimal(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Transpose
        for (int i = 0; i < n - 1; i++) {

            for (int j = i + 1; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse every row
        for (int i = 0; i < n; i++) {

            reverse(matrix[i].begin(), matrix[i].end());
        }
    }


    // ─────────────────────────────────────────
    // Approach 3 — Anti-Clockwise Rotation
    // Using Extra Matrix
    //
    // Time  : O(n²)
    // Space : O(n²)
    // ─────────────────────────────────────────

    void rotateAntiClockwise(vector<vector<int>>& mat) {

        int n = mat.size();

        vector<vector<int>> ans(n, vector<int>(n));

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                ans[n - 1 - j][i] = mat[i][j];
            }
        }

        mat = ans;
    }
};


// ─────────────────────────────────────────────
//  Main
// ─────────────────────────────────────────────

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    sol.rotateOptimal(matrix);

    for (auto row : matrix) {

        for (int x : row) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}

