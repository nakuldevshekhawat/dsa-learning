````markdown
# Problem: Majority Element (>n/2 times)

## 📌 Problem Details

| Field | Details |
|-------|---------|
| **Platform** | Leetcode |
| **Difficulty** | Easy |
| **Link** | [Majority Element](https://leetcode.com/problems/majority-element/) |
| **Topic** | Solve Problems on Arrays [Easy -> Medium -> Hard] |
| **Date** | 2026-09-10 |

---

## 🧠 Approaches

### 1. Brute Force — Nested Loops

**Idea:**

For every element in the array, count how many times it appears.

If its frequency becomes greater than `n/2`, it is the majority element.

**Algorithm:**

1. Traverse the array using index `i`.
2. Treat `nums[i]` as the current candidate.
3. Traverse the complete array using index `j`.
4. Count how many times `nums[i]` occurs.
5. If the count becomes greater than `n/2`, return `nums[i]`.
6. If no element satisfies the condition, return `-1`.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n²) |
| **Space** | O(1) |

---

### 2. Better — Using Hash Map

**Idea:**

Use a `map` to store the frequency of every element.

After counting all elements, check which element occurs more than `n/2`
times.

**Algorithm:**

1. Create a `map<int, int>`.
2. Traverse the array.
3. Increase the frequency of every element in the map.
4. Traverse the map.
5. If an element has frequency greater than `n/2`, return that element.
6. If no majority element exists, return `-1`.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n log n) |
| **Space** | O(n) |

> `map` keeps its keys sorted and performs insertion in O(log n).

---

### 3. Optimal — Moore's Voting Algorithm

**Idea:**

The majority element appears **more than n/2 times**.

We maintain:
- `el` → current candidate
- `count` → candidate's current vote count

When the count becomes `0`, we select the current element as a new candidate.

If the current element matches the candidate, increase the count.

Otherwise, decrease the count.

The majority element survives this cancellation process.

After finding the candidate, we perform a second pass to verify that it
actually occurs more than `n/2` times.

**Algorithm:**

1. Initialize `count = 0`.
2. Traverse the array.
3. If `count == 0`, select the current element as `el`.
4. If the current element equals `el`, increment `count`.
5. Otherwise, decrement `count`.
6. After the first pass, `el` is the potential majority element.
7. Traverse the array again and count occurrences of `el`.
8. If its count is greater than `n/2`, return `el`.
9. Otherwise, return `-1`.

**Complexity:**

| Type | Complexity |
|------|------------|
| **Time** | O(n) |
| **Space** | O(1) |

---

## 💡 Notes

- A majority element must appear **more than n/2 times**.
- The Brute Force approach checks the frequency of each element separately.
- The Hash Map approach stores frequencies to avoid repeated counting.
- Moore's Voting Algorithm uses the cancellation principle to find a
  potential majority element.
- The second pass in the optimal approach verifies the candidate when a
  majority element is not guaranteed.
- If the problem guarantees that a majority element always exists, the
  verification pass can be omitted.

---

## 🧪 Test Cases

### Example 1

```text
Input:
3
3 2 3

Output:
3
````

### Example 2

```text
Input:
7
2 2 1 1 1 2 2

Output:
2
```

### Example 3

```text
Input:
5
1 2 3 4 5

Output:
-1
```

---

## 📊 Approach Comparison

| Approach                   | Time       | Space |
| -------------------------- | ---------- | ----- |
| Brute Force — Nested Loops | O(n²)      | O(1)  |
| Better — Hash Map          | O(n log n) | O(n)  |
| Optimal — Moore's Voting   | O(n)       | O(1)  |

---

## 📂 Solution

See [`sol.cpp`](./sol.cpp)

```
```
