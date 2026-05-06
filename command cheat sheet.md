# Git & Terminal Command Cheat Sheet — Beginner to Professional

This is your foundational command reference for:

* Git
* GitHub
* terminal usage
* collaboration workflow

Practice these commands repeatedly until they become muscle memory.

---

# SECTION 1 — TERMINAL BASICS

# Current Folder

```bash id="m4v8tb"
pwd
```

Shows:

```text id="x7m2wc"
present working directory
```

---

# List Files

```bash id="u1x5tb"
ls
```

Windows CMD:

```bash id="q9m3tb"
dir
```

---

# Change Folder

```bash id="r5v8qc"
cd folder_name
```

Go back:

```bash id="t2m7wc"
cd ..
```

---

# Create Folder

```bash id="v8x1tb"
mkdir project
```

---

# Create File

Linux/Mac:

```bash id="w4m9qc"
touch main.cpp
```

Windows CMD:

```bash id="y6x2tb"
type nul > main.cpp
```

---

# Delete File

Linux/Mac:

```bash id="m3v7wc"
rm file.txt
```

Windows CMD:

```bash id="q8m1tb"
del file.txt
```

---

# Delete Folder

Linux/Mac:

```bash id="u5m4qc"
rm -r folder
```

Windows CMD:

```bash id="r2x9tb"
rmdir /s folder
```

---

# Open VS Code

```bash id="y9m1wc"
code .
```

---

# CLEAR TERMINAL

Linux/Mac:

```bash id="x4m7tb"
clear
```

Windows CMD:

```bash id="t8v3qc"
cls
```

---

# SECTION 2 — GIT INITIALIZATION

# Check Git Version

```bash id="p1x6tb"
git --version
```

---

# Initialize Repository

```bash id="m6v2wc"
git init
```

Creates:

```text id="r4m8tb"
.git
```

folder.

---

# Check Repository Status

```bash id="u7x1qc"
git status
```

Most-used Git command.

---

# SECTION 3 — STAGING & COMMITS

# Add Single File

```bash id="v3m9tb"
git add main.cpp
```

---

# Add All Files

```bash id="x8v4wc"
git add .
```

---

# Commit Changes

```bash id="q5m2tb"
git commit -m "Added login feature"
```

---

# View Commit History

```bash id="t7x4qc"
git log
```

Compact history:

```bash id="m1v8tb"
git log --oneline
```

---

# SECTION 4 — REMOTE REPOSITORIES

# Clone Repository

```bash id="r6m3wc"
git clone <repo-url>
```

---

# Add Remote Repository

```bash id="u2x9tb"
git remote add origin <repo-url>
```

---

# View Remotes

```bash id="x5m1qc"
git remote -v
```

---

# Push Changes

```bash id="y8m4wc"
git push origin main
```

---

# Pull Latest Changes

```bash id="q1v7tb"
git pull origin main
```

---

# Fetch Changes

```bash id="u4m2qc"
git fetch
```

Downloads updates without merging.

---

# SECTION 5 — BRANCHES

# View Branches

```bash id="v9x5tb"
git branch
```

---

# Create Branch

```bash id="m2v8qc"
git branch feature-login
```

---

# Switch Branch

```bash id="r7m1wc"
git checkout feature-login
```

---

# Create + Switch Branch

```bash id="t4x6tb"
git checkout -b feature-login
```

---

# Modern Alternative

```bash id="y1m9qc"
git switch feature-login
```

Create + switch:

```bash id="u6x3tb"
git switch -c feature-login
```

---

# Delete Branch

```bash id="p8m5wc"
git branch -d feature-login
```

---

# SECTION 6 — MERGING & REBASING

# Merge Branch

```bash id="x3v7tb"
git merge feature-login
```

---

# Rebase Branch

```bash id="q6m1wc"
git rebase main
```

---

# Interactive Rebase

```bash id="r9x4tb"
git rebase -i HEAD~3
```

---

# Abort Rebase

```bash id="t2m8qc"
git rebase --abort
```

---

# Continue Rebase

```bash id="v5x1tb"
git rebase --continue
```

---

# SECTION 7 — UNDOING CHANGES

# Restore File

```bash id="w9m3wc"
git restore main.cpp
```

---

# Unstage File

```bash id="y4v7tb"
git restore --staged main.cpp
```

---

