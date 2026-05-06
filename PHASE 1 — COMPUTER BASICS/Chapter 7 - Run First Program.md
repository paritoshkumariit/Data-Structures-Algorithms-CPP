# Running Your First C++ Program — Complete Beginner Guide

Today you will learn how a real C++ program goes from:

* code
  → compilation
  → execution
  → output

This is one of the most important foundations in programming.

---

# BIG PICTURE

Complete flow:

```text id="p9l1as"
Write Code
    ↓
Save File
    ↓
Compile Program
    ↓
Executable Created
    ↓
Run Program
    ↓
See Output
```

You must deeply understand this workflow.

---

# STEP 1 — CREATE PROJECT FOLDER

Open terminal.

Create folder:

```bash id="a4q9ke"
mkdir first_program
```

Move inside:

```bash id="x8m2rv"
cd first_program
```

---

# STEP 2 — CREATE C++ FILE

Create file:

Linux/Mac:

```bash id="h6w1tn"
touch main.cpp
```

Windows CMD:

```bash id="d3f7yu"
type nul > main.cpp
```

---

# FILE STRUCTURE

```text id="e7v4ls"
first_program/
 └── main.cpp
```

---

# STEP 3 — OPEN IN VS CODE

Open current folder:

```bash id="k5r8np"
code .
```

Meaning:

* open current folder in Visual Studio Code

---

# STEP 4 — WRITE YOUR FIRST PROGRAM

Inside `main.cpp` write:

```cpp id="m2q6xb"
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

---

# UNDERSTANDING EACH LINE

# 1. Include Library

```cpp id="g1v8ds"
#include <iostream>
```

Adds input/output tools.

Without this:
`cout` won't work.

---

# 2. Namespace

```cpp id="n5w2fr"
using namespace std;
```

Lets us write:

```cpp id="b7u4pc"
cout
```

instead of:

```cpp id="y9t3km"
std::cout
```

---

# 3. Main Function

```cpp id="f3r1zx"
int main()
```

Starting point of program.

Every C++ program starts here.

---

# 4. Output Statement

```cpp id="c8v6ja"
cout << "Hello World";
```

Prints text to screen.

---

# 5. Return Statement

```cpp id="t4m9lb"
return 0;
```

Means:
program ended successfully.

---

# STEP 5 — SAVE FILE

Shortcut:

```text id="r2w7qn"
Ctrl + S
```

Always save before compiling.

---

# STEP 6 — OPEN TERMINAL

Inside VS Code:

```text id="u8x5cf"
Ctrl + `
```

(backtick key)

OR:

```text id="q4v1zh"
Terminal → New Terminal
```

---

# STEP 7 — COMPILE PROGRAM

Command:

```bash id="l7p3nk"
g++ main.cpp -o main
```

---

# WHAT THIS COMMAND DOES

| Part     | Meaning         |
| -------- | --------------- |
| g++      | compiler        |
| main.cpp | source code     |
| -o       | output name     |
| main     | executable file |

---

# WHAT HAPPENS INTERNALLY

Compiler performs:

```text id="v6n2te"
Read Code
   ↓
Check Errors
   ↓
Convert to Machine Code
   ↓
Create Executable File
```

---

# AFTER COMPILATION

New file created:

Windows:

```text id="j5x8rd"
main.exe
```

Linux/Mac:

```text id="m4q7sw"
main
```

This executable is actual runnable program.

---

# STEP 8 — RUN PROGRAM

Windows:

```bash id="n9k1yf"
main.exe
```

Linux/Mac:

```bash id="w3v6bt"
./main
```

---

# OUTPUT

```text id="x2r8pn"
Hello World
```

Congratulations.
You just ran your first C++ program.

---

# COMPLETE EXECUTION VISUALIZATION

```text id="z7m5qc"
main.cpp
   ↓
g++ compiler
   ↓
main.exe
   ↓
CPU executes instructions
   ↓
Hello World appears
```

---

# WHAT CPU DOES

When executable runs:

CPU performs instructions like:

```text id="d1v4sk"
Load text
Send text to console
Display output
```

Very fast.

---

# MEMORY VISUALIZATION

Program loaded into RAM:

```text id="f9w2ne"
RAM
 ├── Program Instructions
 └── Output Data
```

When program ends:
memory freed.

---

# WHY COMPILATION IS NECESSARY

Computers do NOT understand:

```cpp id="r6t3xj"
cout << "Hello";
```

CPU only understands:
machine instructions.

Compiler translates your code.

---

# COMMON BEGINNER ERRORS

# ERROR 1 — Missing Semicolon

Wrong:

```cpp id="k4n8zb"
cout << "Hello"
```

Correct:

```cpp id="u7m5qp"
cout << "Hello";
```

---

# ERROR 2 — Wrong Capitalization

Wrong:

```cpp id="y2v9fr"
Cout
```

Correct:

```cpp id="t5x1nc"
cout
```

C++ is case-sensitive.

---

# ERROR 3 — Missing Braces

Wrong:

```cpp id="p8r4jw"
int main(
```

Correct:

```cpp id="m1q7zb"
int main()
```

---

# ERROR 4 — File Not Found

```bash id="n3w8tk"
g++ mains.cpp -o main
```

If file name incorrect:
compiler fails.

---

# ERROR 5 — Compiler Not Installed

```text id="c6v2pm"
g++ not recognized
```

Means compiler setup incomplete.

---

# DEBUGGING MINDSET

Professional programmers:

* read error messages carefully
* solve one error at a time
* never panic

Debugging is normal.

---

# WHY THIS MATTERS

This workflow is foundation of:

* software engineering
* game development
* competitive programming
* AI systems
* operating systems

Everything begins here.

---

# FEYNMAN EXPLANATION

Simple explanation:

> We write C++ code, compiler converts it into machine instructions, and CPU executes those instructions to produce output.

---

# MINI PRACTICE TASKS

# Task 1

Change output to:

```text id="q8n4tw"
I love programming
```

---

# Task 2

Print your:

* name
* age
* school

---

# Task 3

Print:

```text id="r5m2vz"
*****
*****
*****
```

---

# Task 4

Print a triangle:

```text id="x1q7kc"
*
**
***
****
```

---

# Task 5

Print:

```text id="z4v8pn"
I will become strong at problem solving.
```

---

# DEBUGGING EXERCISE

Find all errors:

```cpp id="w6n3tb"
#include <iostream>
using namespace std

int main() {
    Cout << "Hello World"
    return 0
}
```

Questions:

* What syntax errors exist?
* What capitalization mistakes exist?
* Which semicolons are missing?

---

# ACTIVE RECALL QUESTIONS

1. What is source code?
2. What does compiler do?
3. Why do we compile programs?
4. What is executable file?
5. What does `cout` do?
6. What is `main()`?
7. Why semicolon matters?
8. What happens when program runs?
9. Difference between source code and executable?
10. Why does CPU need machine code?

---

# TERMINAL PRACTICE

Practice this sequence 10 times:

```bash id="v2k9rp"
g++ main.cpp -o main
main.exe
```

(or `./main` on Linux/Mac)

Muscle memory matters.

---

# FIRST PROGRAMMER HABITS

From today:

* Save frequently
* Compile manually
* Read errors slowly
* Type code yourself
* Never blindly copy-paste
* Practice daily

These habits create elite programmers over time.
