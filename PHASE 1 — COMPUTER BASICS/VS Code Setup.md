# VS Code Setup — Complete Beginner Guide

Visual Studio Code (VS Code) is one of the best code editors for:

* C++
* Python
* Web development
* AI engineering
* Competitive programming

Professional developers use it daily.

Today you will learn:

* installation
* extensions
* compiler setup
* running C++ programs
* terminal usage
* debugging basics

---

# WHAT IS VS CODE?

VS Code is a:

# Code Editor

It helps you:

* write code
* organize projects
* debug programs
* run terminal commands
* use Git

---

# REAL-WORLD ANALOGY

Think of VS Code like:

* a smart digital workshop for programmers

Inside it:

* editor = notebook
* terminal = control center
* extensions = superpowers

---

# STEP 1 — INSTALL VS CODE

Download:

* Visual Studio Code

During installation:
✅ Add to PATH
✅ Add “Open with Code”
✅ Register code editor

These options make life easier later.

---

# STEP 2 — INSTALL C++ COMPILER

VS Code itself does NOT compile C++.

You need a compiler.

For Windows:
Install:

* MinGW-w64

Compiler used:

```text id="jlwm3p"
g++
```

---

# VERIFY COMPILER INSTALLATION

Open terminal:

```bash id="jlwm5r"
g++ --version
```

If installed correctly:

```text id="jlwm6u"
g++ (MinGW...)
```

appears.

---

# STEP 3 — OPEN VS CODE

When VS Code opens, you see:

```text id="jlwm9m"
Explorer
Search
Source Control
Run
Extensions
```

Left sidebar = activity bar.

---

# IMPORTANT PANELS

# 1. Explorer

Shows project files.

---

# 2. Editor

Where you write code.

---

# 3. Terminal

Runs commands.

---

# 4. Extensions

Adds extra features.

---

# STEP 4 — INSTALL ESSENTIAL EXTENSIONS

Open Extensions tab.

Install:

# MUST HAVE

## C/C++

By Microsoft.

Features:

* syntax highlighting
* autocomplete
* debugging

---

## Code Runner

Quickly runs code.

---

## Error Lens

Shows errors clearly.

---

## GitLens (later)

Advanced Git support.

---

# STEP 5 — CREATE YOUR FIRST PROJECT

Create folder:

```text id="jlwm2k"
CPP_Basics
```

Open folder in VS Code.

Menu:

```text id="jlwm0q"
File → Open Folder
```

---

# PROJECT STRUCTURE

```text id="jlwm1v"
CPP_Basics/
 └── main.cpp
```

---

# STEP 6 — CREATE FIRST FILE

Create:

```text id="jlwm8d"
main.cpp
```

---

# WRITE FIRST PROGRAM

```cpp id="jlwm7t"
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

---

# STEP 7 — OPEN TERMINAL INSIDE VS CODE

Shortcut:

```text id="jlwm4n"
Ctrl + `
```

(backtick key)

OR:

```text id="jlwm5z"
Terminal → New Terminal
```

---

# TERMINAL INSIDE VS CODE

Now terminal appears below editor.

Example:

```text id="jlwm8r"
PS C:\CPP_Basics>
```

You can:

* compile
* run programs
* use Git

directly inside VS Code.

---

# STEP 8 — COMPILE PROGRAM

Command:

```bash id="jlwm9c"
g++ main.cpp -o main
```

Meaning:

| Part     | Meaning     |
| -------- | ----------- |
| g++      | compiler    |
| main.cpp | source file |
| -o       | output name |
| main     | executable  |

---

# STEP 9 — RUN PROGRAM

Windows:

```bash id="jlwm0s"
main.exe
```

Linux/Mac:

```bash id="jlwm1x"
./main
```

Output:

```text id="jlwm3y"
Hello World
```

---

# COMPLETE WORKFLOW

```text id="jlwm7q"
Write Code
    ↓
Open Terminal
    ↓
Compile Program
    ↓
Run Executable
    ↓
See Output
```

This workflow is extremely important.

