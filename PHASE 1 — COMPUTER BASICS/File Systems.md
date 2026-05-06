# File Systems — Complete Beginner Explanation

A file system is how a computer organizes and stores files and folders.

Without a file system:

* computer would not know where files are
* programs could not save data
* operating system would become chaos

---

# SIMPLE DEFINITION

A file system is a structure used by the operating system to:

* store files
* organize folders
* manage data locations

---

# REAL-WORLD ANALOGY

Imagine a huge library.

Inside library:

* books are organized into shelves
* shelves are organized into sections
* sections are organized into floors

Computer works similarly.

---

# COMPUTER STORAGE ORGANIZATION

```text id="8g5k31"
Disk
 └── Folders
      └── Subfolders
            └── Files
```

---

# WHAT IS A FILE?

A file stores information.

Examples:

* `main.cpp`
* `photo.png`
* `music.mp3`
* `notes.txt`

Files contain:

* text
* images
* videos
* programs
* data

---

# WHAT IS A FOLDER?

A folder (directory) stores:

* files
* other folders

Folders help organize data.

Example:

```text id="fr9iyc"
Projects/
 ├── C++
 ├── Python
 └── Notes
```

---

# VISUAL EXAMPLE

Suppose your computer contains:

```text id="jlcztc"
Computer
 └── Users
      └── Paritosh
            ├── Documents
            ├── Downloads
            ├── Pictures
            └── Projects
```

This entire structure is the:

# File System

---

# HOW FILES ARE STORED INTERNALLY

Internally:
Hard disk stores everything as:

* binary data
* blocks of memory

File system manages:

* where data is stored
* how files are named
* how files are retrieved

---

# WHAT OPERATING SYSTEM DOES

Operating system:

* tracks file locations
* controls permissions
* manages reading/writing

Without OS:
finding files manually would be impossible.

---

# FILE PATHS

Every file has an address called:

# Path

Example:

```text id="34ezkn"
/Users/Paritosh/Projects/main.cpp
```

This path tells exact location.

---

# BREAKDOWN OF PATH

```text id="gkwm4r"
/Users/Paritosh/Projects/main.cpp
```

| Part     | Meaning   |
| -------- | --------- |
| /        | root      |
| Users    | folder    |
| Paritosh | subfolder |
| Projects | subfolder |
| main.cpp | file      |

---

# ROOT DIRECTORY

Top-most folder in system.

Linux/Mac:

```text id="0ykmyy"
/
```

Windows:

```text id="o6a3o2"
C:\
```

Everything starts from root.

---

# DIRECTORY vs FOLDER

They mean almost same thing.

* Folder = user-friendly word
* Directory = technical word

Programmers often say:

# directory

---

# TYPES OF FILES

# Text Files

Examples:

* `.txt`
* `.cpp`
* `.py`

Contain readable text.

---

# Binary Files

Examples:

* `.exe`
* `.jpg`
* `.mp4`

Not human-readable directly.

---

# FILE EXTENSIONS

Extensions tell file type.

Examples:

| Extension | Meaning    |
| --------- | ---------- |
| .cpp      | C++ file   |
| .txt      | text file  |
| .png      | image      |
| .exe      | executable |
| .pdf      | document   |

---

# HOW PROGRAMS ACCESS FILES

Suppose:

```cpp id="sct1l0"
ifstream file("notes.txt");
```

Program asks OS:

```text id="y5r3jv"
Find notes.txt
Open it
Read data
```

OS uses file system to locate file.

---

# ABSOLUTE PATH

Full path from root.

Example:

```text id="4owkpr"
/Users/Paritosh/Projects/main.cpp
```

Always points exact location.

---

# RELATIVE PATH

Path relative to current folder.

Example:

```text id="36h9fe"
Projects/main.cpp
```

Shorter and flexible.

---

# VISUAL EXAMPLE

Suppose current directory:

```text id="uw7a95"
/Users/Paritosh
```

Then:

```text id="tqzydh"
Projects/main.cpp
```

means:

```text id="1b65mb"
/Users/Paritosh/Projects/main.cpp
```

---

# HIERARCHICAL STRUCTURE

File systems are tree-like.

Visual structure:

```text id="dudjlwm"
Root
 ├── Users
 │    ├── Paritosh
 │    └── Alex
 ├── Program Files
 └── Windows
```

This is called:

# Hierarchical structure

---

# HOW DELETION WORKS

When file deleted:

* OS marks space as available
* data may still exist temporarily

That is why deleted files can sometimes be recovered.

---

# FILE PERMISSIONS

OS controls:

* who can read
* who can write
* who can execute

Important for:

* security
* multi-user systems
* servers

---

# COMMON FILE SYSTEMS

# Windows

Uses:

* NTFS
* FAT32

---

# Linux

Uses:

* ext4

---

# Mac

Uses:

* APFS

---

# WHY DIFFERENT FILE SYSTEMS EXIST

Different systems optimize for:

* speed
* security
* recovery
* storage size

---

# FILE SYSTEM + PROGRAMMING

Programmers constantly interact with files:

* source code
* executables
* databases
* logs
* configs

Understanding file systems makes debugging easier.

---

# FILE SYSTEM + GIT

Git tracks changes in files.

Example:

```text id="6jlwm1"
main.cpp changed
notes.txt deleted
```

Git watches file system changes.

---

# FILE SYSTEM + COMPILERS

Compiler:

* reads source file
* creates executable file

Example:

```text id="jlwm3x"
main.cpp
   ↓
Compiler
   ↓
main.exe
```

All stored inside file system.

---

# MEMORY vs STORAGE

# RAM (Memory)

* temporary
* fast
* erased after shutdown

---

# Disk Storage

* permanent
* slower
* files saved here

File systems manage disk storage.

---

# FEYNMAN EXPLANATION

Simple explanation:

> A file system is how a computer organizes and manages files and folders on storage devices.

---

# VISUAL SUMMARY

```text id="jlwm92"
Storage Device
      ↓
File System Organizes Data
      ↓
Folders & Files Created
      ↓
Operating System Accesses Them
      ↓
Programs Read/Write Files
```

---

# WHY THIS MATTERS

Understanding file systems helps you:

* navigate terminal confidently
* manage projects
* debug path errors
* use Git correctly
* understand operating systems

Elite programmers understand data organization deeply.

---

# ACTIVE RECALL QUESTIONS

1. What is a file system?
2. Difference between file and folder?
3. What is a path?
4. What is root directory?
5. Difference between absolute and relative path?
6. Why file extensions matter?
7. What does operating system do with files?
8. Difference between RAM and storage?
9. Why hierarchical structure is useful?
10. Why do programmers need file system knowledge?

---

# MINI EXERCISE

Suppose file path is:

```text id="jlwm0b"
/Users/Paritosh/Projects/DSA/main.cpp
```

Identify:

* root
* folders
* filename
* extension

---

# DEBUGGING TASK

Suppose program says:

```text id="jlwm1k"
File not found
```

Possible reasons:

* wrong filename
* wrong path
* file deleted
* permission issue

Find at least 5 more possible reasons.

---

# PRACTICAL TERMINAL EXERCISE

Create this structure using terminal only:

```text id="jlwmz1"
Programming/
 ├── Cpp/
 │    ├── Basics/
 │    └── DSA/
 ├── Git/
 └── Notes/
```

Commands to use:

* `mkdir`
* `cd`
* `ls`

No mouse allowed.
