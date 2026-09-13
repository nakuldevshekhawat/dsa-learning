````markdown
# Problem: Print the matrix in spiral manner

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Medium |
| **Link** | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-13 |

---

## 🧠 Approaches

### 1. Spiral Traversal

**Idea:**

Traverse the matrix layer by layer in spiral order.

Maintain four boundaries:

- `left` — leftmost column
- `right` — rightmost column
- `top` — topmost row
- `bottom` — bottommost row

For every layer, traverse in four directions:

1. Left → Right
2. Top → Bottom
3. Right → Left
4. Bottom → Top

After completing each direction, move the corresponding boundary inward.

The conditions `top <= bottom` and `left <= right` prevent visiting elements more than once.

**Algorithm:**

1. Initialize:
   - `left = 0`
   - `right = m - 1`
   - `top = 0`
   - `bottom = n - 1`
2. Traverse the top row from left to right.
3. Increment `top`.
4. Traverse the right column from top to bottom.
5. Decrement `right`.
6. If `top <= bottom`, traverse the bottom row from right to left.
7. Decrement `bottom`.
8. If `left <= right`, traverse the left column from bottom to top.
9. Increment `left`.
10. Repeat until the boundaries cross.
11. Return the result.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n × m) |
| **Space** | O(n × m) for output |

---

### 2. Kth Element in Spiral Order — GFG Special Case

**Idea:**

Instead of storing the complete spiral traversal, keep a `count` of visited elements.

Whenever `count == k`, immediately return the current matrix element.

The same four-direction spiral traversal is used, but the traversal stops as soon as the kth element is found.

**Algorithm:**

1. Initialize the four matrix boundaries.
2. Initialize `count = 0`.
3. Traverse the top row from left to right.
4. Increment `count` for every element.
5. If `count == k`, return that element.
6. Move the `top` boundary inward.
7. Traverse the right column from top to bottom.
8. Increment `count` and check for `k`.
9. Move the `right` boundary inward.
10. Traverse the bottom row from right to left if it still exists.
11. Move the `bottom` boundary inward.
12. Traverse the left column from bottom to top if it still exists.
13. Move the `left` boundary inward.
14. Continue until the kth element is found.
15. Return `-1` if the kth element does not exist.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n × m) worst case |
| **Space** | O(1) |

---

## 💡 Notes

- The matrix is processed layer by layer.
- The four boundaries are the key to avoiding duplicate traversal.
- The checks:
  - `if (top <= bottom)`
  - `if (left <= right)`
  
  are important for single-row and single-column cases.
- The LeetCode problem requires the complete spiral order.
- The GFG special case only needs the kth element, so it does not store the complete traversal.
- For the GFG version, the required function name is `findK`.

---

## 🧪 Test Cases

### Example 1 — LeetCode

**Input:**

```text
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
````

**Spiral Order:**

```text
[1, 2, 3, 6, 9, 8, 7, 4, 5]
```

---

### Example 2 — Rectangular Matrix

**Input:**

```text
matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]
```

**Spiral Order:**

```text
[1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
```

---

### Example 3 — GFG Kth Element

**Input:**

```text
mat = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

k = 5
```

**Spiral Order:**

```text
[1, 2, 3, 6, 9, 8, 7, 4, 5]
```

**Output:**

```text
9
```

---

## 📊 Approach Comparison

| Approach         | Time                | Space    | Main Idea                        |
| ---------------- | ------------------- | -------- | -------------------------------- |
| Spiral Traversal | O(n × m)            | O(n × m) | Store complete spiral traversal  |
| Kth Element      | O(n × m) worst case | O(1)     | Stop when kth element is reached |

---

## 📂 Solution

See [`solution.cpp`](./solution.cpp)

```
```
