# Destructors in OOP (C++) — Complete Deep Guide

Destructors are one of the most important concepts in C++ and systems programming.

They are fundamental for:

* memory management
* resource cleanup
* preventing leaks
* safe object lifecycle management

Destructors are deeply connected to:

* constructors
* pointers
* dynamic memory
* RAII
* operating systems

---

# SIMPLE DEFINITION

A destructor is:

# a special member function automatically called when an object is destroyed

---

# BIG IDEA

Constructors handle:

```text id="m4v8tb"
object creation/setup
```

Destructors handle:

```text id="x7m2wc"
object cleanup/destruction
```

---

# REAL-WORLD ANALOGY

Imagine renting hotel room.

---

# CHECK-IN

Room prepared:

* lights
* bed
* towels

Like:

# constructor

---

# CHECK-OUT

Room cleaned:

* trash removed
* electricity turned off
* resources released

Like:

# destructor

---

# WHY DESTRUCTORS EXIST

Programs often allocate:

* memory
* files
* network sockets
* GPU resources

These resources must be released properly.

Otherwise:

# leaks occur

---

# BASIC SYNTAX

```cpp id="u1x5tb"
~ClassName() {

}
```

---

# IMPORTANT FEATURES

Destructor:

* same name as class
* preceded by `~`
* no return type
* no parameters
* called automatically

---

# FIRST EXAMPLE

```cpp id="q9m3tb"
#include <iostream>
using namespace std;

class Test {

public:

    Test() {
        cout << "Constructor Called\n";
    }

    ~Test() {
        cout << "Destructor Called\n";
    }
};

int main() {

    Test t1;

    return 0;
}
```

Output:

```text id="r5v8qc"
Constructor Called
Destructor Called
```

---

# EXECUTION FLOW

```text id="t2m7wc"
Object Created
      ↓
Constructor Runs
      ↓
Object Used
      ↓
Object Destroyed
      ↓
Destructor Runs
```

---

# WHEN DESTRUCTORS ARE CALLED

Depends on object lifetime.

---

# STACK OBJECTS

```cpp id="v8x1tb"
Test t1;
```

Destructor called automatically when scope ends.

---

# EXAMPLE

```cpp id="w4m9qc"
void func() {

    Test t1;

}
```

When function ends:
`t1` destroyed automatically.

---

# VISUAL IDEA

```text id="y6x2tb"
Enter Scope
    ↓
Object Created
    ↓
Leave Scope
    ↓
Destructor Called
```

---

# HEAP OBJECTS

Created using:

```cpp id="m3v7wc"
new
```

---

# EXAMPLE

```cpp id="q8m1tb"
Test *t = new Test();
```

Destructor NOT automatic here.

Must manually:

```cpp id="u5m4qc"
delete t;
```

---

# WHY?

Heap memory persists until explicitly freed.

---

# COMPLETE EXAMPLE

```cpp id="r2x9tb"
#include <iostream>
using namespace std;

class Test {

public:

    ~Test() {
        cout << "Destroyed";
    }
};

int main() {

    Test *t = new Test();

    delete t;

    return 0;
}
```

---

# MEMORY LEAKS

Very important concept.

---

# EXAMPLE

```cpp id="y9m1wc"
Test *t = new Test();
```

without:

```cpp id="x4m7tb"
delete t;
```

causes:

# memory leak

---

# WHY MEMORY LEAKS DANGEROUS

Large systems may eventually:

* slow down
* crash
* exhaust memory

Critical systems issue.

---

# DESTRUCTORS + DYNAMIC MEMORY

Most important real-world use.

---

# EXAMPLE

```cpp id="t8v3qc"
class Array {

private:
    int *arr;

public:

    Array() {

        arr = new int[100];
    }

    ~Array() {

        delete[] arr;
    }
};
```

---

# WHY THIS IS IMPORTANT

Without destructor:
allocated memory never freed.

---

# VISUAL MEMORY FLOW

```text id="p1x6tb"
Constructor
    ↓
Allocate Memory
    ↓
Program Uses Memory
    ↓
Destructor
    ↓
Free Memory
```

---

# `delete` vs `delete[]`

Very important.

---

# SINGLE OBJECT

```cpp id="m6v2wc"
delete ptr;
```

---

# ARRAY

```cpp id="r4m8tb"
delete[] arr;
```

Wrong usage causes:

# undefined behavior

---

# DESTRUCTOR CALL ORDER

Important in inheritance.

---

# RULE

```text id="u7x1qc"
Child destructor first
Parent destructor second
```

---

# EXAMPLE

```cpp id="v3m9tb"
class Animal {

public:

    ~Animal() {
        cout << "Animal Destroyed\n";
    }
};

class Dog : public Animal {

public:

    ~Dog() {
        cout << "Dog Destroyed\n";
    }
};
```

---

