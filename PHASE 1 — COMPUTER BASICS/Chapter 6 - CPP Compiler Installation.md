# Installing a C++ Compiler — Complete Beginner Guide

Before running C++ programs, your computer needs a:

# C++ Compiler

A compiler converts your C++ code into machine code the computer can execute.

Without a compiler:

* VS Code cannot run C++
* your code is just text

---

# WHAT IS A C++ COMPILER?

Example C++ code:

```cpp id="jlwm7g"
cout << "Hello";
```

Computer understands only:

```text id="jlwm4h"
101010101...
```

Compiler translates between them.

---

# MOST COMMON C++ COMPILERS

| Compiler  | Platform            |
| --------- | ------------------- |
| GCC / g++ | Linux, Windows, Mac |
| Clang     | Mac/Linux           |
| MSVC      | Windows             |

For beginners:

# Use GCC (g++)

It is:

* powerful
* industry standard
* widely used in competitive programming

---

# HOW INSTALLATION WORKS

```text id="jlwm9n"
Install Compiler
       ↓
Add Compiler to PATH
       ↓
Open Terminal
       ↓
Compile C++ Code
```

---

# WINDOWS INSTALLATION (RECOMMENDED)

# OPTION 1 — MinGW-w64 (Best Beginner Choice)

Install:

* MinGW-w64

This gives:

```text id="jlwm2y"
g++
```

compiler.

---

# STEP-BY-STEP INSTALLATION

# STEP 1

Download MinGW-w64 installer.

Choose:

* Architecture: x86_64
* Threads: posix
* Exception: seh

---

# STEP 2

Install into simple folder.

Recommended:

```text id="jlwm0m"
C:\mingw64
```

Avoid spaces in folder names.

---

# STEP 3 — ADD TO PATH

Very important.

Add:

```text id="jlwm6l"
C:\mingw64\bin
```

to system PATH.

---

# WHAT IS PATH?

PATH tells operating system:

```text id="jlwm1r"
Where executable programs are located
```

Without PATH:
terminal cannot find `g++`.

---

# VISUAL EXPLANATION

```text id="jlwm8k"
You type: g++
        ↓
OS searches PATH folders
        ↓
Finds g++.exe
        ↓
Runs compiler
```

---

# STEP 4 — VERIFY INSTALLATION

Open terminal:

```bash id="jlwm3v"
g++ --version
```

If successful:

```text id="jlwm5q"
g++ (MinGW...)
```

appears.

---

# MAC INSTALLATION

Mac already includes:

* Clang

Install command-line tools:

```bash id="jlwm9w"
xcode-select --install
```

Verify:

```bash id="jlwm7b"
g++ --version
```

---

# LINUX INSTALLATION

Ubuntu/Debian:

```bash id="jlwm2c"
sudo apt update
sudo apt install g++
```

Verify:

```bash id="jlwm4u"
g++ --version
```

---

# FIRST TEST PROGRAM

Create:

```text id="jlwm1h"
main.cpp
```

Write:

```cpp id="jlwm6z"
#include <iostream>
using namespace std;

int main() {
    cout << "Compiler Working!";
    return 0;
}
```

---

# COMPILE PROGRAM

```bash id="jlwm0p"
g++ main.cpp -o main
```

---

# WHAT THIS COMMAND MEANS

| Part     | Meaning         |
| -------- | --------------- |
| g++      | compiler        |
| main.cpp | source file     |
| -o       | output name     |
| main     | executable file |

---

# AFTER COMPILATION

Compiler creates executable:

Windows:

```text id="jlwm7m"
main.exe
```

Linux/Mac:

```text id="jlwm8t"
main
```

---

# RUN PROGRAM

Windows:

```bash id="jlwm3j"
main.exe
```

Linux/Mac:

```bash id="jlwm5x"
./main
```

Output:

```text id="jlwm9f"
Compiler Working!
```

---

# COMPLETE COMPILATION PIPELINE

```text id="jlwm0w"
main.cpp
    ↓
g++ compiler
    ↓
Machine Code
    ↓
Executable File
    ↓
CPU Runs Program
```

---

# WHAT HAPPENS INTERNALLY

When you run:

```bash id="jlwm6n"
g++ main.cpp -o main
```

compiler:

1. reads source code
2. checks syntax
3. converts to machine code
4. links libraries
5. creates executable

---

# COMMON INSTALLATION ERRORS

# ERROR 1

```text id="jlwm4r"
'g++' is not recognized
```

Reason:
PATH not added correctly.

---

# ERROR 2

```text id="jlwm1p"
No such file
```

Reason:
wrong folder/location.

---

# ERROR 3

```text id="jlwm8e"
Permission denied
```

Reason:
system restrictions.

---

# HOW TO CHECK CURRENT DIRECTORY

```bash id="jlwm3s"
pwd
```

or Windows:

```bash id="jlwm5v"
cd
```

---

# HOW TO SEE FILES

```bash id="jlwm2q"
ls
```

Windows CMD:

```bash id="jlwm7u"
dir
```

---

# BEGINNER WORKFLOW

Every time:

```text id="jlwm9x"
Write Code
    ↓
Save File
    ↓
Open Terminal
    ↓
Compile
    ↓
Run
    ↓
Test Output
```

This loop becomes daily habit.

---

# WHY C++ COMPILATION IS IMPORTANT

Understanding compilation helps you:

* debug errors
* optimize code
* understand system programming
* become strong in competitive programming

Elite programmers understand tools deeply.

---

# COMPILER vs CODE EDITOR

| Tool         | Purpose                      |
| ------------ | ---------------------------- |
| VS Code      | write/edit code              |
| g++ compiler | convert code into executable |

VS Code is NOT compiler.

This is very important.

---

# VISUAL ANALOGY

```text id="jlwm6b"
VS Code = Notebook
Compiler = Translator
CPU = Worker
```

---

# FEYNMAN EXPLANATION

Simple explanation:

> A C++ compiler converts C++ code into machine instructions so the computer can run the program.

---

# PRACTICE EXERCISES

# Exercise 1

Install compiler.

Verify using:

```bash id="jlwm4c"
g++ --version
```

---

# Exercise 2

Create:

```text id="jlwm1z"
main.cpp
```

---

# Exercise 3

Write Hello World program.

---

# Exercise 4

Compile manually.

---

# Exercise 5

Run executable manually.

---

# Exercise 6

Modify output message 5 times and recompile each time.

This builds workflow habit.

---

# MINI CHALLENGE

Create program that prints:

```text id="jlwm7l"
Name
Age
Favorite Subject
Dream Career
```

Compile and run WITHOUT using Run button.

Only terminal allowed.

---

# ACTIVE RECALL QUESTIONS

1. What is compiler?
2. Why do we need compiler?
3. What does `g++` do?
4. What is PATH?
5. Why PATH matters?
6. Difference between VS Code and compiler?
7. What is executable file?
8. What happens during compilation?
9. Why does `g++ not recognized` happen?
10. How do you run compiled program?

---

# DEBUGGING TASK

Find all issues:

```bash id="jlwm9j"
g++ mains.cpp -o main
```

Possible problems:

* wrong filename
* file missing
* extension issue

Find at least 5 possible causes.

---

# IMPORTANT PROGRAMMER HABITS

From now:

* compile manually often
* understand errors
* avoid blindly clicking Run
* learn terminal workflow
* read compiler messages carefully

This builds real engineering strength early.
