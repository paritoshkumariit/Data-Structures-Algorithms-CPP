# Data Types in C++ — Complete Beginner Guide

Data types are one of the most important foundations in programming.

A computer must know:

* what kind of data you are storing
* how much memory to allocate
* what operations are allowed

Data types solve this problem.

---

# SIMPLE DEFINITION

A data type tells the computer:

# what kind of value a variable can store

---

# REAL-WORLD ANALOGY

Imagine containers.

Different containers store different things:

```text id="m4v8tb"
Water bottle → liquids
Wallet → money
Pen drive → files
```

Similarly:
different data types store different kinds of data.

---

# WHY DATA TYPES EXIST

Computer memory is just:

```text id="x7m2wc"
raw binary data
```

Data types help computer interpret memory correctly.

---

# EXAMPLE

```cpp id="u1x5tb"
int age = 20;
```

`int` tells compiler:

```text id="q9m3tb"
"This variable stores integer values."
```

---

# BIG IDEA

Data types determine:

* memory size
* allowed operations
* storage format
* range of values

---

# MAIN BASIC DATA TYPES

| Type     | Purpose          |
| -------- | ---------------- |
| `int`    | integers         |
| `float`  | decimal numbers  |
| `double` | precise decimals |
| `char`   | single character |
| `bool`   | true/false       |
| `string` | text             |

---

# 1. INTEGER TYPE — `int`

Stores whole numbers.

Example:

```cpp id="r5v8qc"
int marks = 95;
```

---

# VALID VALUES

```text id="t2m7wc"
-100
0
25
999
```

---

# INVALID FOR `int`

```text id="v8x1tb"
3.14
```

because decimal number.

---

# MEMORY SIZE

Usually:

```text id="w4m9qc"
4 bytes
```

---

# VALUE RANGE

Typically:

```text id="y6x2tb"
-2,147,483,648 to 2,147,483,647
```

---

# 2. FLOAT TYPE — `float`

Stores decimal numbers.

Example:

```cpp id="m3v7wc"
float price = 99.5;
```

---

# WHY FLOAT EXISTS

Many real-world values contain decimals:

* height
* weight
* prices
* temperatures

---

# MEMORY SIZE

Usually:

```text id="q8m1tb"
4 bytes
```

---

# FLOAT PRECISION ISSUE

Floating-point numbers are approximations.

Example:

```cpp id="u5m4qc"
float x = 0.1;
```

Internally:
not perfectly exact.

Very important advanced concept.

---

# 3. DOUBLE TYPE — `double`

More precise decimal storage.

Example:

```cpp id="r2x9tb"
double pi = 3.1415926535;
```

---

# WHY DOUBLE EXISTS

More precision than float.

Useful in:

* scientific computing
* AI
* simulations
* finance

---

# MEMORY SIZE

Usually:

```text id="y9m1wc"
8 bytes
```

---

# FLOAT vs DOUBLE

| float          | double         |
| -------------- | -------------- |
| less precision | more precision |
| 4 bytes        | 8 bytes        |

---

# 4. CHARACTER TYPE — `char`

Stores single character.

Example:

```cpp id="x4m7tb"
char grade = 'A';
```

---

# IMPORTANT

Use:

# single quotes

```cpp id="t8v3qc"
'A'
```

NOT:

```cpp id="p1x6tb"
"A"
```

---

# MEMORY SIZE

Usually:

```text id="m6v2wc"
1 byte
```

---

# CHAR INTERNALLY

Characters stored as:

# ASCII integer values

Example:

```text id="r4m8tb"
'A' → 65
```

---

# 5. BOOLEAN TYPE — `bool`

Stores logical values.

Example:

```cpp id="u7x1qc"
bool isPassed = true;
```

Possible values:

```text id="v3m9tb"
true
false
```

---

# WHY BOOL EXISTS

Used for:

* conditions
* decision-making
* logic

Very important later.

---

# MEMORY SIZE

Usually:

```text id="x8v4wc"
1 byte
```

---

# 6. STRING TYPE — `string`

Stores text.

Example:

