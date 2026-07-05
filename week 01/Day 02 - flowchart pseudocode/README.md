# Lecture 02: Introduction to Flowcharts and Pseudocode

## Overview

Before writing code in any programming language, a programmer must first understand the logic required to solve a problem. Flowcharts and Pseudocode are tools that help developers visualize and plan solutions before implementation.

They act as a bridge between a problem statement and actual code.

---

# 1. Why Do We Need Flowcharts and Pseudocode?

Many beginners jump directly into coding without understanding the logic.

This often leads to:

* Confusion
* Bugs
* Difficulty solving problems

A better approach is:

```text
Problem
   ↓
Logic Building
   ↓
Flowchart / Pseudocode
   ↓
Code
   ↓
Testing & Debugging
```

Flowcharts and pseudocode help us think like programmers before writing code.

---

# 2. What is a Flowchart?

A Flowchart is a graphical representation of an algorithm using standard symbols.

It visually shows:

* Input
* Processing
* Decision making
* Output

A flowchart helps us understand the flow of execution step by step.

---

# 3. Common Flowchart Symbols

## Start / End Symbol

Shape: Oval

Purpose:

* Indicates the beginning or end of a program.

Example:

```text
START
  ↓
END
```

---

## Input / Output Symbol

Shape: Parallelogram

Purpose:

* Accept input from the user.
* Display output to the user.

Examples:

```text
Input Number
Display Result
```

---

## Process Symbol

Shape: Rectangle

Purpose:

* Perform calculations.
* Execute statements.

Examples:

```text
sum = a + b
average = sum / 2
```

---

## Decision Symbol

Shape: Diamond

Purpose:

* Check conditions.
* Create branches in logic.

Examples:

```text
Is number even?
Is it raining?
Is age >= 18?
```

Decision outputs are usually:

```text
YES / NO
TRUE / FALSE
```

---

## Flow Lines

Arrows are used to connect symbols.

They indicate:

```text
Direction of program execution
```

---

# 4. Programming Workflow

Every program follows a general process.

## Step 1: Understand the Problem

Ask:

* What is the input?
* What is the output?
* What calculations are needed?

---

## Step 2: Design the Logic

Use:

* Flowchart
* Pseudocode

to plan the solution.

---

## Step 3: Write the Code

Translate the logic into a programming language.

Examples:

* C++
* Java
* Python

---

## Step 4: Test the Program

Verify whether:

* Correct inputs produce correct outputs.
* Edge cases are handled.

---

## Step 5: Debug

If errors occur:

* Identify the issue.
* Fix the logic or code.

Debugging is an essential skill for every programmer.

---

# 5. What is Pseudocode?

Pseudocode is a simple English-like description of program logic.

It is not actual code.

Example:

```text
START

Input A
Input B

Sum = A + B

Display Sum

END
```

### Advantages

* Easy to read.
* Easy to understand.
* Independent of programming language.
* Helps focus on logic.

---

# 6. Basic Mathematical Problems

## Sum of Two Numbers

### Problem

Find the sum of two numbers.

### Pseudocode

```text
START

Input A
Input B

Sum = A + B

Display Sum

END
```

### Formula

Sum=A+B

---

## Average of Two Numbers

### Logic

1. Input two numbers.
2. Add them.
3. Divide by 2.

### Formula

Average=\frac{A+B}{2}

### Pseudocode

```text
START

Input A
Input B

Average = (A + B)/2

Display Average

END
```

---

## Square of a Number

### Formula

Square=n^2

### Pseudocode

```text
Input N

Square = N × N

Display Square
```

---

## Cube of a Number

### Formula

Cube=n^3

### Pseudocode

```text
Input N

Cube = N × N × N

Display Cube
```

---

# 7. Conditional Logic

Programs often need to make decisions.

Decision-making is performed using conditions.

---

## Example: Is It Raining?

### Logic

```text
If raining
    Take umbrella
Else
    Go normally
```

