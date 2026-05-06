# 50 Terminal Exercises — Beginner to Strong Foundations

These exercises will make you comfortable with:

* terminal navigation
* file systems
* developer workflow
* Git basics
* command-line confidence

This is one of the fastest ways to become technically stronger.

---

# WHY TERMINAL PRACTICE MATTERS

Professional developers use terminals daily for:

* coding
* Git
* servers
* AI systems
* cloud infrastructure
* Linux development

Strong terminal skills dramatically improve engineering efficiency.

---

# IMPORTANT RULES

# 1. Type Commands Yourself

Do NOT copy blindly.

---

# 2. Read Error Messages

Errors are part of learning.

---

# 3. Practice Daily

15–30 minutes/day is enough initially.

---

# 4. Understand What Commands Do

Never memorize mechanically.

---

# SECTION 1 — NAVIGATION BASICS (1–10)

---

# Exercise 1

Open terminal.

Run:

```bash id="m4v8tb"
pwd
```

Understand:
current directory.

---

# Exercise 2

List files:

```bash id="x7m2wc"
ls
```

Windows CMD:

```bash id="u1x5tb"
dir
```

---

# Exercise 3

Create folder:

```bash id="q9m3tb"
mkdir practice
```

---

# Exercise 4

Move into folder:

```bash id="r5v8qc"
cd practice
```

---

# Exercise 5

Go back one folder:

```bash id="t2m7wc"
cd ..
```

---

# Exercise 6

Create nested folders:

```bash id="v8x1tb"
mkdir projects
cd projects
mkdir cpp
```

---

# Exercise 7

Navigate into nested folder.

---

# Exercise 8

Return to home directory.

Linux/Mac:

```bash id="w4m9qc"
cd ~
```

---

# Exercise 9

Clear terminal screen.

Linux/Mac:

```bash id="y6x2tb"
clear
```

Windows CMD:

```bash id="m3v7wc"
cls
```

---

# Exercise 10

Use arrow keys to access previous commands.

Very useful habit.

---

# SECTION 2 — FILE OPERATIONS (11–20)

---

# Exercise 11

Create file.

Linux/Mac:

```bash id="q8m1tb"
touch main.cpp
```

Windows CMD:

```bash id="u5m4qc"
type nul > main.cpp
```

---

# Exercise 12

Create multiple files.

---

# Exercise 13

List files again.

---

# Exercise 14

Delete file.

Linux/Mac:

```bash id="r2x9tb"
rm main.cpp
```

Windows:

```bash id="y9m1wc"
del main.cpp
```

---

# Exercise 15

Create folder named:

```text id="x4m7tb"
CPP_Practice
```

---

# Exercise 16

Delete empty folder.

Linux/Mac:

```bash id="t8v3qc"
rmdir CPP_Practice
```

---

# Exercise 17

Create folder with files inside.

---

# Exercise 18

Delete non-empty folder.

Linux/Mac:

```bash id="p1x6tb"
rm -r folder_name
```

Windows:

```bash id="m6v2wc"
rmdir /s folder_name
```

---

# Exercise 19

Rename file.

Linux/Mac:

```bash id="r4m8tb"
mv old.txt new.txt
```

Windows:

```bash id="u7x1qc"
rename old.txt new.txt
```

---

# Exercise 20

Copy file.

Linux/Mac:

```bash id="v3m9tb"
cp source.txt copy.txt
```

Windows:

```bash id="x8v4wc"
copy source.txt copy.txt
```

---

# SECTION 3 — VS CODE + TERMINAL (21–25)

---

# Exercise 21

Open current folder in:
Visual Studio Code

```bash id="q5m2tb"
code .
```

---

# Exercise 22

Create C++ file from terminal.

---

# Exercise 23

Open integrated terminal in VS Code.

Shortcut:

```text id="t7x4qc"
Ctrl + `
```

---

# Exercise 24

Create project structure:

```text id="m1v8tb"
DSA/
 ├── Arrays/
 ├── Graphs/
 └── Trees/
