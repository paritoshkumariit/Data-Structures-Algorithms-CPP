# Vector in C++ STL — Complete Deep Dive

`vector` is the single most important container in the STL of C++.

If you master vectors deeply,
you will understand:

* dynamic memory
* iterators
* STL algorithms
* cache efficiency
* container internals
* modern C++ programming

Vectors are used everywhere:

* AI frameworks
* game engines
* competitive programming
* databases
* scientific computing
* backend systems

---

# SIMPLE DEFINITION

A vector is:

# a dynamic array that can resize automatically

---

# BIG IDEA

Normal arrays:

```cpp id="m4v8tb"
int arr[5];
```

have:

```text id="x7m2wc"
fixed size
```

Vectors:

```text id="u1x5tb"
grow and shrink dynamically
```

during runtime.

---

# WHY VECTORS EXIST

Arrays have major limitations:

| Problem           | Arrays     |
| ----------------- | ---------- |
| fixed size        | yes        |
| dynamic insertion | difficult  |
| resizing          | impossible |
| memory management | manual     |

Vectors solve these elegantly.

---

# VECTOR HEADER

```cpp id="q9m3tb"
#include <vector>
```

---

# BASIC SYNTAX

```cpp id="r5v8qc"
vector<int> v;
```

Meaning:

```text id="t2m7wc"
dynamic array of integers
```

---

# MEMORY VISUALIZATION

```text id="v8x1tb"
v
↓
[ ][ ][ ][ ]
```

Initially empty.

---

# ADDING ELEMENTS — `push_back()`

Most important vector operation.

---

# EXAMPLE

```cpp id="w4m9qc"
v.push_back(10);
v.push_back(20);
v.push_back(30);
```

---

# MEMORY AFTER INSERTION

```text id="y6x2tb"
[10][20][30]
```

---

# ACCESSING ELEMENTS

---

# USING INDEX

```cpp id="m3v7wc"
cout << v[0];
cout << v[1];
```

---

# OUTPUT

```text id="q8m1tb"
10
20
```

---

# WHY VECTOR INDEXING FAST

Vectors use:

# contiguous memory

like arrays.

This allows:

```text id="u5m4qc"
O(1)
```

random access.

---

# COMPLETE VECTOR PROGRAM

```cpp id="r2x9tb"
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}
```

Output:

```text id="y9m1wc"
10 20 30
```

---

# VECTOR SIZE — `size()`

```cpp id="x4m7tb"
v.size()
```

Returns:

# number of elements

---

# EXAMPLE

```cpp id="t8v3qc"
cout << v.size();
```

Output:

```text id="p1x6tb"
3
```

---

# VECTOR CAPACITY

Very important advanced beginner topic.

---

# SIZE vs CAPACITY

| Concept  | Meaning                |
| -------- | ---------------------- |
| size     | actual elements        |
| capacity | allocated memory slots |

---

# EXAMPLE

```cpp id="m6v2wc"
vector<int> v;
```

Initially:

```text id="r4m8tb"
size = 0
capacity = 0
```

---

# AFTER INSERTIONS

Vector internally allocates extra memory.

---

# WHY?

To avoid reallocating memory every insertion.

Critical performance optimization.

---

# CHECKING CAPACITY

```cpp id="u7x1qc"
v.capacity()
```

---

# VECTOR GROWTH STRATEGY

Usually:

```text id="v3m9tb"
capacity doubles
```

when full.

---

# EXAMPLE GROWTH

```text id="x8v4wc"
1
2
4
8
16
32
...
```

---

# WHY THIS IS IMPORTANT

Enables:

```text id="q5m2tb"
amortized O(1)
```

insertion.

---

# WHAT IS AMORTIZED O(1)?

Most insertions:

```text id="t7x4qc"
very cheap
```

Occasionally:
vector reallocates memory,
which is expensive.

Average cost becomes:

```text id="m1v8tb"
O(1)
```

---

# INTERNAL REALLOCATION PROCESS

When vector full:

1. allocate larger memory
2. copy old elements
3. delete old memory
4. continue insertion

---

# VISUAL REALLOCATION

