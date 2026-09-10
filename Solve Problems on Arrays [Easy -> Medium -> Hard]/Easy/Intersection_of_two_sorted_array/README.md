````markdown
# Problem: Intersection of Two Sorted Arrays

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | GeeksforGeeks |
| **Difficulty** | Easy |
| **Link** | [Intersection of Two Sorted Arrays](https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-09 |

---

## 🧠 Approaches

### 1. Brute Force — Using Visited Array

**Idea:**

For every element of the first array, search for the same element in the second
array.

A `visited` array is used to make sure that the same element of the second array
is not used more than once.

Since both arrays are sorted, we can stop searching when the current element of
the second array becomes greater than the current element of the first array.

**Algorithm:**

1. Create a `visited` array of size `n2` initialized with `0`.
2. Traverse every element of `arr1`.
3. For each element, traverse `arr2`.
4. If the elements are equal and the corresponding position is not visited:
   - Add the element to the answer.
   - Mark that position as visited.
   - Break the inner loop.
5. If `arr2[j] > arr1[i]`, stop searching for the current element because the
   arrays are sorted.
6. Return the intersection array.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n1 × n2) |
| **Space** | O(n2) |

---

### 2. Optimal — Two Pointers

**Idea:**

Because both arrays are sorted, we can use two pointers instead of searching
the entire second array for every element.

One pointer `i` starts at the beginning of `arr1`, and another pointer `j`
starts at the beginning of `arr2`.

**Algorithm:**

1. Initialize `i = 0` and `j = 0`.
2. Compare `arr1[i]` and `arr2[j]`.
3. If both are equal:
   - Add the element to the answer.
   - Move both pointers forward.
4. If `arr1[i] < arr2[j]`, move `i` forward.
5. Otherwise, move `j` forward.
6. Continue until either pointer reaches the end of its array.
7. Return the intersection array.

**Why move the smaller element?**

Suppose:

```text
arr1[i] = 2
arr2[j] = 5
````

Since both arrays are sorted, `2` cannot match `5` or any element after `5`.

Therefore, we safely move the pointer of the smaller element:

```text
arr1[i] < arr2[j]
        ↓
       i++
```

Similarly:

```text
arr1[i] > arr2[j]
        ↓
       j++
```

**Complexity:**

| Type      | Complexity                      |
| --------- | ------------------------------- |
| **Time**  | O(n1 + n2)                      |
| **Space** | O(1) *(excluding output array)* |

---

## 💡 Notes

* Both input arrays must be sorted for the two-pointer approach.
* The `visited` array is required in the brute-force approach to avoid using
  the same element of `arr2` multiple times.
* The optimal approach works by taking advantage of the sorted order.
* When both elements are equal, move both pointers.
* When elements are different, move the pointer pointing to the smaller value.

---

## 🧪 Test Cases

### Example 1

```text
Input:
5
1 2 2 3 4
4
2 2 4 6

Output:
2 2 4
```

### Example 2

```text
Input:
4
1 2 3 4
4
2 4 6 8

Output:
2 4
```

### Example 3

```text
Input:
3
1 3 5
3
2 4 6

Output:
Empty
```

---

## 📂 Solution

See [`sol.cpp`](./sol.cpp)

```
```
