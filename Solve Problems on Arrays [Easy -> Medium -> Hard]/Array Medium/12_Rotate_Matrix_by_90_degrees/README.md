````markdown
# Problem: Rotate Matrix by 90 degrees

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Medium |
| **Link** | [Rotate Image](https://leetcode.com/problems/rotate-image/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-15 |

---

## 🧠 Approaches

### 1. Brute Force — 90° Clockwise Rotation Using Extra Matrix

**Idea:**

Create a new `n × n` matrix and place every element of the original matrix at its rotated position.

For a 90° clockwise rotation:

```text
ans[j][n - i - 1] = matrix[i][j]
````

The original matrix is then replaced by the newly created matrix.

**Algorithm:**

1. Create an `n × n` matrix `ans`.
2. Traverse every element of the original matrix.
3. For every `matrix[i][j]`, place it at:
   `ans[j][n - i - 1]`.
4. Copy `ans` back into `matrix`.
5. Return the modified matrix.

**Complexity:**

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n²)      |
| **Space** | O(n²)      |

---

### 2. Optimal — Transpose + Reverse

**Idea:**

A 90° clockwise rotation can be performed in-place using two operations:

1. Transpose the matrix.
2. Reverse every row.

The transpose changes rows into columns, and reversing every row produces the required clockwise rotation.

**Algorithm:**

1. Traverse only the upper triangular part of the matrix.
2. Swap `matrix[i][j]` with `matrix[j][i]` to transpose the matrix.
3. Traverse every row.
4. Reverse each row.
5. The matrix is now rotated 90° clockwise.

**Complexity:**

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n²)      |
| **Space** | O(1)       |

---

### 3. Special Case — 90° Anti-Clockwise Rotation

**Idea:**

For a 90° anti-clockwise rotation, create a new matrix and place each element at its rotated position.

For every element `mat[i][j]`:

```text
ans[n - 1 - j][i] = mat[i][j]
```

This directly maps each element to its anti-clockwise rotated position.

**Algorithm:**

1. Create an `n × n` matrix `ans`.
2. Traverse every element of the original matrix.
3. For every `mat[i][j]`, place it at:
   `ans[n - 1 - j][i]`.
4. Copy `ans` back into `mat`.
5. Return the modified matrix.

**Complexity:**

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n²)      |
| **Space** | O(n²)      |

---

## 💡 Notes

* The LeetCode problem asks for a **90° clockwise rotation**.
* The optimal clockwise solution does not require an extra matrix.
* Transpose swaps:
  `matrix[i][j] ↔ matrix[j][i]`
* After transposing, reversing every row gives the clockwise rotation.
* For anti-clockwise rotation, the mapping is:
  `ans[n - 1 - j][i] = mat[i][j]`
* The matrix must be square (`n × n`) for this problem.

---

## 🧪 Test Cases

### Example 1 — Clockwise Rotation

**Input:**

```text
[
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
```

**Output:**

```text
[
    [7, 4, 1],
    [8, 5, 2],
    [9, 6, 3]
]
```

---

### Example 2 — Clockwise Rotation

**Input:**

```text
[
    [1, 2],
    [3, 4]
]
```

**Output:**

```text
[
    [3, 1],
    [4, 2]
]
```

---

### Example 3 — Anti-Clockwise Rotation

**Input:**

```text
[
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
```

**Output:**

```text
[
    [3, 6, 9],
    [2, 5, 8],
    [1, 4, 7]
]
```

---

## 📊 Approach Comparison

| Approach            | Rotation       | Time  | Space |
| ------------------- | -------------- | ----- | ----- |
| Brute Force         | Clockwise      | O(n²) | O(n²) |
| Transpose + Reverse | Clockwise      | O(n²) | O(1)  |
| Special Case        | Anti-Clockwise | O(n²) | O(n²) |

---

## 📂 Solution

See [`solution.cpp`](./solution.cpp)

```
```