# Reset Last Commit (keep changes)

```bash id="u8m2qc"
git reset --soft HEAD~1
```

---

# Reset Last Commit (remove changes)

```bash id="p3x6tb"
git reset --hard HEAD~1
```

Dangerous command.

---

# SECTION 8 — STASH

# Save Temporary Changes

```bash id="m7v4wc"
git stash
```

---

# View Stashes

```bash id="r1m8tb"
git stash list
```

---

# Restore Stash

```bash id="t6x4qc"
git stash pop
```

---

# SECTION 9 — DIFF & HISTORY

# Show Changes

```bash id="u3v7tb"
git diff
```

---

# Compare Commits

```bash id="y5m1wc"
git diff commit1 commit2
```

---

# Show Specific Commit

```bash id="x2v8tb"
git show <commit-id>
```

---

# SECTION 10 — FORKS & UPSTREAM

# Add Upstream Repository

```bash id="q7m4qc"
git remote add upstream <repo-url>
```

---

# Fetch Upstream Changes

```bash id="r8x2tb"
git fetch upstream
```

---

# Merge Upstream Main

```bash id="u1m9wc"
git merge upstream/main
```

---

# SECTION 11 — GITHUB WORKFLOW

# Typical Workflow

```text id="v4x7tb"
git pull
git checkout -b feature
git add .
git commit -m "message"
git push origin feature
```

Then:

* open Pull Request

---

# SECTION 12 — DEBUGGING COMMANDS

# Check Status

```bash id="p9m2qc"
git status
```

Always use this.

---

# View Branch Graph

```bash id="m5x8tb"
git log --oneline --graph --all
```

Very useful visualization.

---

# Check Remote URLs

```bash id="r2m6wc"
git remote -v
```

---

# SECTION 13 — CPP COMPILATION COMMANDS

# Compile C++

```bash id="t7x1tb"
g++ main.cpp -o main
```

---

# Run Program

Windows:

```bash id="u4m9qc"
main.exe
```

Linux/Mac:

```bash id="x6v3tb"
./main
```

---

# SECTION 14 — IMPORTANT SHORTCUTS

# VS Code Terminal

```text id="q3m7wc"
Ctrl + `
```

---

# Save File

```text id="y8x1tb"
Ctrl + S
```

---

# Copy

```text id="m1v5qc"
Ctrl + C
```

---

# Paste

```text id="r4m8tb"
Ctrl + V
```

---

# Stop Running Program

```text id="u7x2wc"
Ctrl + C
```

inside terminal.

---

# SECTION 15 — PROFESSIONAL COMMAND FLOW

# Daily Workflow

```text id="v2m9tb"
Pull Latest Changes
        ↓
Create Branch
        ↓
Write Code
        ↓
Commit Changes
        ↓
Push Branch
        ↓
Open Pull Request
```

---

# MOST IMPORTANT COMMANDS TO MEMORIZE

Top beginner commands:

```bash id="x5m1wc"
git status
git add .
git commit -m "message"
git push
git pull
git checkout -b branch-name
git merge
git log --oneline
```

---

# BEGINNER PRACTICE ROUTINE

Practice daily:

```bash id="q8v4tb"
mkdir practice
cd practice
git init
touch main.cpp
git add .
git commit -m "first commit"
```

Repeat until comfortable.

---

# COMMON BEGINNER MISTAKES

# 1. Forgetting `git status`

Always check status.

---

# 2. Working Directly on Main

Use branches.

---

# 3. Forgetting Pull Before Push

May create conflicts.

---

# 4. Using `git reset --hard` Carelessly

Can destroy work.

---

# FEYNMAN EXPLANATION

Simple explanation:

> Git commands help developers track, manage, synchronize, and collaborate on software projects safely.

---

# ACTIVE RECALL QUESTIONS

1. What does `git init` do?
2. What does `git status` show?
3. Difference between `push` and `pull`?
4. What does `git add` do?
5. Why commits matter?
6. What does `git checkout -b` do?
7. What is merge?
8. What is rebase?
9. What is stash?
10. Why `git status` is important?

---

# ELITE ENGINEERING INSIGHT

Professional developers eventually stop thinking:

```text id="u9x3tb"
about commands individually
```

and start thinking in:

```text id="w6m2qc"
development workflows and repository state transitions
```

That mental shift is what transforms beginners into engineers.
