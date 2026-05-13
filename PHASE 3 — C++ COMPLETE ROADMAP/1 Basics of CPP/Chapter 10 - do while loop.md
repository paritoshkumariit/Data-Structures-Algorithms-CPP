# Do-While Loop in C++ — Complete Beginner Guide

The `do-while` loop is a special looping structure in C++.

It is similar to:

* `for` loop
* `while` loop

But with one extremely important difference:

# the loop body executes at least once

---

# BIG IDEA

Suppose:

```text id="m4v8tb"
Show menu at least one time
```

Even if condition is false later,
menu should still appear once.

This is perfect for:

# do-while loop

---

# SIMPLE DEFINITION

A `do-while` loop:

# executes code first, then checks condition

---

# REAL-WORLD ANALOGY

Imagine restaurant order system.

```text id="x7m2wc"
Take order first
Then ask:
"Continue ordering?"
```

At least one order interaction happens.

---

# BASIC SYNTAX

```cpp id="u1x5tb"
do {

    // repeated code

} while(condition);
```

---

# IMPORTANT

Notice semicolon:

```cpp id="q9m3tb"
while(condition);
```

Very important syntax detail.

---

# FIRST EXAMPLE

```cpp id="r5v8qc"
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    do {
        cout << i << endl;
        i++;
    } while(i <= 5);

    return 0;
}
```

Output:

```text id="t2m7wc"
1
2
3
4
5
```

---

# STEP-BY-STEP EXECUTION

# Step 1

```cpp id="v8x1tb"
i = 1
```

---

# Step 2

Loop body executes FIRST.

```cpp id="w4m9qc"
cout << i;
```

---

# Step 3

Update variable:

```cpp id="y6x2tb"
i++
```

Now:

```text id="m3v7wc"
i = 2
```

---

# Step 4

Condition checked:

```cpp id="q8m1tb"
i <= 5
```

If true:
repeat loop.

---

# VISUAL FLOW

```text id="u5m4qc"
Execute Loop Body
       ↓
Check Condition
       ↓
TRUE ?
   ↓ YES
Repeat
```

---

# MOST IMPORTANT DIFFERENCE

---

# WHILE LOOP

```text id="r2x9tb"
Check condition first
```

---

# DO-WHILE LOOP

```text id="y9m1wc"
Execute first
Check condition later
```

---

# COMPARISON EXAMPLE

# WHILE LOOP

```cpp id="x4m7tb"
int i = 10;

while(i < 5) {
    cout << i;
}
```

Output:

```text id="t8v3qc"
nothing
```

Because:
condition false immediately.

---

# DO-WHILE VERSION

```cpp id="p1x6tb"
int i = 10;

do {
    cout << i;
} while(i < 5);
```

Output:

```text id="m6v2wc"
10
```

---

# WHY?

Loop body executes before condition checking.

---

# MENU SYSTEM EXAMPLE

Very common real-world use.

```cpp id="r4m8tb"
#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "1. Start\n";
        cout << "2. Exit\n";

        cin >> choice;

    } while(choice != 2);

    return 0;
}
```

---

# WHY DO-WHILE IS PERFECT HERE

Because menu should appear:

# at least once

---

# PASSWORD VALIDATION EXAMPLE

```cpp id="u7x1qc"
#include <iostream>
using namespace std;

int main() {

    int password;

    do {

        cout << "Enter Password: ";
        cin >> password;

    } while(password != 1234);

    cout << "Access Granted";

    return 0;
}
```

---

# EXECUTION IDEA

```text id="v3m9tb"
Ask password
      ↓
Correct ?
   ↓ NO
Repeat
```

---

# BREAK STATEMENT

Stops loop immediately.

---

# EXAMPLE

```cpp id="x8v4wc"
do {

    int x;
    cin >> x;

    if(x == -1) {
        break;
    }

    cout << x << endl;

} while(true);
```

---

# CONTINUE STATEMENT

Skips current iteration.

---

# EXAMPLE

```cpp id="q5m2tb"
int i = 0;

do {

    i++;

    if(i == 3) {
        continue;
    }

    cout << i << endl;

} while(i < 5);
```

---

# OUTPUT

```text id="t7x4qc"
1
2
4
5
```

---

# INFINITE DO-WHILE LOOP

```cpp id="m1v8tb"
do {

    cout << "Hello";

} while(true);
```

Runs forever.

---

# WHY?

Condition always:

```text id="r6m3wc"
true
```

---

# COMMON USE CASES

Do-while loops commonly used for:

* menus
* retries
* input validation
* game loops
* user interaction systems

---

# DO-WHILE vs WHILE

| while              | do-while           |
| ------------------ | ------------------ |
| checks first       | executes first     |
| may run zero times | runs at least once |

---

# DO-WHILE vs FOR

| for                     | do-while           |
| ----------------------- | ------------------ |
| fixed iteration count   | condition-driven   |
| structured loop control | interaction-driven |

---

# NESTED DO-WHILE LOOPS

Possible.

Example:

```cpp id="u2x9tb"
do {

    do {

    } while(...);

} while(...);
```

Usually avoided unless necessary.

---

# COMMON BEGINNER ERRORS

# 1. Forgetting Semicolon

Wrong:

```cpp id="x5m1qc"
while(condition)
```

Correct:

```cpp id="y8m4wc"
while(condition);
```

---

# 2. Infinite Loops

Condition never changes.

---

# 3. Wrong Conditions

Example:

```cpp id="q1v7tb"
while(x = 5)
```

instead of:

```cpp id="u4m2qc"
while(x == 5)
```

---

# 4. Forgetting Updates

Very common.

---

# WHY DO-WHILE LOOPS MATTER

Many interactive systems fundamentally require:

```text id="v9x5tb"
execute first, validate later
```

behavior.

---

# INTERNAL EXECUTION MODEL

Conceptually:

```text id="m2v8qc"
Run body once
      ↓
Evaluate condition
      ↓
Repeat if true
```

---

# FEYNMAN EXPLANATION

Simple explanation:

> A do-while loop runs code first and checks the condition afterward, guaranteeing at least one execution.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Print numbers 1 to 10.

---

# Exercise 2

Menu-driven calculator.

---

# Exercise 3

Password retry system.

---

# Exercise 4

Input validation loop.

---

# Exercise 5

Keep taking numbers until user enters 0.

---

# MINI CHALLENGE

Create ATM system:

Menu:

```text id="r7m1wc"
1 → Balance
2 → Withdraw
3 → Deposit
4 → Exit
```

Keep showing menu until Exit selected.

Use:

# do-while loop

---

# ACTIVE RECALL QUESTIONS

1. What is do-while loop?
2. Biggest difference from while loop?
3. Why do-while executes at least once?
4. Why semicolon important?
5. What causes infinite loops?
6. When do-while useful?
7. What does break do?
8. What does continue do?
9. Why menus often use do-while?
10. Why loops fundamental in computation?

---

# ELITE ENGINEERING INSIGHT

Do-while loops introduce an important systems idea:

```text id="t4x6tb"
perform action first
then validate continuation
```

This pattern appears later in:

* event-driven systems
* user interfaces
* network protocols
* operating systems
* AI interaction loops
* distributed retry mechanisms

It is a surprisingly deep computational pattern hidden inside a beginner construct.
