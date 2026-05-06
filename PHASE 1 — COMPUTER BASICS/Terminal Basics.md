# Terminal Basics — Complete Beginner Guide

The terminal is one of the most important tools for programmers.

Professional developers use it every day for:

* coding
* compiling
* Git
* servers
* automation
* AI systems
* competitive programming

If you master terminal usage early, you become much faster than most beginners.

---

# WHAT IS A TERMINAL?

A terminal is a text-based interface used to communicate directly with the computer.

Instead of clicking buttons:

* you type commands
* computer executes them

---

# REAL-WORLD ANALOGY

Imagine:

* GUI (Graphical User Interface) = driving automatic car
* Terminal = driving manual race car

Terminal gives:

* more control
* more speed
* more power

---

# WHAT HAPPENS INTERNALLY

When you type:

```bash id="4jsvji"
mkdir test
```

Terminal tells operating system:

```text id="cphvjp"
Create folder named test
```

Operating system performs action.

---

# TERMINAL vs SHELL

People often mix these.

# Terminal

Window/interface where you type.

Examples:

* Windows Terminal
* CMD
* PowerShell
* Mac Terminal

---

# Shell

Program that understands commands.

Examples:

* Bash
* Zsh
* PowerShell

---

# VISUAL FLOW

```text id="dxv3am"
You Type Command
        ↓
Shell Interprets Command
        ↓
Operating System Executes
        ↓
Result Displayed
```

---

# WHY PROGRAMMERS USE TERMINAL

Because it is:

* fast
* scriptable
* powerful
* universal

Many professional tools only work through terminal.

---

# OPENING TERMINAL

# Windows

Options:

* CMD
* PowerShell
* Windows Terminal

Recommended:

* Windows Terminal

---

# Linux/Mac

Use:

* Terminal app

---

# YOUR FIRST COMMAND

```bash id="ex1b7n"
pwd
```

Meaning:

# Print Working Directory

Shows current folder.

Example:

```text id="mjlwmn"
/home/paritosh/projects
```

---

# UNDERSTANDING FILE SYSTEMS

Computer stores files in folders/directories.

Structure looks like:

```text id="q4cnsy"
Computer
 └── Users
      └── Paritosh
            └── Projects
                  └── C++
```

This is called:

# File System

---

# COMMAND — LIST FILES

```bash id="jlwm0a"
ls
```

Shows files/folders inside current directory.

Example:

```text id="p49jfh"
main.cpp
notes.txt
project/
```

---

# WINDOWS EQUIVALENT

CMD uses:

```bash id="l7bg55"
dir
```

---

# COMMAND — CHANGE DIRECTORY

```bash id="g8yqfj"
cd foldername
```

Example:

```bash id="j2pcd8"
cd projects
```

Moves into `projects` folder.

---

# VISUAL EXAMPLE

Before:

```text id="m0cx2k"
/Users/Paritosh
```

After:

```bash id="6j93xq"
cd projects
```

Now:

```text id="iq4owm"
/Users/Paritosh/projects
```

---

# GO BACK ONE FOLDER

```bash id="m3z2f9"
cd ..
```

Meaning:
move upward.

---

# CREATE NEW FOLDER

```bash id="vjlwm8"
mkdir test
```

Creates:

```text id="m8ozkt"
test/
```

---

# CREATE FILE

Linux/Mac:

```bash id="rmpivk"
touch main.cpp
```

Windows CMD:

```bash id="a53n4s"
type nul > main.cpp
```

---

# DELETE FILE

```bash id="h0v6yb"
rm main.cpp
```

Windows:

```bash id="c6cm5r"
del main.cpp
```

---

# DELETE FOLDER

```bash id="48w5cu"
rmdir test
```

---

# CLEAR TERMINAL

```bash id="f2b7pt"
clear
```

Windows:

```bash id="dwnvy5"
cls
```

---

# COMPILE C++ PROGRAM

Suppose file:

```text id="2xtxrz"
main.cpp
```

Compile:

```bash id="j30k3n"
g++ main.cpp -o main
```

Meaning:

* `g++` → compiler
* `main.cpp` → source file
* `-o main` → output executable

---

# RUN PROGRAM

Linux/Mac:

```bash id="w4i5vd"
./main
```

Windows:

```bash id="z2x3vf"
main.exe
```

---