```text id="r6m3wc"
Old:
[10][20]

New:
[10][20][ ][ ]
```

---

# WHY VECTOR IS CACHE-FRIENDLY

Modern CPUs love:

# contiguous memory

because nearby memory loaded together.

Huge performance advantage.

---

# VECTOR INITIALIZATION METHODS

---

# EMPTY VECTOR

```cpp id="u2x9tb"
vector<int> v;
```

---

# FIXED SIZE VECTOR

```cpp id="x5m1qc"
vector<int> v(5);
```

Creates:

```text id="y8m4wc"
[0][0][0][0][0]
```

---

# FIXED VALUE INITIALIZATION

```cpp id="q1v7tb"
vector<int> v(5, 10);
```

Creates:

```text id="u4m2qc"
[10][10][10][10][10]
```

---

# INITIALIZER LIST

```cpp id="v9x5tb"
vector<int> v = {1,2,3,4};
```

---

# VECTOR TRAVERSAL METHODS

---

# 1. INDEX LOOP

```cpp id="m2v8qc"
for(int i = 0; i < v.size(); i++) {
    cout << v[i];
}
```

---

# 2. RANGE LOOP

```cpp id="r7m1wc"
for(int x : v)
```

Cleaner modern style.

---

# 3. ITERATORS

```cpp id="t4x6tb"
for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it;
}
```

---

# IMPORTANT VECTOR FUNCTIONS

---

# `front()`

First element.

```cpp id="y1m9qc"
v.front()
```

---

# `back()`

Last element.

```cpp id="u6x3tb"
v.back()
```

---

# `empty()`

Checks if vector empty.

```cpp id="p8m5wc"
v.empty()
```

---

# `clear()`

Removes all elements.

```cpp id="x3v7tb"
v.clear()
```

---

# `pop_back()`

Removes last element.

```cpp id="q6m1wc"
v.pop_back()
```

---

# VECTOR INSERTION

---

# INSERT AT POSITION

```cpp id="r9x4tb"
v.insert(v.begin() + 1, 100);
```

---

# VISUAL

Before:

```text id="t5m2wc"
[10][20][30]
```

After:

```text id="u8x1tb"
[10][100][20][30]
```

---

# TIME COMPLEXITY?

```text id="v4m7qc"
O(n)
```

because elements shift.

---

# VECTOR ERASE

```cpp id="w7x3tb"
v.erase(v.begin() + 1);
```

---

# WHY ERASE IS O(n)

Elements after erased position shift left.

---

# VECTOR + STL ALGORITHMS

Very important.

---

# SORT VECTOR

```cpp id="x1m8tb"
sort(v.begin(), v.end());
```

---

# REVERSE VECTOR

```cpp id="y4v2qc"
reverse(v.begin(), v.end());
```

---

# FIND ELEMENT

```cpp id="z7m5tb"
find(v.begin(), v.end(), 20);
```

---

# MAX ELEMENT

```cpp id="a2x9tb"
max_element(v.begin(), v.end());
```

---

# VECTOR OF PAIRS

Very common.

---

# EXAMPLE

```cpp id="b5m1qc"
vector<pair<int,int>> vp;
```

---

# USE CASES

* graphs
* coordinates
* intervals
* scheduling

---

# 2D VECTOR

Vector of vectors.

---

# EXAMPLE

```cpp id="c8v4tb"
vector<vector<int>> matrix;
```

---

# VISUAL

```text id="d1m7qc"
[
 [1 2 3]
 [4 5 6]
]
```

---

# DYNAMIC 2D MATRIX

Very important in:

* AI tensors
* image processing
* graphs
* DP

---

# VECTOR MEMORY INTERNALLY

Typically stores:

* pointer to memory
* current size
* current capacity

---

# SIMPLIFIED INTERNAL MODEL

```text id="e4x2tb"
vector
 ├── data pointer
 ├── size
 └── capacity
```

---

# VECTOR vs ARRAY

| Feature           | Array   | Vector    |
| ----------------- | ------- | --------- |
| size fixed        | yes     | no        |
| dynamic resize    | no      | yes       |
| STL support       | limited | full      |
| memory management | manual  | automatic |

