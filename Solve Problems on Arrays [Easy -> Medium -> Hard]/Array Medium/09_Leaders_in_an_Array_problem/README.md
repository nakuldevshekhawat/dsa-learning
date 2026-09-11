````markdown
# Problem: Leaders in an Array Problem

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Gfg |
| **Difficulty** | Easy |
| **Link** | [Leaders in an Array Problem](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-11 |

---

## 🧠 Approaches

### 1. Brute Force — Compare with Elements to Right

**Idea:**

For every element, check all the elements to its right.

An element is a leader if it is greater than or equal to every element on its
right side.

The last element is always a leader because there is no element to its right.

**Algorithm:**

1. Traverse the array from left to right.
2. Assume the current element is a leader.
3. Check every element to its right.
4. If any element is greater than the current element:
   - Mark it as not a leader.
   - Break the inner loop.
5. If the element is still a leader, add it to the answer.
6. Return the answer.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n²) |
| **Space** | O(1) *(excluding output)* |

---

### 2. Optimal — Traverse from Right to Left

**Idea:**

Instead of checking all elements to the right for every element, traverse the
array from right to left.

While moving from right to left, maintain the maximum element seen so far.

If the current element is greater than or equal to this maximum, it is a
leader.

**Algorithm:**

1. Initialize `maxi = INT_MIN`.
2. Traverse the array from right to left.
3. If `arr[i] >= maxi`:
   - The current element is a leader.
   - Add it to the answer.
   - Update `maxi`.
4. Continue until the beginning of the array.
5. The leaders are collected in reverse order, so reverse the answer.
6. Return the answer.

**Example:**

```text
arr = [16, 17, 4, 3, 5, 2]

Traverse from right:

2 → leader
5 → leader
3 → not leader
4 → not leader
17 → leader
16 → not leader
````

Leaders collected from right to left:

```text
[2, 5, 17]
```

After reversing:

```text
[17, 5, 2]
```

**Complexity:**

| Type      | Complexity                |
| --------- | ------------------------- |
| **Time**  | O(n)                      |
| **Space** | O(1) *(excluding output)* |

---

## 💡 Notes

* An element is a leader if it is greater than or equal to every element
  appearing after it.
* The last element is always a leader.
* `maxi` stores the maximum element encountered while traversing from right
  to left.
* `>=` is used because equal elements can also be leaders.
* The optimal approach avoids repeatedly checking elements on the right.
* Since leaders are found from right to left, the result must be reversed to
  restore the original array order.

---

## 🧪 Test Cases

### Example 1

```text
Input:
6
16 17 4 3 5 2

Output:
17 5 2
```

### Example 2

```text
Input:
5
10 4 2 4 1

Output:
10 4 4 1
```

### Example 3

```text
Input:
5
5 4 3 2 1

Output:
5 4 3 2 1
```

### Example 4

```text
Input:
5
1 2 3 4 5

Output:
5
```

---

## 📊 Approach Comparison

| Approach                                     | Time  | Space |
| -------------------------------------------- | ----- | ----- |
| Brute Force — Compare with Elements to Right | O(n²) | O(1)  |
| Optimal — Traverse from Right to Left        | O(n)  | O(1)  |

---

## 📂 Solution

See [`sol.cpp`](./sol.cpp)

```
```
