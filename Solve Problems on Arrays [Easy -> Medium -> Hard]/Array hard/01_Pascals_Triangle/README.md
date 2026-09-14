````markdown
# Problem: Pascal's Triangle

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Medium |
| **Link** | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-14 |

---

## 🧠 Approaches

### 1. Generate Nth Row

**Idea:**

Each row of Pascal's Triangle contains binomial coefficients.

The first element of every row is `1`. Each next element can be calculated from the previous element using:

```text
current = previous × (row - column) / column
````

This avoids calculating factorials separately.

**Algorithm:**

1. Create an empty vector `ansArr`.
2. Start with `ans = 1`.
3. Add `1` as the first element.
4. Iterate from `i = 1` to `n - 1`.
5. Calculate the next element using the previous value.
6. Add the calculated value to `ansArr`.
7. Return the row.

**Complexity:**

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n)       |
| **Space** | O(n)       |

---

### 2. Generate Complete Pascal's Triangle

**Idea:**

Generate each row one by one.

The `generateRow()` function calculates all elements of a particular row using the binomial-coefficient relationship.

Then `generate()` calls `generateRow()` for every row from `1` to `numRows`.

**Algorithm:**

1. Create an empty 2D vector `ans`.
2. Iterate through rows from `1` to `numRows`.
3. For each row, call `generateRow(row)`.
4. Start every row with `1`.
5. Calculate the remaining elements using the previous element.
6. Store the generated row in `ans`.
7. Return the complete triangle.

**Complexity:**

| Type      | Complexity       |
| --------- | ---------------- |
| **Time**  | O(n²)            |
| **Space** | O(n²) for output |

---

## 💡 Notes

* Every row starts and ends with `1`.
* The values in Pascal's Triangle are binomial coefficients.
* Using the previous value to calculate the next value avoids repeatedly calculating factorials.
* `long long` is used in `generateRow()` for intermediate calculations.
* The GFG `nthRowOfPascalTriangle()` function returns only the requested row.
* The LeetCode `generate()` function returns the complete triangle.

---

## 🧪 Test Cases

### Example 1 — Complete Pascal's Triangle

**Input:**

```text
numRows = 5
```

**Output:**

```text
[
    [1],
    [1, 1],
    [1, 2, 1],
    [1, 3, 3, 1],
    [1, 4, 6, 4, 1]
]
```

---

### Example 2 — Nth Row

**Input:**

```text
n = 5
```

**Output:**

```text
[1, 4, 6, 4, 1]
```

---

### Example 3

**Input:**

```text
numRows = 1
```

**Output:**

```text
[[1]]
```

---

## 📊 Approach Comparison

| Approach                   | Time  | Space | Main Idea                      |
| -------------------------- | ----- | ----- | ------------------------------ |
| Generate Nth Row           | O(n)  | O(n)  | Generate only the required row |
| Generate Complete Triangle | O(n²) | O(n²) | Generate every row             |

---

## 📂 Solution

See [`solution.cpp`](./solution.cpp)

```
```
