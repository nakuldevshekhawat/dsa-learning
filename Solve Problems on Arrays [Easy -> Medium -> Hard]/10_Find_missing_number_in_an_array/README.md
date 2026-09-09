````markdown
# Problem: Find Missing Number in an Array

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Easy |
| **Link** | [Find Missing Number in an Array](https://leetcode.com/problems/missing-number/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-09 |

---

## 🧠 Approaches

### 1. Brute Force — Linear Search

**Idea:**

For every number from `1` to `n`, search for that number in the given array.

If a number is not found, that number is the missing number.

**Algorithm:**

1. Find `n`, the size of the array.
2. Run a loop from `1` to `n`.
3. For each number, search the entire array.
4. Use a `flag` to determine whether the number was found.
5. If the number is not found, return it.
6. If no number from `1` to `n` is missing, return `0`.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n²) |
| **Space** | O(1) |

---

### 2. Better — Using Hash Array

**Idea:**

Use an extra array to keep track of which numbers are present.

If `hash[i] == 0`, then `i` is missing.

**Algorithm:**

1. Create a hash array of size `n + 1`.
2. Initialize all values to `0`.
3. Traverse the input array.
4. For every number `nums[i]`, mark `hash[nums[i]] = 1`.
5. Traverse from `1` to `n`.
6. The first index whose value is `0` is the missing number.
7. Return that number.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n) |
| **Space** | O(n) |

---

### 3. Optimal — Sum Formula

**Idea:**

The numbers from `0` to `n` have a known total sum:

```text
Sum = n × (n + 1) / 2
````

If we subtract the sum of the elements present in the array from the expected
sum, the result is the missing number.

**Algorithm:**

1. Find `n`, the size of the array.
2. Calculate the expected sum using:
   `n × (n + 1) / 2`
3. Calculate the sum of all elements in the array.
4. Subtract the actual sum from the expected sum.
5. Return the result.

**Complexity:**

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n)       |
| **Space** | O(1)       |

**Formula:**

```text
Missing Number = Expected Sum - Actual Sum
```

---

### 4. Optimal — XOR

**Idea:**

Use the XOR property:

```text
x ^ x = 0
x ^ 0 = x
```

Every number that appears both in the range `0...n` and in the array will
cancel out.

Only the missing number remains.

**Algorithm:**

1. Initialize `xor1 = 0` and `xor2 = 0`.
2. Traverse the array.
3. XOR every array element into `xor2`.
4. XOR every number from `1` to `n` into `xor1`.
5. XOR `xor1` and `xor2`.
6. All matching numbers cancel out.
7. The remaining value is the missing number.

**Complexity:**

| Type      | Complexity |
| --------- | ---------- |
| **Time**  | O(n)       |
| **Space** | O(1)       |

---

## 💡 Notes

* The array contains `n` distinct numbers taken from the range `[0, n]`.
* Exactly one number from this range is missing.
* The missing number can be `0`.
* The brute-force approach repeatedly searches the array, resulting in O(n²).
* The hash-array approach improves the time to O(n) but requires O(n) extra
  space.
* The sum approach uses the mathematical formula to achieve O(1) extra space.
* The XOR approach also achieves O(1) extra space and avoids potential
  arithmetic overflow concerns associated with the sum approach.

---

## 🧪 Test Cases

### Example 1

```text
Input:
3
3 0 1

Output:
2
```

### Example 2

```text
Input:
2
0 1

Output:
2
```

### Example 3

```text
Input:
9
9 6 4 2 3 5 7 0 1

Output:
8
```

### Example 4

```text
Input:
1
0

Output:
1
```

---

## 📊 Approach Comparison

| Approach                    | Time  | Space |
| --------------------------- | ----- | ----- |
| Brute Force — Linear Search | O(n²) | O(1)  |
| Better — Hash Array         | O(n)  | O(n)  |
| Optimal — Sum Formula       | O(n)  | O(1)  |
| Optimal — XOR               | O(n)  | O(1)  |

---

## 📂 Solution

See [`sol.cpp`](./sol.cpp)

```
```