```cpp id="q5m2tb"
string name = "Paritosh";
```

---

# IMPORTANT

Use:

# double quotes

```cpp id="t7x4qc"
"Hello"
```

---

# STRING VS CHAR

| char             | string              |
| ---------------- | ------------------- |
| single character | multiple characters |

Examples:

```cpp id="m1v8tb"
char grade = 'A';
string name = "Paritosh";
```

---

# COMPLETE EXAMPLE

```cpp id="r6m3wc"
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 5.9;
    double pi = 3.1415926535;
    char grade = 'A';
    bool isStudent = true;
    string name = "Paritosh";

    cout << name << endl;
    cout << age << endl;

    return 0;
}
```

---

# MEMORY VISUALIZATION

```text id="u2x9tb"
RAM Memory
 ├── age → 20
 ├── height → 5.9
 ├── grade → 'A'
 ├── isStudent → true
 └── name → "Paritosh"
```

---

# WHY TYPES MATTER

Compiler needs to know:

* memory allocation
* operation validity
* storage interpretation

---

# EXAMPLE — TYPE ERROR

Wrong:

```cpp id="x5m1qc"
int x = "Hello";
```

Compiler error because:
integer cannot store text.

---

# TYPE CONVERSION

Sometimes data converts automatically.

Example:

```cpp id="y8m4wc"
int x = 5.9;
```

Result:

```text id="q1v7tb"
x = 5
```

Decimal lost.

This is:

# type truncation

---

# EXPLICIT TYPE CASTING

```cpp id="u4m2qc"
double x = 9.8;

int y = (int)x;
```

Now:

```text id="v9x5tb"
y = 9
```

---

# ADVANCED IDEA — STATIC TYPING

C++ is:

# statically typed language

Meaning:
types checked during compilation.

---

# WHY STATIC TYPING MATTERS

Benefits:

* fewer bugs
* faster execution
* memory efficiency

---

# COMMON BEGINNER ERRORS

# 1. Using Wrong Quotes

Wrong:

```cpp id="m2v8qc"
char grade = "A";
```

Correct:

```cpp id="r7m1wc"
char grade = 'A';
```

---

# 2. Using int for Decimal

Wrong:

```cpp id="t4x6tb"
int price = 9.99;
```

---

# 3. Overflow

Example:

```cpp id="y1m9qc"
int x = 999999999999;
```

Too large.

---

# 4. Confusing string and char

Very common beginner mistake.

---

# HOW TYPES RELATE TO MACHINE MEMORY

Internally:
all data stored as binary.

Types tell CPU/compiler:
how to interpret bits.

---

# VISUAL IDEA

```text id="u6x3tb"
01000001
```

Could mean:

* integer
* character
* part of float

depending on data type.

---

# WHY DATA TYPES ARE FUNDAMENTAL

Everything later depends on types:

* arrays
* functions
* objects
* algorithms
* AI tensors
* databases

---

# FEYNMAN EXPLANATION

Simple explanation:

> Data types tell the computer what kind of data a variable stores and how to handle it in memory.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Create:

* int
* float
* char
* bool
* string variables

---

# Exercise 2

Store your:

* age
* height
* name
* grade

---

# Exercise 3

Print all variables.

---

# Exercise 4

Experiment with type conversion.

---

# Exercise 5

Create calculator using int and double.

---

# MINI CHALLENGE

Create student profile program:

Store:

* name
* age
* CGPA
* section
* passed/not passed

Print formatted output.

---

# ACTIVE RECALL QUESTIONS

1. What is data type?
2. Why data types matter?
3. Difference between int and float?
4. Difference between float and double?
5. Difference between char and string?
6. What is bool?
7. Why static typing matters?
8. What is type conversion?
9. Why wrong types cause errors?
10. How types relate to memory?

---

# ELITE ENGINEERING INSIGHT

Data types appear simple initially, but later become foundation for:

* memory optimization
* compiler design
* GPU programming
* AI tensor systems
* distributed computing
* database engines

Deep understanding of types becomes extremely valuable in advanced computer science and AI engineering.
