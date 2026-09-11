````markdown
# Problem: Rearrange the array in alternating positive and negative items

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Medium |
| **Link** | [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-11 |

---

## 🧠 Approaches

### 1. Separate Positive and Negative

**Idea:**

First separate all positive and negative elements into two different arrays.

Since the problem guarantees that the number of positive and negative elements is equal, place:

- Positive elements at even indices.
- Negative elements at odd indices.

This produces the required alternating arrangement.

**Algorithm:**

1. Create two vectors `pos` and `neg`.
2. Traverse the input array.
3. Store positive elements in `pos`.
4. Store negative elements in `neg`.
5. Traverse from `0` to `n / 2 - 1`.
6. Place `pos[i]` at index `2 * i`.
7. Place `neg[i]` at index `2 * i + 1`.
8. Return the modified array.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n) |
| **Space** | O(n) |

---

### 2. Direct Placement Using Indices

**Idea:**

Instead of storing positive and negative elements separately, directly place them into their required positions in a new array.

Maintain two indices:

- `posIdx = 0` → even positions for positive numbers.
- `negIdx = 1` → odd positions for negative numbers.

Whenever a positive number is found, place it at `posIdx`.

Whenever a negative number is found, place it at `negIdx`.

Both indices increase by `2`.

**Algorithm:**

1. Create an answer array `ans` of size `n`.
2. Initialize `posIdx = 0`.
3. Initialize `negIdx = 1`.
4. Traverse the input array.
5. If the current element is positive:
   - Place it at `ans[posIdx]`.
   - Increase `posIdx` by `2`.
6. If the current element is negative:
   - Place it at `ans[negIdx]`.
   - Increase `negIdx` by `2`.
7. Return `ans`.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n) |
| **Space** | O(n) |

---

### 3. Special Case — Unequal Positive and Negative Elements

**Idea:**

This version handles the case where the number of positive and negative elements is **not equal**.

First separate the elements into positive and negative arrays.

Then:

- If positive elements are more, alternate them with negative elements first, then append the remaining positive elements.
- Otherwise, alternate them first, then append the remaining negative elements.

**Algorithm:**

1. Separate positive and negative elements.
2. Compare `pos.size()` and `neg.size()`.
3. If positive elements are more:
   - Place positive and negative elements alternately.
   - Append remaining positive elements.
4. Otherwise:
   - Place positive and negative elements alternately.
   - Append remaining negative elements.
5. Return the resulting array.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n) |
| **Space** | O(n) |

---

## 💡 Notes

- In the Leetcode version, the number of positive and negative elements is equal.
- Positive elements are placed at even indices: `0, 2, 4, ...`
- Negative elements are placed at odd indices: `1, 3, 5, ...`
- The direct-placement approach avoids the need to create separate positive and negative vectors.
- The special-case approach is useful for the more general problem where positive and negative counts may be unequal.
- In the special-case code, `arr[i] >= 0` treats `0` as a non-negative/positive element.

---

## 🧪 Test Cases

### Example 1

**Input:**

```text
nums = [3, 1, -2, -5, 2, -4]
````

**Output:**

```text
[3, -2, 1, -5, 2, -4]
```

---

### Example 2

**Input:**

```text
nums = [-1, 1]
```

**Output:**

```text
[1, -1]
```

---

### Example 3 — Special Case

**Input:**

```text
arr = [1, 2, 3, -1]
```

**Output:**

```text
[1, -1, 2, 3]
```

The remaining positive element is placed after the alternating portion.

---

## 📊 Approach Comparison

| Approach                   | Time | Space | Main Idea                     |
| -------------------------- | ---- | ----- | ----------------------------- |
| Separate Positive/Negative | O(n) | O(n)  | Store both types separately   |
| Direct Placement           | O(n) | O(n)  | Use even/odd indices directly |
| Special Case               | O(n) | O(n)  | Handles unequal counts        |

---

## 📂 Solution

See [`solution.cpp`](./solution.cpp)

```
```
