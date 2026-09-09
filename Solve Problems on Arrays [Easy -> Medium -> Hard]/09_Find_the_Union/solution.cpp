
/**
 * Problem  : Union of Two Sorted Arrays
 *
 * Platform : GeeksforGeeks
 * Difficulty: Medium
 * Link     : https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
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
    // Brute Force — Using Set
    // Time  : O((n1 + n2) log(n1 + n2))
    // Space : O(n1 + n2)
    // ─────────────────────────────────────────

    vector<int> findUnionBrute(vector<int>& a, vector<int>& b) {

        set<int> st;

        for(int x : a) {
            st.insert(x);
        }

        for(int x : b) {
            st.insert(x);
        }

        vector<int> unionArr;

        for(int x : st) {
            unionArr.push_back(x);
        }

        return unionArr;
    }


    // ─────────────────────────────────────────
    // Optimal — Two Pointers
    // Time  : O(n1 + n2)
    // Space : O(1) [excluding output]
    // ─────────────────────────────────────────

    vector<int> findUnionOptimal(vector<int>& a, vector<int>& b) {

        int n1 = a.size();
        int n2 = b.size();

        vector<int> unionArr;

        int i = 0;
        int j = 0;

        while(i < n1 && j < n2) {

            if(a[i] <= b[j]) {

                if(unionArr.size() == 0 ||
                   unionArr.back() != a[i]) {

                    unionArr.push_back(a[i]);
                }

                i++;
            }

            else {

                if(unionArr.size() == 0 ||
                   unionArr.back() != b[j]) {

                    unionArr.push_back(b[j]);
                }

                j++;
            }
        }

        while(i < n1) {

            if(unionArr.size() == 0 ||
               unionArr.back() != a[i]) {

                unionArr.push_back(a[i]);
            }

            i++;
        }

        while(j < n2) {

            if(unionArr.size() == 0 ||
               unionArr.back() != b[j]) {

                unionArr.push_back(b[j]);
            }

            j++;
        }

        return unionArr;
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

    vector<int> a(n1);

    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    int n2;
    cin >> n2;

    vector<int> b(n2);

    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }


    // ─────────────────────────────────────────
    // Brute Force
    // ─────────────────────────────────────────

    vector<int> brute = sol.findUnionBrute(a, b);

    cout << "Brute Force: ";

    for(int x : brute) {
        cout << x << " ";
    }

    cout << "\n";


    // ─────────────────────────────────────────
    // Optimal
    // ─────────────────────────────────────────

    vector<int> optimal = sol.findUnionOptimal(a, b);

    cout << "Optimal: ";

    for(int x : optimal) {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}

