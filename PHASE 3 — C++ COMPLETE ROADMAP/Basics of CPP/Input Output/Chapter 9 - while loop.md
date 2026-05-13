# While Loop in C++ — Complete Beginner Guide

A `while` loop is another major looping structure in C++.

Like the `for` loop,
it allows programs to:

# repeat code automatically

But `while` loops are designed for:

# situations where number of repetitions is unknown

---

# BIG IDEA

Suppose:

```text id="m4v8tb"
Keep asking password until correct
```

You do NOT know beforehand:
how many attempts user will need.

This is perfect use case for:

# while loop

---

# SIMPLE DEFINITION

A `while` loop repeats code:

# while a condition remains true

---

# REAL-WORLD ANALOGY

Imagine filling water tank.

```text id="x7m2wc"
While tank is not full
    keep filling water
```

When condition becomes false:
loop stops.

---

# BASIC SYNTAX

```cpp id="u1x5tb"
while(condition) {

    // repeated code

}
```

---

# FIRST EXAMPLE

```cpp id="q9m3tb"
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    while(i <= 5) {
        cout << i << endl;
        i++;
    }

    return 0;
}
```

Output:

```text id="r5v8qc"
1
2
3
4
5
```

---

# STEP-BY-STEP EXECUTION

# Step 1

```cpp id="t2m7wc"
i = 1
```

---

# Step 2

Check condition:

```cpp id="v8x1tb"
i <= 5
```

Which becomes:

```text id="w4m9qc"
1 <= 5 → true
```

---

# Step 3

Execute loop body.

```cpp id="y6x2tb"
cout << i;
```

---

# Step 4

Update variable:

```cpp id="m3v7wc"
i++
```

Now:

```text id="q8m1tb"
i = 2
```

---

# Step 5

Condition checked again.

This repeats until:

```text id="u5m4qc"
i = 6
6 <= 5 → false
```

Loop stops.

---

# VISUAL FLOW

```text id="r2x9tb"
Check Condition
      ↓
TRUE ?
   ↓ YES
Execute Loop Body
      ↓
Update Variable
      ↓
Repeat
```

---

# IMPORTANT DIFFERENCE FROM FOR LOOP

---

# FOR LOOP

Best when:

```text id="y9m1wc"
number of iterations known
```

---

# WHILE LOOP

Best when:

```text id="x4m7tb"
iterations depend on runtime conditions
```

---

# PASSWORD EXAMPLE

```cpp id="t8v3qc"
#include <iostream>
using namespace std;

int main() {

    int password;

    while(password != 1234) {

        cout << "Enter Password: ";
        cin >> password;
    }

    cout << "Access Granted";

    return 0;
}
```

---

# WHY WHILE IS PERFECT HERE

Because:
number of attempts unknown beforehand.

---

# INFINITE LOOPS

Very important beginner topic.

---

# EXAMPLE

```cpp id="p1x6tb"
while(true) {
    cout << "Hello";
}
```

Runs forever.

---

# WHY?

Condition always:

```text id="m6v2wc"
true
```

---

# COMMON INFINITE LOOP BUG

```cpp id="r4m8tb"
int i = 1;

while(i <= 5) {
    cout << i;
}
```

---

# PROBLEM

Missing:

```cpp id="u7x1qc"
i++
```

Condition never changes.

---

# VISUAL IDEA

```text id="v3m9tb"
i = 1 forever
```

Loop never ends.

---

# WHILE LOOP + USER INPUT

Very common.

---

# EXAMPLE — SUM UNTIL 0

```cpp id="x8v4wc"
#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;

    cin >> num;

    while(num != 0) {

        sum += num;

        cin >> num;
    }

    cout << sum;

    return 0;
}
```

---

# HOW THIS WORKS

Loop continues until:

```text id="q5m2tb"
user enters 0
```

---

# BREAK STATEMENT

Stops loop immediately.

---

# EXAMPLE

```cpp id="t7x4qc"
while(true) {

    int x;
    cin >> x;

    if(x == -1) {
        break;
    }

    cout << x << endl;
}
```

---

# CONTINUE STATEMENT

Skips current iteration.

---

# EXAMPLE

```cpp id="m1v8tb"
int i = 0;

while(i < 5) {

    i++;

    if(i == 3) {
        continue;
    }

    cout << i << endl;
}
```

---

# OUTPUT

```text id="r6m3wc"
1
2
4
5
```

---

# DO-WHILE LOOP

Special variant.

---

# SYNTAX

```cpp id="u2x9tb"
do {

    // code

} while(condition);
```

---

# IMPORTANT DIFFERENCE

`do-while` executes:

# at least once

because condition checked later.

---

# EXAMPLE

```cpp id="x5m1qc"
int i = 1;

do {
    cout << i;
    i++;
} while(i <= 5);
```

---

# VISUAL DIFFERENCE

# WHILE LOOP

```text id="y8m4wc"
Check Condition First
```

---

# DO-WHILE LOOP

```text id="q1v7tb"
Execute First
Then Check Condition
```

---

# EXAMPLE WHERE DIFFERENCE MATTERS

```cpp id="u4m2qc"
int i = 10;

while(i < 5) {
    cout << i;
}
```

Output:

```text id="v9x5tb"
nothing
```

---

# DO-WHILE VERSION

```cpp id="m2v8qc"
do {
    cout << i;
} while(i < 5);
```

Output:

```text id="r7m1wc"
10
```

Runs once anyway.

---

# WHEN TO USE WHILE LOOP

Good for:

* input validation
* game loops
* menu systems
* simulations
* retry systems

---

# LOOP CONTROL VARIABLES

Very important concept.

Variables controlling:

```text id="t4x6tb"
when loop starts/stops
```

must be updated carefully.

---

# WHILE LOOP + ARRAYS

Example:

```cpp id="y1m9qc"
int i = 0;

while(i < 5) {
    cout << arr[i];
    i++;
}
```

---

# COMMON BEGINNER ERRORS

# 1. Infinite Loops

Most common mistake.

---

# 2. Forgetting Updates

---

# 3. Wrong Conditions

Example:

```cpp id="u6x3tb"
while(i = 5)
```

instead of:

```cpp id="p8m5wc"
while(i == 5)
```

---

# 4. Uninitialized Variables

Dangerous.

---

# WHY WHILE LOOPS ARE IMPORTANT

Used heavily in:

* operating systems
* game engines
* servers
* AI training systems
* event processing
* networking

Many systems fundamentally run continuously.

---

# FEYNMAN EXPLANATION

Simple explanation:

> A while loop repeats code as long as a condition remains true.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Print numbers 1 to 10.

---

# Exercise 2

Find sum of first N numbers.

---

# Exercise 3

Keep taking input until user enters 0.

---

# Exercise 4

Password validation loop.

---

# Exercise 5

Reverse digits of number using while loop.

---

# MINI CHALLENGE

Create menu-driven calculator:

```text id="x3v7tb"
while user doesn't choose Exit
    keep showing menu
```

---

# ACTIVE RECALL QUESTIONS

1. What is while loop?
2. Why while loops exist?
3. Difference between for and while?
4. What causes infinite loops?
5. Why updates important?
6. What does break do?
7. What does continue do?
8. Difference between while and do-while?
9. When while loops are useful?
10. Why loops fundamental in computation?

---

# ELITE ENGINEERING INSIGHT

While loops initially seem simple, but later become foundation for:

* server event loops
* operating systems
* AI training iterations
* distributed systems
* simulations
* robotics

Many advanced systems fundamentally behave like:

```text id="q6m1wc"
continuous condition-driven repetition engines
```

which is exactly the abstraction the while loop introduces.
