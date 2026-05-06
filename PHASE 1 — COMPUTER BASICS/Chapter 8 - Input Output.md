# Input and Output (I/O) in C++ — Complete Beginner Guide

Programs become useful when they can:

* take information from users
* process information
* show results

This is called:

# Input/Output (I/O)

---

# SIMPLE IDEA

# Input

Data entering the program.

Example:

* typing your name
* entering numbers
* clicking buttons

---

# Output

Data shown by the program.

Example:

* printed text
* game score
* calculator result

---

# REAL-WORLD ANALOGY

Imagine ATM machine.

# Input

You:

* insert card
* enter PIN
* choose amount

---

# Processing

ATM checks:

* balance
* account validity

---

# Output

ATM:

* gives cash
* displays message

Programs work exactly like this.

---

# BASIC C++ INPUT/OUTPUT TOOLS

In C++:

| Tool   | Purpose |
| ------ | ------- |
| `cout` | output  |
| `cin`  | input   |

Both come from:

```cpp id="c1x8tv"
#include <iostream>
```

---

# OUTPUT USING `cout`

Example:

```cpp id="p6m2rk"
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    return 0;
}
```

Output:

```text id="j4n7zp"
Hello
```

---

# HOW `cout` WORKS

```cpp id="v8q1mw"
cout << "Hello";
```

Meaning:

```text id="r5t9cn"
Send "Hello" to screen
```

---

# THE `<<` SYMBOL

This is called:

# Stream insertion operator

Think:

```text id="u3m6vx"
Data flows into output stream
```

Visual:

```text id="w7p2kb"
"Hello"
   ↓
cout
   ↓
Screen
```

---

# MULTIPLE OUTPUTS

Example:

```cpp id="d9r4xt"
cout << "My name is Paritosh";
```

---

# OUTPUT VARIABLES

```cpp id="k2v7mj"
int age = 18;

cout << age;
```

Output:

```text id="q5w8nc"
18
```

---

# COMBINING TEXT + VARIABLES

```cpp id="m1z4rx"
int age = 18;

cout << "Age is " << age;
```

Output:

```text id="t6y2vb"
Age is 18
```

---

# VISUAL FLOW

```text id="x8n5kc"
Variable age
      ↓
cout
      ↓
Screen Output
```

---

# NEW LINE

Without newline:

```cpp id="y3r8vt"
cout << "Hello";
cout << "World";
```

Output:

```text id="u9m4zx"
HelloWorld
```

---

# USING `endl`

```cpp id="z5n2wc"
cout << "Hello" << endl;
cout << "World";
```

Output:

```text id="v7x1rk"
Hello
World
```

---

# WHAT `endl` DOES

`endl`:

* moves cursor to next line
* flushes output buffer

Think:

# “Start printing on next line.”

---

# INPUT USING `cin`

Now program can take user input.

Example:

```cpp id="p2w6tm"
int age;

cin >> age;
```

---

# HOW `cin` WORKS

Program pauses:

```text id="n4x7vz"
Waiting for user input...
```

User types:

```text id="u1r9kb"
18
```

Then:

```text id="y6m3tx"
age = 18
```

stored in memory.

---

# COMPLETE INPUT PROGRAM

```cpp id="q8v2rn"
#include <iostream>
using namespace std;

int main() {
    int age;

    cin >> age;

    cout << "Your age is " << age;

    return 0;
}
```

---

# EXECUTION FLOW

```text id="s4n7wc"
Program Starts
      ↓
cin waits for input
      ↓
User types value
      ↓
Value stored in variable
      ↓
cout prints result
```

---

# MEMORY VISUALIZATION

Suppose user enters:

```text id="v9x3tm"
18
```

Memory becomes:

```text id="d6w1rb"
Variable: age
Value: 18
```

---

# INPUT MULTIPLE VARIABLES

```cpp id="j5m8tv"
int a, b;

cin >> a >> b;
```

User enters:

```text id="q1x4zr"
5 10
```

Now:

```text id="w8v2nc"
a = 5
b = 10
```

---

# COMPLETE EXAMPLE

```cpp id="t4m7vx"
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << a + b;

    return 0;
}
```

Input:

```text id="x6r1zk"
5 10
```

Output:

```text id="c9w4tb"
15
```

---

# STEP-BY-STEP EXECUTION

## Step 1

Program waits:

```cpp id="r3n8wc"
cin >> a >> b;
```

---

## Step 2

User enters:

```text id="v2m5tx"
5 10
```

---

## Step 3

Memory:

```text id="u7w1kc"
a = 5
b = 10
```

---

## Step 4

CPU calculates:

```text id="q9r4vb"
5 + 10 = 15
```

---

## Step 5

`cout` prints:

```text id="p1x8tm"
15
```

---

# COMMON BEGINNER MISTAKES

# MISTAKE 1 — Forgetting Variable Declaration

Wrong:

```cpp id="m6v2rx"
cin >> age;
```

Correct:

```cpp id="n8w5tk"
int age;
cin >> age;
```

---

# MISTAKE 2 — Wrong Direction Symbols

Wrong:

```cpp id="y4m1vc"
cin << age;
```

Correct:

```cpp id="z7r3tb"
cin >> age;
```

Remember:

* `cout <<`
* `cin >>`

---

# MISTAKE 3 — Missing `iostream`

Wrong:

```cpp id="w2v9kc"
cout << "Hello";
```

without:

```cpp id="x5m4tb"
#include <iostream>
```

---

# MISTAKE 4 — Missing Semicolon

Wrong:

```cpp id="u8r2vx"
cout << age
```

Correct:

```cpp id="v3n7wc"
cout << age;
```

---

# HOW INPUT/OUTPUT WORKS INTERNALLY

# Output

```text id="s6x1tb"
Program
   ↓
cout
   ↓
Output Stream
   ↓
Console Screen
```

---

# Input

```text id="t9m4vc"
Keyboard
   ↓
Input Stream
   ↓
cin
   ↓
Variable Memory
```

---

# WHY INPUT/OUTPUT MATTERS

Without I/O:
programs cannot interact with users.

Everything uses I/O:

* games
* apps
* websites
* AI systems
* banking software

---

# FEYNMAN EXPLANATION

Simple explanation:

> `cin` takes input from user, and `cout` displays output to the screen.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Take name input and print it.

---

# Exercise 2

Take age input and print:

```text id="v5r8tx"
Your age is __
```

---

# Exercise 3

Take 2 numbers and print sum.

---

# Exercise 4

Take 3 numbers and print product.

---

# Exercise 5

Take length and breadth and print area.

---

# Exercise 6

Take marks and print total.

---

# MINI CHALLENGE

Create program:

Input:

* name
* age
* favorite subject

Output:

```text id="q2w7vc"
Hello <name>
You are <age> years old.
Your favorite subject is <subject>.
```

---

# DEBUGGING TASK

Find all errors:

```cpp id="m9v1rx"
#include <iostream>
using namespace std;

int main() {
    int age

    cin << age;

    Cout << "Age is " << age

    return 0;
}
```

Find:

* syntax errors
* capitalization mistakes
* operator mistakes

---

# ACTIVE RECALL QUESTIONS

1. What is input?
2. What is output?
3. What does `cout` do?
4. What does `cin` do?
5. What does `<<` mean?
6. What does `>>` mean?
7. Why do we use `endl`?
8. What happens when user types input?
9. Where are variables stored?
10. Why are I/O operations important?

---

# DAILY CODING HABIT

For next 3 days:
Write at least 10 tiny input/output programs daily.

Reason:
Programming fluency comes from repetition.

