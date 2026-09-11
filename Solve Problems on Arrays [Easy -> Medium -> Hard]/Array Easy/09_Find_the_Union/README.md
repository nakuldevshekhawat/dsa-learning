````markdown
# Problem: Union of Two Sorted Arrays

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | GeeksforGeeks |
| **Difficulty** | Medium |
| **Link** | [Union of Two Sorted Arrays](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-09 |

---

## 🧠 Approaches

### 1. Brute Force — Using Set

**Idea:**

Use a `set` to store all elements from both arrays.

A `set` automatically:
- Removes duplicate elements.
- Stores elements in sorted order.

After inserting all elements, copy the elements from the set into the answer
vector.

**Algorithm:**

1. Create an empty `set<int>`.
2. Insert all elements of the first array into the set.
3. Insert all elements of the second array into the set.
4. Traverse the set.
5. Store each element in the result array.
6. Return the result.

**Complexity:**

Let:

```text
N = n1 + n2
````

| Type      | Complexity                |
| --------- | ------------------------- |
| **Time**  | O((n1 + n2) log(n1 + n2)) |
| **Space** | O(n1 + n2)                |

---

### 2. Optimal — Two Pointers

**Idea:**

Since both arrays are already sorted, we can use two pointers instead of a
`set`.

Pointer `i` traverses the first array and pointer `j` traverses the second
array.

At every step, compare the current elements and add the smaller element to
the union.

If both elements are equal, add the element only once and move both pointers.

**Algorithm:**

1. Initialize `i = 0` and `j = 0`.
2. Compare `a[i]` and `b[j]`.
3. If `a[i] <= b[j]`:

   * Add `a[i]` if it is not already present.
   * Move `i`.
4. Otherwise:

   * Add `b[j]` if it is not already present.
   * Move `j`.
5. Continue until one array is completely traversed.
6. Add the remaining elements of the other array.
7. Avoid duplicates by comparing with the last element of the result.
8. Return the union array.

**Complexity:**

| Type      | Complexity                      |
| --------- | ------------------------------- |
| **Time**  | O(n1 + n2)                      |
| **Space** | O(1) *(excluding output array)* |

---

## 💡 Notes

* The union contains every distinct element present in either array.
* Duplicate elements must appear only once.
* The input arrays are sorted, which allows the optimal two-pointer approach.
* `set` automatically removes duplicates and maintains sorted order.
* The optimal approach avoids the extra `set` and uses the sorted property of
  the arrays.
* `unionArr.back()` is used to check whether the current element has already
  been added.

---

## 🧪 Test Cases

### Example 1

```text
Input:
5
1 2 3 4 5
3
2 3 6

Output:
1 2 3 4 5 6
```

### Example 2

```text
Input:
4
1 1 2 2
4
2 2 3 3

Output:
1 2 3
```

### Example 3

```text
Input:
3
1 3 5
3
2 4 6

Output:
1 2 3 4 5 6
```

---

## 📂 Solution

See [`sol.cpp`](./sol.cpp)

```
```
