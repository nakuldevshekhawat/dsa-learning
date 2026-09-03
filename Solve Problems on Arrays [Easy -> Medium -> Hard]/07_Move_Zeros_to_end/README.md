# Problem: Move Zeros to end

## 📌 Problem Details

| Field          | Details                                                         |
| -------------- | --------------------------------------------------------------- |
| **Platform**   | Leetcode                                                        |
| **Difficulty** | Easy                                                            |
| **Link**       | [Move Zeros to end](https://leetcode.com/problems/move-zeroes/) |
| **Topic**      | Solve Problems on Arrays [Easy → Medium → Hard]                 |

---

## 🧠 Approach

### Brute Force — Using Extra Array

> Create a temporary array `temp` and store all non-zero elements in it.

> Then copy the elements of `temp` back into `nums` and fill the remaining positions with `0`.

### Optimal — Using Two Pointers

> Find the index of the first zero element in the array and store it in `j`.

> Now traverse the array from `j + 1` using `i`.

> Whenever `nums[i]` is non-zero, swap `nums[i]` with `nums[j]` and increment `j`.

---

## 📐 Algorithm

### Brute Force

1. Create an empty temporary vector `temp`.
2. Traverse the entire array.
3. If the current element is non-zero, add it to `temp`.
4. Copy all elements of `temp` back into `nums`.
5. Fill the remaining positions of `nums` with `0`.

### Optimal — Two Pointers

1. Initialize `j = -1`.
2. Traverse the array to find the first zero element.
3. If no zero is found, return.
4. Start traversing from `j + 1` using pointer `i`.
5. If `nums[i]` is non-zero:

   * Swap `nums[i]` and `nums[j]`.
   * Increment `j`.
6. Continue until the end of the array.
7. All non-zero elements will be moved to the beginning and all zeros to the end.

---

## ⏱ Complexity Analysis

| Approach                   | Time   | Space  |
| -------------------------- | ------ | ------ |
| **Brute Force**            | `O(n)` | `O(n)` |
| **Optimal — Two Pointers** | `O(n)` | `O(1)` |

---

## 💡 Notes

* The relative order of non-zero elements is maintained.
* The brute-force approach uses an extra array.
* The two-pointer approach modifies the array in-place.
* The optimal approach uses `O(1)` extra space.
* If the array contains no zero, the array remains unchanged.
* `j` always represents the position of the next zero that can be replaced by a non-zero element.

---

## ✅ Solution

See [`solution.cpp`](./solution.cpp)
