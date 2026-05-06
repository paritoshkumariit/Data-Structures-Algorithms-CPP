# 50 Git Interview Questions — Beginner to Advanced

These questions are commonly asked in:

* software engineering interviews
* internship interviews
* open-source discussions
* DevOps/backend interviews

at companies like:

* Google
* Amazon
* Microsoft

---

# SECTION 1 — BASIC GIT CONCEPTS (1–10)

---

# 1. What is Git?

Expected:

* distributed version control system
* tracks code changes
* supports collaboration

---

# 2. Why was Git created?

Discuss:

* collaboration problems
* version tracking
* safe experimentation
* Linux kernel development

Mention:
Linus Torvalds

---

# 3. Difference between Git and GitHub?

| Git                    | GitHub           |
| ---------------------- | ---------------- |
| Version control system | Hosting platform |
| Local tool             | Cloud service    |

---

# 4. What is a repository?

Expected:

* project folder tracked by Git
* contains history + commits

---

# 5. What is a commit?

Expected:

* snapshot/checkpoint of project state

---

# 6. What is staging area?

Expected:

* temporary area before commit

---

# 7. What does `git init` do?

Expected:

* creates `.git` folder
* initializes repository

---

# 8. What does `git status` show?

Expected:

* repository state
* modified/untracked/staged files

---

# 9. Difference between tracked and untracked files?

---

# 10. What is `.git` folder?

Expected:

* internal Git metadata/history storage

---

# SECTION 2 — COMMITS & HISTORY (11–20)

---

# 11. Why are commits important?

Expected:

* history
* rollback
* debugging
* collaboration

---

# 12. What makes a good commit message?

Expected:

* clear
* concise
* action-oriented

Example:

```text id="m4v8tb"
Fixed login validation bug
```

---

# 13. Difference between `git add` and `git commit`?

---

# 14. How do you view commit history?

Commands:

```bash id="x7m2wc"
git log
git log --oneline
```

---

# 15. What is HEAD in Git?

Expected:

* pointer to current commit/branch

---

# 16. How do you undo last commit?

Possible answers:

* `git reset`
* `git revert`

---

# 17. Difference between `git reset` and `git revert`?

Very important interview question.

| reset            | revert                     |
| ---------------- | -------------------------- |
| rewrites history | creates new inverse commit |

---

# 18. What is soft reset vs hard reset?

---

# 19. What does `git diff` do?

Expected:

* shows changes between versions/files

---

# 20. How do you recover deleted commits?

Possible answer:

```bash id="u1x5tb"
git reflog
```

---

# SECTION 3 — BRANCHES & MERGING (21–30)

---

# 21. What is a branch?

Expected:

* independent line of development

---

# 22. Why branches are useful?

Expected:

* safe feature development
* isolation
* teamwork

---

# 23. Why avoid working directly on main branch?

---

# 24. Difference between merge and rebase?

Important question.

| Merge             | Rebase           |
| ----------------- | ---------------- |
| preserves history | rewrites history |
| branching graph   | linear history   |

---

# 25. What is merge conflict?

Expected:

* same lines modified differently

---

# 26. How do you resolve merge conflicts?

Expected:

* manual editing
* add
* commit

---

# 27. What is fast-forward merge?

---

# 28. What is rebase?

Expected:

* replay commits on newer base

---

# 29. Why rebasing shared history is dangerous?

Expected:

* rewrites commit history
* breaks collaborators’ references

---

# 30. What is interactive rebase?

Expected:

* modify/squash/reorder commits

---

# SECTION 4 — REMOTE REPOSITORIES (31–38)

---

# 31. Difference between local and remote repository?

---

# 32. What does `git clone` do?

Expected:

* downloads full repository + history

---

# 33. What does `git pull` do?

Expected:

* fetch + merge latest changes

---

# 34. Difference between pull and fetch?

| pull               | fetch          |
| ------------------ | -------------- |
| downloads + merges | downloads only |

---

# 35. What does `git push` do?

Expected:

* uploads commits to remote repository

---

# 36. What is origin in Git?

Expected:

* default remote repository name

---

# 37. What is upstream repository?

Expected:

* original source repository (especially in forks)

---

# 38. Why pull before push?

Expected:

* avoid conflicts
* synchronize latest changes

---

# SECTION 5 — GITHUB & COLLABORATION (39–45)

---

# 39. What is Pull Request?

Expected:

* request to merge code after review

---

# 40. Why code reviews are important?

Expected:

* quality
* bugs
* maintainability
* collaboration

---

# 41. Difference between fork and clone?

| Fork        | Clone      |
| ----------- | ---------- |
| GitHub copy | local copy |

---

# 42. Why forks are useful in open source?

Expected:

* no direct write access needed

---

# 43. What is GitHub Issue?

Expected:

* tracked task/bug/discussion

---

# 44. Describe open-source contribution workflow.

Expected flow:

```text id="q9m3tb"
Fork → Clone → Branch → Commit → Push → PR
```

---

# 45. What is CI/CD in PR workflow?

Expected:

* automated testing/build/deployment

---

# SECTION 6 — ADVANCED QUESTIONS (46–50)

---

# 46. What is Git stash?

Expected:

* temporary save for uncommitted changes

---

# 47. When would you use stash?

Example:

* switching branches quickly

---

# 48. What is detached HEAD state?

Expected:

* HEAD points directly to commit, not branch

---

# 49. How does Git internally identify commits?

Expected:

* SHA hash IDs

---

# 50. Explain complete professional Git workflow.

Expected flow:

```text id="r5v8qc"
Pull latest changes
       ↓
Create feature branch
       ↓
Write code
       ↓
Commit changes
       ↓
Push branch
       ↓
Open Pull Request
       ↓
Review
       ↓
Merge
```

---

# MOST IMPORTANT INTERVIEW QUESTIONS

If short on time, master these first:

```text id="t2m7wc"
1. Git vs GitHub
2. Commit
3. Branch
4. Merge vs Rebase
5. Pull Request
6. Merge conflict
7. Fork vs Clone
8. Reset vs Revert
9. Pull vs Fetch
10. Open-source workflow
```

---

# HOW INTERVIEWERS EVALUATE GIT KNOWLEDGE

They check:

* practical understanding
* collaboration awareness
* debugging ability
* workflow maturity

Not just command memorization.

---

# COMMON INTERVIEW FOLLOW-UPS

Example:

```text id="v8x1tb"
"What happens internally during merge?"
```

OR

```text id="w4m9qc"
"Why is rebasing shared history dangerous?"
```

Understand concepts deeply.

---

# GOOD INTERVIEW ANSWER STYLE

Structure:

```text id="y6x2tb"
Definition
→ Why it exists
→ Example
→ Tradeoffs
```

Very professional format.

---

# MOCK INTERVIEW EXAMPLE

Question:

```text id="m3v7wc"
"What is merge conflict?"
```

Strong answer:

> A merge conflict happens when Git cannot automatically combine changes because multiple branches modified the same lines differently. Developers manually resolve the conflict and then complete the merge.

---

# PRACTICAL INTERVIEW PREPARATION

Do not only read questions.

Actually practice:

* branches
* merges
* rebases
* PR workflow

Hands-on experience matters most.

---

# FEYNMAN EXPLANATION

Simple explanation:

> Git interview questions test whether you understand how developers safely track, manage, and collaborate on evolving codebases.

---

# MINI PRACTICE CHALLENGE

Simulate complete workflow:

```text id="q8m1tb"
Create repo
Create branch
Commit changes
Merge branch
Resolve conflict
Push to GitHub
Open PR
```

If you can do this confidently,
you already understand core Git workflows.

---

# ELITE ENGINEERING INSIGHT

Strong Git engineers think in:

```text id="u5m4qc"
repository state transitions and collaboration safety
```

rather than:

```text id="r2x9tb"
memorizing isolated commands
```

That mindset separates professional engineers from beginners.
