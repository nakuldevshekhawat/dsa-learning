````markdown
# Problem: Maximum Consecutive Ones

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Easy |
| **Link** | [Maximum Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-09 |

---

## 🧠 Approach

### Counting Consecutive Ones

**Idea:**

Traverse the array once while maintaining a `count` of consecutive `1`s.

Whenever we encounter a `1`, increase `count`.

Whenever we encounter a `0`, reset `count` to `0`.

At every `1`, update `maxi` with the maximum value of `count` seen so far.

---

## 📐 Algorithm

1. Initialize `count = 0` to keep track of the current consecutive ones.
2. Initialize `maxi = 0` to store the maximum consecutive ones found.
3. Traverse the array from left to right.
4. If the current element is `1`:
   - Increment `count`.
   - Update `maxi`.
5. If the current element is `0`:
   - Reset `count` to `0`.
6. Return `maxi`.

### Example

```text
nums = [1, 1, 0, 1, 1, 1]

count = 1 → 2 → 0 → 1 → 2 → 3
maxi  = 1 → 2 → 2 → 2 → 2 → 3
````

Therefore:

```text
Answer = 3
```

---

## ⏱ Complexity Analysis

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n)       |
| **Space** | O(1)       |

---

## 💡 Notes

* `count` stores the current streak of consecutive `1`s.
* Encountering `0` breaks the current streak.
* `maxi` stores the longest streak found so far.
* Only one traversal of the array is required.
* No extra data structure is needed.

---

## 🧪 Test Cases

### Example 1

```text
Input:
6
1 1 0 1 1 1

Output:
3
```

### Example 2

```text
Input:
5
1 0 1 1 0

Output:
2
```

### Example 3

```text
Input:
5
0 0 0 0 0

Output:
0
```

### Example 4

```text
Input:
5
1 1 1 1 1

Output:
5
```

---

## 📂 Solution

See [`sol.cpp`](./sol.cpp)

```
```