---

# VECTOR vs LIST

| Vector                  | List                    |
| ----------------------- | ----------------------- |
| contiguous memory       | linked nodes            |
| fast indexing           | slow indexing           |
| cache-friendly          | poor cache locality     |
| expensive middle insert | efficient middle insert |

Modern systems usually heavily prefer vectors.

---

# ITERATOR INVALIDATION

Extremely important advanced topic.

---

# PROBLEM

After vector reallocation:
old iterators/pointers become invalid.

---

# EXAMPLE

```cpp id="f7m9wc"
auto it = v.begin();

v.push_back(100);
```

`it` may now be invalid.

Dangerous bug source.

---

# WHY?

Memory may have moved during reallocation.

---

# `reserve()` FUNCTION

Optimization tool.

---

# EXAMPLE

```cpp id="g3x6tb"
v.reserve(1000);
```

Preallocates memory.

---

# WHY IMPORTANT?

Avoids repeated reallocations.

Huge performance optimization.

---

# `resize()` FUNCTION

Changes vector size.

---

# EXAMPLE

```cpp id="h6m3qc"
v.resize(10);
```

---

# DIFFERENCE

| reserve           | resize                 |
| ----------------- | ---------------------- |
| changes capacity  | changes actual size    |
| no elements added | elements added/removed |

---

# PASSING VECTORS TO FUNCTIONS

Very important.

---

# BAD

```cpp id="i9v1tb"
void func(vector<int> v)
```

Copies entire vector.

---

# GOOD

```cpp id="j2m8qc"
void func(const vector<int>& v)
```

Efficient + safe.

Professional style.

---

# WHY VECTOR IS DOMINANT

Vectors balance:

* performance
* simplicity
* flexibility

better than almost any other container.

---

# VECTOR IN AI SYSTEMS

AI frameworks internally rely heavily on:

* contiguous tensor memory
* vectorized operations
* cache efficiency

Vectors relate deeply to these ideas.

---

# COMMON BEGINNER ERRORS

# 1. Index Out of Bounds

```cpp id="k5x4tb"
v[100]
```

Undefined behavior.

---

# 2. Confusing Size and Capacity

---

# 3. Invalidated Iterators

---

# 4. Using `insert()` Repeatedly at Front

Very inefficient.

---

# 5. Passing Vector by Value Accidentally

Huge performance issue.

---

# MOST IMPORTANT VECTOR COMPLEXITIES

| Operation     | Complexity     |
| ------------- | -------------- |
| indexing      | O(1)           |
| push_back     | O(1) amortized |
| pop_back      | O(1)           |
| insert middle | O(n)           |
| erase middle  | O(n)           |

Must memorize these.

---

# FEYNMAN EXPLANATION

Simple explanation:

> A vector is a dynamic array that automatically resizes itself while providing fast indexing and efficient memory usage.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Create vector and add 10 elements.

---

# Exercise 2

Print vector using:

* index loop
* range loop
* iterators

---

# Exercise 3

Find max element.

---

# Exercise 4

Sort vector.

---

# Exercise 5

Create 2D vector matrix.

---

# MINI CHALLENGE

Build Student Record System:

Store:

* names
* marks
* IDs

using:

* vector
* pair

Add:

* sorting
* searching
* insertion
* deletion

---

# ACTIVE RECALL QUESTIONS

1. Why vectors better than arrays?
2. What is contiguous memory?
3. Difference between size and capacity?
4. Why vector insertion amortized O(1)?
5. Why vectors cache-friendly?
6. What causes iterator invalidation?
7. Difference between reserve and resize?
8. Why vectors preferred over lists often?
9. Why passing vectors by reference important?
10. Why vectors foundational in high-performance systems?

---

# ELITE ENGINEERING INSIGHT

Vectors are one of the most important examples of:

# abstraction aligned with hardware realities

Their design elegantly balances:

* dynamic flexibility
* cache efficiency
* low-level memory performance
* high-level usability

Modern AI systems, databases, rendering engines, and distributed infrastructure heavily depend on:

```text id="l8v2qc"
contiguous scalable memory abstractions
```

which vectors exemplify beautifully.
