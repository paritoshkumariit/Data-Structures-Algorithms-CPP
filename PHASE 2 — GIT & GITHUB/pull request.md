# Pull Requests (PRs) — Complete Beginner Guide

Pull Requests are one of the most important concepts in modern software engineering.

Almost every professional team uses Pull Requests on:

* GitHub
* GitLab
* Bitbucket

Pull Requests are how developers:

* propose changes
* review code
* collaborate safely
* maintain code quality

---

# SIMPLE DEFINITION

A Pull Request (PR) is:

# a request to merge your branch into another branch

Usually:

```text id="m4v8tb"
feature branch → main branch
```

---

# REAL-WORLD ANALOGY

Imagine:
you write chapter for school project.

Instead of directly modifying final report:
you submit your chapter to team leader for review.

That review request is like:

# Pull Request

---

# WHY PULL REQUESTS EXIST

Without PRs:
developers could directly push broken code into main branch.

Dangerous.

PRs create:

* review system
* safety layer
* collaboration workflow

---

# VISUAL IDEA

```text id="x7m2wc"
Feature Branch
      ↓
Pull Request
      ↓
Code Review
      ↓
Merge Into Main
```

---

# WHAT A PULL REQUEST CONTAINS

PR usually includes:

* code changes
* commit history
* discussion/comments
* review feedback
* merge option

---

# WHY IT IS CALLED “PULL REQUEST”

You are requesting:

```text id="u1x5tb"
"Please pull my changes into your branch."
```

Usually:

```text id="q9m3tb"
feature branch → main branch
```

---

# COMPLETE PR WORKFLOW

# STEP 1 — Create Branch

```bash id="r5v8qc"
git checkout -b login-feature
```

---

# STEP 2 — Write Code

Add login functionality.

---

# STEP 3 — Commit Changes

```bash id="t2m7wc"
git add .
git commit -m "Added login system"
```

---

# STEP 4 — Push Branch

```bash id="v8x1tb"
git push origin login-feature
```

---

# STEP 5 — Open GitHub

GitHub detects new branch.

Shows:

```text id="w4m9qc"
Compare & Pull Request
```

---

# STEP 6 — Create Pull Request

Add:

* title
* description
* screenshots (optional)

---

# STEP 7 — Code Review

Teammates review:

* logic
* style
* bugs
* security

---

# STEP 8 — Merge PR

After approval:
merge into main branch.

---

# VISUAL DEVELOPMENT FLOW

```text id="y6x2tb"
main
   ↓
Create Feature Branch
   ↓
Develop Feature
   ↓
Push Branch
   ↓
Open Pull Request
   ↓
Code Review
   ↓
Merge Into Main
```

---

# WHY PULL REQUESTS ARE IMPORTANT

PRs improve:

* code quality
* collaboration
* maintainability
* learning
* team communication

---

# CODE REVIEW — MOST IMPORTANT PART

PRs are mainly about:

# reviewing code before merging

---

# WHAT REVIEWERS CHECK

Reviewers examine:

* correctness
* readability
* bugs
* clean code
* performance
* security

---

# EXAMPLE REVIEW COMMENT

```text id="m3v7wc"
"Please rename this variable for clarity."
```

OR

```text id="q8m1tb"
"This loop can be optimized."
```

---

# WHY CODE REVIEWS MATTER

Even experienced developers make mistakes.

Reviews catch:

* bugs
* bad logic
* poor design
* security issues

---

# PRs IN REAL COMPANIES

At companies like:

* Google
* Microsoft
* Amazon

almost all production code goes through review systems.

---

# PRs + TEAM COMMUNICATION

PRs create discussion around:

* architecture
* implementation
* design choices

This improves engineering quality.

---

# GOOD PULL REQUEST TITLE

Bad:

```text id="u5m4qc"
update
fix
stuff
```

Good:

```text id="r2x9tb"
Added JWT authentication system
Fixed navbar responsiveness
Improved binary search performance
```

---

# GOOD PR DESCRIPTION

Explain:

* what changed
* why changed
* how tested

Example:

```text id="y9m1wc"
Added login validation.
Tested with valid and invalid credentials.
```

---

# SMALL PRs ARE BETTER

Bad:

```text id="x4m7tb"
5000-line PR
```

Hard to review.

Better:

```text id="t8v3qc"
small focused changes
```

Easy to review and safer.

---

# WHAT HAPPENS AFTER REVIEW?

Possible outcomes:

```text id="p1x6tb"
1. Approved
2. Changes requested
3. Rejected
```

---

# AFTER APPROVAL

Maintainer clicks:

# Merge Pull Request

Changes become part of main branch.

---

# PR + BRANCHES

PR workflow depends heavily on branches.

Usually:

```text id="m6v2wc"
main = stable
feature branches = active development
```

PR safely integrates feature branches.

---

# PR + OPEN SOURCE

Open-source contribution workflow:

```text id="r4m8tb"
Fork Repository
      ↓
Create Branch
      ↓
Make Changes
      ↓
Open Pull Request
```

Maintainers review contribution.

---

# WHY BEGINNERS SHOULD LEARN PRs EARLY

PRs teach:

* teamwork
* professional workflow
* communication
* clean commits
* code quality

---

# COMMON BEGINNER MISTAKES

# 1. Huge PRs

Hard to review.

---

# 2. Poor Descriptions

Reviewers don’t understand purpose.

---

# 3. Mixing Multiple Features

One PR should solve one problem.

---

# 4. Ignoring Review Feedback

Bad engineering habit.

---

# 5. Pushing Broken Code

Always test before PR.

---

# PR REVIEW ETIQUETTE

Professional developers:

* stay respectful
* explain reasoning
* accept feedback calmly

PR discussions are collaborative, not personal.

---

# WHAT IS DRAFT PR?

Work-in-progress PR.

Used when:

* feature incomplete
* feedback needed early

---

# WHAT IS APPROVAL?

Reviewer says:

```text id="u7x1qc"
"This code is good to merge."
```

---

# WHAT IS CI/CD CHECK?

Many PRs automatically run:

* tests
* build checks
* linting

before merge.

Very common in modern engineering.

---

# FEYNMAN EXPLANATION

Simple explanation:

> A Pull Request is a request to merge your code changes into another branch after review.

---

# VISUAL SUMMARY

```text id="v3m9tb"
Write Feature
      ↓
Push Branch
      ↓
Open Pull Request
      ↓
Review & Discussion
      ↓
Merge Into Main
```

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Create GitHub repository.

---

# Exercise 2

Create feature branch.

---

# Exercise 3

Modify code and push branch.

---

# Exercise 4

Open Pull Request on GitHub.

---

# Exercise 5

Review your own PR carefully.

---

# Exercise 6

Merge PR into main branch.

---

# MINI CHALLENGE

Project:

```text id="x8v4wc"
Calculator
```

Feature branches:

* addition
* subtraction

For each:

1. create branch
2. commit changes
3. push branch
4. create PR
5. merge PR

---

# ACTIVE RECALL QUESTIONS

1. What is Pull Request?
2. Why PRs exist?
3. What happens in code review?
4. Why PRs improve software quality?
5. Why small PRs are better?
6. What makes good PR title?
7. How PRs help teamwork?
8. Why companies rely on PRs?
9. What is draft PR?
10. Why feature branches and PRs work together?

---

# ELITE ENGINEERING INSIGHT

Modern software engineering is not just:

```text id="q1v7tb"
writing code
```

It is:

```text id="u4m2qc"
reviewing, discussing, validating, and safely integrating code
```

Pull Requests are the center of that entire collaborative workflow.
