# Operators in C++ — Complete Beginner Guide

Operators are symbols that tell the computer:

# what operation to perform

Without operators:
programs cannot:

* calculate
* compare
* make decisions
* manipulate data

Operators are fundamental to all programming.

---

# SIMPLE DEFINITION

An operator is:

# a symbol that performs an operation on values or variables

---

# REAL-WORLD ANALOGY

Think about mathematics.

Symbols like:

```text id="m4v8tb"
+
-
*
/
```

perform operations.

Programming operators work similarly.

---

# EXAMPLE

```cpp id="x7m2wc"
int sum = 5 + 3;
```

Here:

```text id="u1x5tb"
+ → operator
```

---

# BIG IDEA

Operators work on:

# operands

Example:

```cpp id="q9m3tb"
5 + 3
```

| Part | Meaning  |
| ---- | -------- |
| 5    | operand  |
| +    | operator |
| 3    | operand  |

---

# MAIN TYPES OF OPERATORS

| Category            | Purpose             |
| ------------------- | ------------------- |
| Arithmetic          | calculations        |
| Assignment          | store values        |
| Relational          | comparisons         |
| Logical             | combine conditions  |
| Increment/Decrement | increase/decrease   |
| Bitwise             | binary operations   |
| Ternary             | shorthand condition |

---

# 1. ARITHMETIC OPERATORS

Used for mathematics.

---

# ADDITION — `+`

```cpp id="r5v8qc"
int x = 5 + 3;
```

Result:

```text id="t2m7wc"
8
```

---

# SUBTRACTION — `-`

```cpp id="v8x1tb"
int x = 10 - 4;
```

---

# MULTIPLICATION — `*`

```cpp id="w4m9qc"
int x = 5 * 2;
```

---

# DIVISION — `/`

```cpp id="y6x2tb"
int x = 10 / 2;
```

---

# IMPORTANT — INTEGER DIVISION

```cpp id="m3v7wc"
int x = 5 / 2;
```

Result:

```text id="q8m1tb"
2
```

NOT:

```text id="u5m4qc"
2.5
```

because both operands are integers.

---

# MODULUS — `%`

Returns remainder.

```cpp id="r2x9tb"
int x = 10 % 3;
```

Result:

```text id="y9m1wc"
1
```

---

# WHY MODULUS IS IMPORTANT

Used for:

* even/odd checking
* cyclic operations
* hashing
* algorithms

Very important operator.

---

# COMPLETE ARITHMETIC EXAMPLE

```cpp id="x4m7tb"
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return 0;
}
```

---

# 2. ASSIGNMENT OPERATORS

Used to store/update values.

---

# BASIC ASSIGNMENT — `=`

```cpp id="t8v3qc"
int age = 20;
```

Means:

```text id="p1x6tb"
store 20 inside age
```

---

# COMPOUND ASSIGNMENT

---

# `+=`

```cpp id="m6v2wc"
x += 5;
```

Equivalent to:

```cpp id="r4m8tb"
x = x + 5;
```

---

# `-=`

```cpp id="u7x1qc"
x -= 2;
```

---

# `*=`

```cpp id="v3m9tb"
x *= 3;
```

---

# `/=`

```cpp id="x8v4wc"
x /= 2;
```

---

# 3. RELATIONAL OPERATORS

Used for comparisons.

Result:

```text id="q5m2tb"
true or false
```

---

# EQUAL TO — `==`

```cpp id="t7x4qc"
5 == 5
```

Result:

```text id="m1v8tb"
true
```

---

# NOT EQUAL — `!=`

```cpp id="r6m3wc"
5 != 3
```

Result:

```text id="u2x9tb"
true
```

---

# GREATER THAN — `>`

```cpp id="x5m1qc"
10 > 5
```

---

# LESS THAN — `<`

```cpp id="y8m4wc"
2 < 8
```

---

# GREATER/EQUAL — `>=`

```cpp id="q1v7tb"
5 >= 5
```

---

# LESS/EQUAL — `<=`

```cpp id="u4m2qc"
3 <= 7
```

---

# WHY RELATIONAL OPERATORS MATTER

Used in:

* conditions
* loops
* decision making

Core programming logic depends on them.

---

# 4. LOGICAL OPERATORS

Combine conditions.

---

# LOGICAL AND — `&&`

Both conditions must be true.

```cpp id="v9x5tb"
(5 > 3) && (10 > 2)
```

Result:

```text id="m2v8qc"
true
```

---

# LOGICAL OR — `||`

At least one true.

