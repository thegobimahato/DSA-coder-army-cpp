# Lecture 03: Start C++ from Zero and Write Your First Program

## Overview

This lecture introduces C++ programming from the ground up. Before learning algorithms and data structures, it is essential to understand how computers store data, how C++ programs are structured, and how different types of information are represented in memory.

The lecture bridges the gap between computer architecture and practical programming by explaining variables, data types, memory allocation, and binary storage.

---

# 1. How Computers Store Data

Everything inside a computer is stored using binary digits.

Computers understand only:

```text
0 and 1
```

These binary values are represented physically using transistors.

## Transistor States

```text
ON  → 1
OFF → 0
```

Since billions of transistors exist inside modern processors, computers can represent enormous amounts of information.

---

# 2. Representation of Numbers in Computers

Humans use:

```text
Decimal System (Base 10)
```

Computers use:

```text
Binary System (Base 2)
```

Examples:

| Decimal | Binary |
| ------- | ------ |
| 0       | 0000   |
| 1       | 0001   |
| 2       | 0010   |
| 3       | 0011   |
| 4       | 0100   |
| 5       | 0101   |

Every number entered into a computer is eventually converted into binary form.

---

# 3. How Characters Are Stored

Computers cannot directly understand letters.

For example:

```text
A
B
C
D
```

must be converted into numbers before storage.

This is achieved using the ASCII table.

---

# 4. ASCII Table

ASCII stands for:

```text
American Standard Code for Information Interchange
```

Each character is assigned a unique numerical value.

Examples:

| Character | ASCII Value |
| --------- | ----------- |
| A         | 65          |
| B         | 66          |
| C         | 67          |
| a         | 97          |
| b         | 98          |
| 0         | 48          |
| 1         | 49          |

---

## Example

Character:

```text
A
```

ASCII value:

```text
65
```

Binary representation:

```text
01000001
```

Therefore, even characters are stored as binary data.

---

# 5. What is C++?

C++ is a high-level programming language.

It allows programmers to write instructions in a human-readable form.

Example:

```cpp
cout << "Hello World";
```

instead of writing machine code:

```text
101010101100010101
```

which would be nearly impossible for humans to manage.

---

# 6. Structure of a C++ Program

