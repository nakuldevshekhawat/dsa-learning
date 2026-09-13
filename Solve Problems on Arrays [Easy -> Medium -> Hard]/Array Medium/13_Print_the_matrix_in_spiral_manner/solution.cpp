
/**
 * Problem  : Print the matrix in spiral manner
 *
 * Platform : Leetcode
 * Difficulty: Medium
 * Link     : https://leetcode.com/problems/spiral-matrix/
 * Topic    : Solve Problems on Arrays [Easy -> Medium -> Hard]
 * Date     : 2026-09-13
 */

#include <bits/stdc++.h>
using namespace std;

// ─────────────────────────────────────────────
//  Solution Class
// ─────────────────────────────────────────────

class Solution {

public:

    // ─────────────────────────────────────────
    // Approach 1 — Spiral Traversal
    // Time  : O(n * m)
    // Space : O(n * m) for output
    // ─────────────────────────────────────────

    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> ans;

        int left = 0;
        int right = m - 1;
        int top = 0;
        int bottom = n - 1;

        while (left <= right && top <= bottom) {

            // Left -> Right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // Top -> Bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Right -> Left
            if (top <= bottom) {

                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }

                bottom--;
            }

            // Bottom -> Top
            if (left <= right) {

                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }

                left++;
            }
        }

        return ans;
    }


    // ─────────────────────────────────────────
    // Approach 2 — Kth Element in Spiral Order
    // Time  : O(n * m) worst case
    // Space : O(1)
    // ─────────────────────────────────────────

    int findK(vector<vector<int>>& mat, int k) {

        int n = mat.size();
        int m = mat[0].size();

        int left = 0;
        int right = m - 1;
        int top = 0;
        int bottom = n - 1;

        int count = 0;

        while (left <= right && top <= bottom) {

            // Left -> Right
            for (int i = left; i <= right; i++) {

                count++;

                if (count == k) {
                    return mat[top][i];
                }
            }

            top++;

            // Top -> Bottom
            for (int i = top; i <= bottom; i++) {

                count++;

                if (count == k) {
                    return mat[i][right];
                }
            }

            right--;

            // Right -> Left
            if (top <= bottom) {

                for (int i = right; i >= left; i--) {

                    count++;

                    if (count == k) {
                        return mat[bottom][i];
                    }
                }

                bottom--;
            }

            // Bottom -> Top
            if (left <= right) {

                for (int i = bottom; i >= top; i--) {

                    count++;

                    if (count == k) {
                        return mat[i][left];
                    }
                }

                left++;
            }
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

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans = sol.spiralOrder(matrix);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