```cpp id="r7m1wc"
(5 < 3) || (10 > 2)
```

Result:

```text id="t4x6tb"
true
```

---

# LOGICAL NOT — `!`

Reverses boolean.

```cpp id="y1m9qc"
!(5 > 3)
```

Result:

```text id="u6x3tb"
false
```

---

# VISUAL LOGIC TABLE

# AND (`&&`)

| A | B | Result |
| - | - | ------ |
| T | T | T      |
| T | F | F      |
| F | T | F      |
| F | F | F      |

---

# OR (`||`)

| A | B | Result |
| - | - | ------ |
| T | T | T      |
| T | F | T      |
| F | T | T      |
| F | F | F      |

---

# 5. INCREMENT & DECREMENT

---

# INCREMENT — `++`

Adds 1.

```cpp id="p8m5wc"
x++;
```

Equivalent:

```cpp id="x3v7tb"
x = x + 1;
```

---

# DECREMENT — `--`

Subtracts 1.

```cpp id="q6m1wc"
x--;
```

---

# PRE vs POST INCREMENT

Advanced beginner topic.

---

# POST-INCREMENT

```cpp id="r9x4tb"
x++;
```

Use first, then increment.

---

# PRE-INCREMENT

```cpp id="t2m8qc"
++x;
```

Increment first, then use.

---

# EXAMPLE

```cpp id="v5x1tb"
int x = 5;

cout << x++;
```

Output:

```text id="w9m3wc"
5
```

Now:

```text id="y4v7tb"
x = 6
```

---

# 6. TERNARY OPERATOR

Short form of if-else.

Syntax:

```cpp id="u8m2qc"
condition ? value1 : value2;
```

---

# EXAMPLE

```cpp id="p3x6tb"
int age = 20;

string result = (age >= 18) ? "Adult" : "Minor";
```

---

# 7. BITWISE OPERATORS (INTRODUCTION)

Operate on binary bits.

| Operator | Meaning     |    |
| -------- | ----------- | -- |
| `&`      | AND         |    |
| `        | `           | OR |
| `^`      | XOR         |    |
| `~`      | NOT         |    |
| `<<`     | left shift  |    |
| `>>`     | right shift |    |

Advanced but important later.

---

# OPERATOR PRECEDENCE

Just like mathematics.

Example:

```cpp id="m7v4wc"
2 + 3 * 4
```

Result:

```text id="r1m8tb"
14
```

because multiplication happens first.

---

# USE PARENTHESES FOR CLARITY

```cpp id="t6x4qc"
(2 + 3) * 4
```

Result:

```text id="u3v7tb"
20
```

---

# COMMON BEGINNER ERRORS

# 1. Using `=` Instead of `==`

Wrong:

```cpp id="y5m1wc"
if (x = 5)
```

Correct:

```cpp id="x2v8tb"
if (x == 5)
```

Very common bug.

---

# 2. Integer Division Confusion

```cpp id="q7m4qc"
5 / 2
```

returns:

```text id="r8x2tb"
2
```

---

# 3. Misunderstanding Increment

---

# 4. Logical Condition Errors

Especially with `&&` and `||`.

---

# WHY OPERATORS ARE FUNDAMENTAL

Everything later depends on operators:

* algorithms
* loops
* conditions
* AI computations
* matrix operations
* graphics
* databases

---

# FEYNMAN EXPLANATION

Simple explanation:

> Operators are symbols that tell the computer to perform calculations, comparisons, or logical operations on data.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Take 2 numbers and print:

* sum
* difference
* product
* quotient
* remainder

---

# Exercise 2

Check whether number is even or odd using `%`.

---

# Exercise 3

Compare 2 numbers using relational operators.

---

# Exercise 4

Check voting eligibility using logical operators.

---

# Exercise 5

Use increment/decrement operators.

---

# MINI CHALLENGE

Create mini calculator:

Input:

* 2 numbers
* operator

Output:

* result

---

# ACTIVE RECALL QUESTIONS

1. What is operator?
2. What are operands?
3. Difference between `=` and `==`?
4. Why modulus operator important?
5. Difference between `&&` and `||`?
6. Why integer division behaves differently?
7. Difference between pre/post increment?
8. What is ternary operator?
9. Why operator precedence matters?
10. Why operators are foundational in programming?

---

# ELITE ENGINEERING INSIGHT

Operators initially appear simple, but later become foundation for:

* numerical computing
* AI tensor operations
* GPU programming
* compiler optimization
* database query engines
* scientific computing

Deep operator understanding compounds massively in advanced systems and AI engineering.