```

using terminal only.

---

# Exercise 25

Navigate entire structure using terminal.

---

# SECTION 4 — COMPILATION EXERCISES (26–30)

---

# Exercise 26

Create:

```text id="r6m3wc"
main.cpp
```

Write Hello World program.

---

# Exercise 27

Compile:

```bash id="u2x9tb"
g++ main.cpp -o main
```

---

# Exercise 28

Run executable.

Windows:

```bash id="x5m1qc"
main.exe
```

Linux/Mac:

```bash id="y8m4wc"
./main
```

---

# Exercise 29

Modify code and recompile.

---

# Exercise 30

Intentionally create syntax error.
Read compiler error carefully.

---

# SECTION 5 — GIT BASICS (31–40)

---

# Exercise 31

Create repository:

```bash id="q1v7tb"
git init
```

---

# Exercise 32

Check repository status:

```bash id="u4m2qc"
git status
```

---

# Exercise 33

Create file and check status again.

Observe:

```text id="v9x5tb"
untracked files
```

---

# Exercise 34

Add file:

```bash id="m2v8qc"
git add .
```

---

# Exercise 35

Commit changes:

```bash id="r7m1wc"
git commit -m "first commit"
```

---

# Exercise 36

View commit history:

```bash id="t4x6tb"
git log --oneline
```

---

# Exercise 37

Modify file and create second commit.

---

# Exercise 38

Create branch:

```bash id="y1m9qc"
git checkout -b feature
```

---

# Exercise 39

Switch back to main branch.

---

# Exercise 40

Merge branch into main.

---

# SECTION 6 — ADVANCED TERMINAL COMFORT (41–50)

---

# Exercise 41

Use tab autocomplete.

Very important productivity skill.

---

# Exercise 42

Run multiple commands:

Linux/Mac:

```bash id="u6x3tb"
mkdir test && cd test
```

---

# Exercise 43

Create deeply nested structure quickly.

---

# Exercise 44

Use command history efficiently.

---

# Exercise 45

Find hidden files.

Linux/Mac:

```bash id="p8m5wc"
ls -a
```

Observe:

```text id="x3v7tb"
.git
```

---

# Exercise 46

Delete repository and recreate safely.

---

# Exercise 47

Create 5 Git commits in sequence.

---

# Exercise 48

Simulate collaboration:

* create branch
* modify files
* merge

---

# Exercise 49

Create project entirely from terminal:

* folder
* files
* Git repo
* commits

---

# Exercise 50

Do complete workflow without notes:

```text id="q6m1wc"
Create project
Create file
Compile code
Initialize Git
Commit changes
Create branch
Merge branch
```

---

# MINI PROJECTS

# Project 1 — DSA Workspace

Create structure:

```text id="r9x4tb"
DSA/
 ├── Arrays/
 ├── Graphs/
 ├── Trees/
 ├── DP/
 └── README.md
```

---

# Project 2 — CPP Practice Repo

Initialize Git.
Create commits for:

* loops
* conditions
* arrays

---

# Project 3 — Mini Collaboration Simulation

Create:

* main branch
* feature branch

Modify both.
Merge carefully.

---

# DAILY PRACTICE ROUTINE

Recommended:

| Activity             | Time   |
| -------------------- | ------ |
| Navigation practice  | 10 min |
| Git workflow         | 10 min |
| Compile/run programs | 10 min |

---

# COMMON BEGINNER TERMINAL FEARS

Beginners often fear:

```text id="t2m8qc"
black screen + commands
```

But terminal is simply:

# text-based interface to operating system

---

# MOST IMPORTANT TERMINAL SKILLS

Focus on:

* navigation
* file management
* Git workflow
* command confidence

These compound massively over time.

---

# FEYNMAN EXPLANATION

Simple explanation:

> Terminal exercises train you to control your computer efficiently using commands instead of graphical interfaces.

---

# ACTIVE RECALL QUESTIONS

1. What does `pwd` do?
2. What does `cd` do?
3. Difference between `rm` and `rmdir`?
4. Why terminals matter?
5. What does `git status` show?
6. What does `git init` do?
7. Why compile programs manually sometimes?
8. Why command history matters?
9. What is tab autocomplete?
10. Why professional developers love terminals?

---

# ELITE ENGINEERING INSIGHT

Strong terminal skills create:

```text id="v5x1tb"
engineering fluency
```

because you stop fighting tools and start controlling systems efficiently.

That becomes extremely important later in:

* Linux
* cloud computing
* AI infrastructure
* backend engineering
* research systems
* distributed computing.