This is the basic idea behind if-else statements.

---

## Example: Even or Odd Number

### Important Concept

The Modulo Operator (%)

It returns the remainder after division.

Examples:

```text
8 % 2 = 0
7 % 2 = 1
```

### Logic

If remainder is 0:

```text
Even Number
```

Otherwise:

```text
Odd Number
```

### Pseudocode

```text
Input N

If N % 2 == 0
    Print Even
Else
    Print Odd
```

---

## Example: Positive or Negative Number

### Logic

```text
Input N

If N >= 0
    Positive
Else
    Negative
```

---

# 8. Introduction to Loops

Loops allow us to repeat tasks multiple times.

Without loops:

```text
Print Hello
Print Hello
Print Hello
Print Hello
Print Hello
```

This is inefficient.

Loops solve this problem.

---

## What is a Loop?

A loop repeatedly executes a set of instructions until a condition becomes false.

General structure:

```text
Initialize

Condition

Repeat Work

Update
```

---

# 9. Printing a Number 10 Times

### Logic

```text
Counter = 1

While Counter <= 10

    Print Number

    Counter = Counter + 1
```

The counter controls repetition.

---

# 10. Print First N Natural Numbers

Natural Numbers:

```text
1 2 3 4 5 ...
```

### Pseudocode

```text
Input N

For i = 1 to N

    Print i
```

---

# 11. Sum of First N Natural Numbers

### Problem

Find:

```text
1 + 2 + 3 + ... + N
```

### Loop-Based Solution

```text
Sum = 0

For i = 1 to N

    Sum = Sum + i
```

### Complexity

```text
O(N)
```

---

### Optimized Solution

S=\frac{n(n+1)}{2}

### Complexity

```text
O(1)
```

This demonstrates the importance of choosing better algorithms.

---

# 12. Prime Number Logic

## Definition

A Prime Number is a number that has exactly two factors:

```text
1 and itself
```

Examples:

```text
2, 3, 5, 7, 11, 13
```

---

## Non-Prime Numbers

Examples:

```text
4 = 1, 2, 4
6 = 1, 2, 3, 6
```

These numbers have more than two factors.

---

## Prime Number Algorithm

### Logic

1. Input N.
2. Check divisibility from 2 to N−1.
3. If any number divides N completely:

   * Not Prime
4. Otherwise:

   * Prime

### Pseudocode

```text
Input N

For i = 2 to N-1

    If N % i == 0

        Print Not Prime
        Stop

Print Prime
```

### Learning

This example combines:

* Input
* Conditions
* Loops
* Decision Making

making it an excellent beginner problem.

---

# Important Programming Concepts Learned

## Input

Receiving data from the user.

Example:

```text
Enter a number
```

---

## Output

Displaying results.

Example:

```text
The number is even
```

---

## Variables

Used to store data.

Examples:

```text
Age
Marks
Salary
Sum
```

---

## Conditions

Used to make decisions.

Examples:

```text
if
else
```

---

## Loops

Used to repeat tasks.

Examples:

```text
for
while
do-while
```

---

## Algorithms

A sequence of steps used to solve a problem.

---

# Key Takeaways

1. Programming begins with logic building.
2. Flowcharts visually represent program execution.
3. Pseudocode helps describe logic in simple language.
4. Every problem should be analyzed before coding.
5. Decision-making is implemented using conditions.
6. Repetitive tasks are handled using loops.
7. Prime number problems combine multiple programming concepts.
8. Better algorithms lead to better performance.
9. Debugging is a normal part of programming.
10. Strong logic-building skills make learning coding easier.

---

# Final Conclusion

Flowcharts and Pseudocode are powerful learning tools for beginners. They help transform a problem into a structured solution before any code is written. By mastering logic, conditions, loops, and problem-solving techniques through these methods, a student develops the foundation required for programming, Data Structures, Algorithms, and software development.