# OUTPUT

```text id="x8v4wc"
Dog Destroyed
Animal Destroyed
```

---

# WHY THIS ORDER?

Derived class cleanup first,
then base cleanup.

---

# VIRTUAL DESTRUCTORS

Extremely important advanced concept.

---

# PROBLEM

```cpp id="q5m2tb"
Animal *a = new Dog();

delete a;
```

Without virtual destructor:
derived destructor may NOT execute properly.

Dangerous resource leak.

---

# SOLUTION

```cpp id="t7x4qc"
virtual ~Animal() {

}
```

---

# WHY VIRTUAL IMPORTANT?

Ensures:

# correct destructor called at runtime

---

# RULE

If class has virtual functions:
usually destructor should also be virtual.

Professional C++ rule.

---

# PURE VIRTUAL DESTRUCTOR

Possible.

---

# EXAMPLE

```cpp id="m1v8tb"
virtual ~Animal() = 0;
```

Still must provide definition.

Advanced OOP topic.

---

# RAII — VERY IMPORTANT CONCEPT

RAII:

# Resource Acquisition Is Initialization

Core philosophy of modern C++.

---

# IDEA

Object constructor acquires resources.

Destructor releases resources automatically.

---

# BENEFITS

Prevents:

* leaks
* forgotten cleanup
* unsafe resource handling

Huge systems advantage.

---

# SMART POINTERS

Modern C++ avoids raw memory management using:

* `unique_ptr`
* `shared_ptr`

These automatically call destructors.

---

# EXAMPLE

```cpp id="r6m3wc"
unique_ptr<Test> ptr(new Test());
```

Automatic cleanup.

---

# WHY MODERN C++ PREFERS THIS

Safer memory management.

---

# EXPLICIT DESTRUCTOR CALL

Possible but rarely used.

---

# EXAMPLE

```cpp id="u2x9tb"
obj.~Test();
```

Dangerous generally.

Avoid unless advanced usage.

---

# DEFAULT DESTRUCTOR

If no destructor written:
compiler generates one automatically.

---

# BUT IMPORTANT

Compiler-generated destructor only performs:

```text id="x5m1qc"
basic cleanup
```

It does NOT free custom dynamic memory automatically.

---

# SHALLOW COPY PROBLEM

Critical connection to destructors.

---

# EXAMPLE

```cpp id="y8m4wc"
class Test {

    int *ptr;
};
```

Default copying duplicates pointer address only.

Multiple objects may try:

```text id="q1v7tb"
delete same memory
```

Dangerous.

---

# RULE OF THREE

If class uses:

* destructor

usually also needs:

* copy constructor
* copy assignment operator

---

# RULE OF FIVE

Modern C++ extension:
adds move semantics.

Advanced topic.

---

# COMMON BEGINNER ERRORS

# 1. Forgetting `delete`

Memory leaks.

---

# 2. Double Delete

Deleting same memory twice.

---

# 3. Missing Virtual Destructor

Huge inheritance bug.

---

# 4. Dangling Pointers

Pointer references freed memory.

---

# 5. Using Deleted Memory

Undefined behavior.

---

# WHY DESTRUCTORS ARE CRITICAL

Destructors guarantee:

# proper cleanup of system resources

Without them:
large software systems become unstable.

---

# REAL SOFTWARE EXAMPLES

Destructor may release:

* GPU tensors
* database connections
* file handles
* sockets
* locks
* thread pools

Very important in AI systems.

---

# FEYNMAN EXPLANATION

Simple explanation:

> A destructor is a special function automatically called when an object is destroyed to clean up resources safely.

---

# BEGINNER PRACTICE EXERCISES

# Exercise 1

Create class with constructor/destructor messages.

---

# Exercise 2

Allocate memory dynamically and free in destructor.

---

# Exercise 3

Observe destructor order in inheritance.

---

# Exercise 4

Create virtual destructor example.

---

# Exercise 5

Experiment with stack vs heap objects.

---

# MINI CHALLENGE

Build simple StudentDatabase class:

* dynamically allocate student records
* clean memory in destructor

---

# ACTIVE RECALL QUESTIONS

1. What is destructor?
2. Why destructors exist?
3. Difference between constructor and destructor?
4. When destructors automatically called?
5. Why heap objects require delete?
6. What is memory leak?
7. Why virtual destructors important?
8. What is RAII?
9. What is Rule of Three?
10. Why destructors critical in systems programming?

---

# ELITE ENGINEERING INSIGHT

Destructors represent one of the deepest ideas in modern systems programming:

# deterministic resource management

Modern large-scale systems depend critically on:

* predictable cleanup
* safe memory ownership
* automatic lifecycle management

C++ destructors, especially combined with RAII, provide one of the most powerful models ever designed for:

```text id="u4m2qc"
resource-safe high-performance computing
```