A C++ program follows a standard structure.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    return 0;
}
```

---

# 7. Header Files

```cpp
#include <iostream>
```

### Purpose

Provides access to input and output functionality.

Without this header:

```cpp
cout
cin
```

cannot be used.

---

## Think of Header Files as Libraries

When writing programs, we don't build everything from scratch.

Instead, we use existing libraries.

Example:

```text
iostream
vector
string
cmath
```

---

# 8. Namespace

```cpp
using namespace std;
```

### Purpose

Allows us to write:

```cpp
cout
cin
```

instead of:

```cpp
std::cout
std::cin
```

making code cleaner.

---

# 9. Main Function

```cpp
int main()
{
}
```

Every C++ program begins execution from:

```cpp
main()
```

The operating system searches for this function first.

Without it:

```text
Program cannot run
```

---

# 10. Output Using cout

### Syntax

```cpp
cout << "Hello World";
```

### Output

```text
Hello World
```

---

## Multiple Outputs

```cpp
cout << "Hello";
cout << "World";
```

Output:

```text
HelloWorld
```

---

## New Line

```cpp
cout << "Hello" << endl;
cout << "World";
```

Output:

```text
Hello
World
```

---

# 11. What Are Variables?

Variables are containers used to store data.

Example:

```cpp
int age = 21;
```

Here:

```text
Variable Name → age
Value         → 21
```

Think of a variable as a labeled box in memory.

---

# 12. Why Do We Need Variables?

Without variables:

```text
Data cannot be stored
Data cannot be modified
Data cannot be processed
```

Programming becomes impossible.

---

# 13. Data Types

Different types of data require different amounts of memory.

Examples:

```text
Age
Salary
Character
Decimal Values
True/False
```

Therefore C++ provides multiple data types.

---

# 14. Integer Data Type

## int

Stores whole numbers.

Examples:

```cpp
int age = 21;
int marks = 95;
```

---

### Typical Size

```text
4 Bytes
```

or

```text
32 Bits
```

---

# 15. Character Data Type

## char

Stores a single character.

Examples:

```cpp
char grade = 'A';
char gender = 'M';
```

---

### Size

```text
1 Byte
```

or

```text
8 Bits
```

---

# 16. Float Data Type

## float

Stores decimal numbers.

Example:

```cpp
float pi = 3.14;
```

---

### Size

```text
4 Bytes
```

---

### Precision

Approximately:

```text
6-7 decimal digits
```

---

# 17. Double Data Type

## double

Stores larger decimal values with greater precision.

Example:

```cpp
double pi = 3.14159265359;
```

---

### Size

```text
8 Bytes
```

---

### Precision

Approximately:

```text
15-16 decimal digits
```

---

# 18. Boolean Data Type

## bool

Stores only two values:

```text
true
false
```

Examples:

```cpp
bool isLoggedIn = true;
bool isPrime = false;
```

---

### Size

Usually:

```text
1 Byte
```

---

# 19. Memory and Bytes

Computers allocate memory in bytes.

Relationship:

```text
1 Byte = 8 Bits
```

Examples:

| Data Type | Typical Size |
| --------- | ------------ |
| char      | 1 Byte       |
| bool      | 1 Byte       |
| int       | 4 Bytes      |
| float     | 4 Bytes      |
| double    | 8 Bytes      |

---

# 20. Why Different Data Types Exist

Imagine storing:

```text
Age = 21
```

Using:

```cpp
double age;
```

would waste memory.

Different data types help optimize memory usage.

---

# 21. Positive Number Storage

Computers store numbers using binary.

Example:

```text
5
```

Binary:

```text
00000101
```

---

# 22. The Problem with Negative Numbers

Positive numbers are easy to store.

But how should:

```text
-5
```

be stored?

Computers solve this using complements.

---

# 23. One's Complement

### Rule

Invert every bit.

Example:

```text
5

00000101
```

One's Complement:

```text
11111010
```

---

## Problem

Two zeros are created:

```text
+0
-0
```

which causes complications.

---

# 24. Two's Complement

Modern computers use Two's Complement.

### Steps

Step 1:

Take One's Complement

```text
00000101

↓

11111010
```

Step 2:

Add 1

```text
11111010
+       1
---------
11111011
```

Result:

```text
-5
```

---

# 25. Why Two's Complement Is Used

Advantages:

* Only one representation of zero
* Simplifies arithmetic operations
* Faster hardware implementation
* Standard in modern computers

Almost every computer today stores negative integers using Two's Complement.

---

# Important Concepts Learned

## Binary

Language of computers.

```text
0 and 1
```

---

## ASCII

Converts characters into numbers.

Example:

```text
A → 65
```

---

## Variables

Store information.

Example:

```cpp
int age = 21;
```

---

## Data Types

Define:

* Type of data
* Memory usage
* Valid operations

---

## Memory

Measured using:

```text
Bits
Bytes
KB
MB
GB
TB
```

---

## Two's Complement

Standard method for storing negative integers.

---

# Common Interview Facts

### 1 Byte

```text
8 Bits
```

---

### ASCII of A

```text
65
```

---

### ASCII of a

```text
97
```

---

### Size of int

```text
4 Bytes
```

---

### Size of double

```text
8 Bytes
```

---

### Language Execution Starts From

```cpp
main()
```

---

# Key Takeaways

1. Computers store everything using binary.
2. Characters are stored using ASCII codes.
3. C++ is a high-level language that simplifies programming.
4. Every C++ program starts from `main()`.
5. Variables are memory containers.
6. Data types determine storage size and behavior.
7. Different data types exist to optimize memory.
8. Negative numbers are stored using Two's Complement.
9. Understanding memory is crucial for efficient programming.
10. C++ provides the foundation needed for DSA and software development.

---

# Final Conclusion

This lecture establishes the foundation of C++ programming by connecting computer hardware concepts with actual code. Understanding variables, memory, data types, ASCII encoding, and binary representation is essential before moving toward input/output operations, operators, conditions, loops, and ultimately Data Structures and Algorithms.