# COMPLETE WORKFLOW

```text id="krh8lg"
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

---

# COMMAND HISTORY

Press:

```text id="l6xgc5"
↑ arrow key
```

to see previous commands.

Very useful.

---

# AUTO-COMPLETE

Press:

```text id="5jif75"
TAB
```

Terminal auto-completes names.

Huge productivity boost.

---

# ABSOLUTE vs RELATIVE PATHS

# Absolute Path

Full location:

```text id="dwwmnl"
/Users/Paritosh/projects/main.cpp
```

---

# Relative Path

Relative to current folder:

```text id="qt7fqb"
projects/main.cpp
```

---

# REAL EXAMPLE

Suppose:

Current location:

```text id="mjlwmq"
/Users/Paritosh
```

Command:

```bash id="py7bsr"
cd projects
```

This works because:
`projects` is inside current folder.

---

# COMMON TERMINAL ERRORS

# File Not Found

```bash id="tjlwmv"
cd abc
```

Error:

```text id="l6nkgz"
No such file or directory
```

Means folder doesn't exist.

---

# Permission Denied

Sometimes OS blocks actions.

Example:

```text id="r9xlzq"
Permission denied
```

---

# COMMAND NOT FOUND

```bash id="ewjlwm"
gpp main.cpp
```

Error:

```text id="ktjlwm"
command not found
```

Because correct command is:

```bash id="63xq2s"
g++
```

---

# WHY TERMINAL MATTERS FOR PROGRAMMERS

Terminal is required for:

* Git
* Docker
* Linux
* Competitive programming
* Servers
* AI engineering
* Cloud computing

Elite programmers become terminal-efficient.

---

# TERMINAL + GIT

Git mostly runs through terminal.

Example:

```bash id="uv12h3"
git status
git add .
git commit -m "first commit"
```

---

# TERMINAL + COMPETITIVE PROGRAMMING

Fast workflow:

```text id="zjlwm1"
Write code
↓
Compile
↓
Run
↓
Test
↓
Repeat
```

Terminal speeds this process massively.

---

# TERMINAL MINDSET

Terminal is like:

* commanding the operating system directly

You are no longer clicking.
You are controlling.

---

# FEYNMAN EXPLANATION

Simple explanation:

> Terminal is a place where programmers type commands to control the computer directly.

---

# MOST IMPORTANT BEGINNER COMMANDS

| Command | Purpose          |
| ------- | ---------------- |
| pwd     | current location |
| ls      | show files       |
| cd      | move folders     |
| mkdir   | create folder    |
| touch   | create file      |
| rm      | delete file      |
| clear   | clear screen     |
| g++     | compile C++      |
| ./main  | run program      |

---

# BEGINNER TERMINAL EXERCISES

# Exercise 1

Open terminal.

Run:

```bash id="3hnjlwm"
pwd
```

---

# Exercise 2

Create folder:

```bash id="g42rjt"
mkdir cpp_practice
```

---

# Exercise 3

Move into folder:

```bash id="ljlwm2"
cd cpp_practice
```

---

# Exercise 4

Create file:

```bash id="7wvd3t"
touch main.cpp
```

---

# Exercise 5

List files:

```bash id="3xjlwm"
ls
```

---

# Exercise 6

Delete file:

```bash id="jlwmu8"
rm main.cpp
```

---

# MINI PROJECT

Create this structure using terminal only:

```text id="czjlwm"
CP/
 ├── Week1/
 ├── Week2/
 └── Notes/
```

No mouse allowed.

---

# ACTIVE RECALL QUESTIONS

1. What is terminal?
2. Difference between terminal and shell?
3. What does `pwd` do?
4. What does `ls` do?
5. What does `cd` do?
6. What is a path?
7. Difference between absolute and relative path?
8. Why programmers prefer terminal?
9. How do you compile C++?
10. What does `mkdir` do?

---

# DEBUGGING TASK

Suppose:

You run:

```bash id="jlwm0z"
cd projects
```

Error:

```text id="jlwm1a"
No such file or directory
```

Possible reasons?

Find at least 3.

---

# NEXT THINGS YOU SHOULD PRACTICE DAILY

For next 7 days:

* Open terminal daily
* Navigate folders
* Create/delete files
* Compile C++ manually
* Never depend fully on GUI

This builds real engineering confidence early.