---

# HOW VS CODE HELPS YOU

VS Code provides:

* syntax coloring
* autocomplete
* error detection
* debugging
* Git integration

---

# SYNTAX HIGHLIGHTING

Keywords become colored:

```cpp id="jlwm2m"
int
return
cout
```

This improves readability.

---

# AUTOCOMPLETE

Type:

```cpp id="jlwm4k"
cou
```

VS Code suggests:

```cpp id="jlwm6w"
cout
```

Huge productivity boost.

---

# ERROR DETECTION

Wrong code:

```cpp id="jlwm9h"
cout << "Hello"
```

VS Code highlights error immediately.

This helps debugging.

---

# STEP 10 — DEBUGGING BASICS

Debugging means:

# finding mistakes

---

# TYPES OF ERRORS

# 1. Syntax Error

Example:

```cpp id="jlwm0j"
cout << "Hello"
```

Missing semicolon.

---

# 2. Runtime Error

Example:

```cpp id="jlwm2f"
5 / 0
```

Program crashes.

---

# 3. Logical Error

Program runs but wrong output.

---

# DEBUGGING MINDSET

Professional programmers:

* read errors carefully
* test step-by-step
* isolate problems

Debugging is a core skill.

---

# VS CODE + GIT

VS Code integrates beautifully with:

* Git
* GitHub

You can:

* commit code
* push repositories
* manage branches

directly inside editor.

---

# VS CODE + COMPETITIVE PROGRAMMING

Why CP programmers love VS Code:

* fast editing
* terminal integration
* snippets
* debugging
* extensions

---

# USEFUL SHORTCUTS

| Shortcut      | Action            |
| ------------- | ----------------- |
| Ctrl + S      | save              |
| Ctrl + C      | copy              |
| Ctrl + V      | paste             |
| Ctrl + /      | comment line      |
| Ctrl + `      | open terminal     |
| Ctrl + P      | quick file search |
| Alt + Up/Down | move line         |

---

# FILE STRUCTURE DISCIPLINE

Good programmers organize folders carefully.

Example:

```text id="jlwm6p"
DSA/
 ├── Arrays/
 ├── Strings/
 ├── Graphs/
 └── Notes/
```

Build this habit early.

---

# WHY THIS MATTERS

VS Code becomes your:

* coding workspace
* debugging environment
* Git interface
* project manager

You will use it for years.

---

# FEYNMAN EXPLANATION

Simple explanation:

> VS Code is a smart editor that helps programmers write, run, debug, and manage code efficiently.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Install:

* VS Code
* C++ compiler

---

# Exercise 2

Create:

```text id="jlwm4a"
HelloWorld
```

project.

---

# Exercise 3

Write first program.

---

# Exercise 4

Compile manually using terminal.

---

# Exercise 5

Modify output text.

---

# Exercise 6

Create 3 files:

* `day1.cpp`
* `practice.cpp`
* `test.cpp`

---

# MINI PROJECT

Create folder structure:

```text id="jlwm8x"
Programming/
 ├── Cpp/
 │    ├── Basics/
 │    └── DSA/
 ├── Git/
 └── Notes/
```

inside VS Code.

---

# ACTIVE RECALL QUESTIONS

1. What is VS Code?
2. Why do we need compiler separately?
3. What does `g++` do?
4. What is terminal used for?
5. Difference between source code and executable?
6. What is debugging?
7. What is syntax highlighting?
8. Why extensions matter?
9. Why programmers prefer VS Code?
10. What happens when you click Run?

---

# DEBUGGING TASK

Find all errors:

```cpp id="jlwm1d"
#include <iostream>
using namespace std

int main() {
    Cout << "Hello World"
    return 0
}
```

Identify:

* syntax errors
* capitalization mistakes
* missing symbols

---

# PROFESSIONAL HABITS START TODAY

Always:

* create proper folders
* name files clearly
* save frequently
* compile manually sometimes
* read errors carefully
* keep terminal open
* use Git from beginning

These habits separate serious programmers from casual learners.
