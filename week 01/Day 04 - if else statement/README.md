# Lecture 04: If-Else Statements and Loops in C++

## Overview

Until now, our programs could only execute instructions sequentially. In this lecture, we learn how to:

* Take input from users.
* Make decisions using conditions.
* Repeat tasks using loops.
* Build logical problem-solving skills.

These concepts form the backbone of programming and are heavily used in Data Structures and Algorithms.

---

# 1. Input and Output in C++

Programming becomes useful when users can interact with programs.

## Output using cout

```cpp
cout << "Hello World";
```

Displays data on the screen.

### Example

```cpp
cout << "My Name is Gobi";
```

Output:

```text
My Name is Gobi
```

---

## Input using cin

```cpp
int age;
cin >> age;
```

Allows users to enter data.

### Example

```cpp
int age;

cout << "Enter Age: ";
cin >> age;

cout << age;
```

Input:

```text
21
```

Output:

```text
21
```

---

# 2. Data Types and Memory

Different data types consume different amounts of memory.

| Data Type | Purpose               | Size    |
| --------- | --------------------- | ------- |
| int       | Whole Numbers         | 4 Bytes |
| char      | Single Character      | 1 Byte  |
| float     | Decimal Numbers       | 4 Bytes |
| double    | Large Decimal Numbers | 8 Bytes |
| bool      | True/False            | 1 Byte  |

---

# 3. Type Casting

Type casting means converting one data type into another.

Example:

```cpp
int a = 10;
float b = 3.5;

cout << a + b;
```

Output:

```text
13.5
```

The integer is automatically converted into a float.

---

## Data Loss

Sometimes conversion causes information loss.

Example:

```cpp
float x = 10.9;
int y = x;
```

Result:

```text
y = 10
```

The decimal part is lost.

### Important Rule

Converting:

```text
Large Data Type → Small Data Type
```

may cause data loss.

---

# 4. Conditional Statements

Programs often need to make decisions.

Examples:

* Should a student pass?
* Is a number even?
* Is a user eligible?
* Is it raining?

Conditional statements solve such problems.

---

# 5. If Statement

### Syntax

```cpp
if(condition)
{
    // code
}
```

### Example

```cpp
int age = 20;

if(age >= 18)
{
    cout << "Adult";
}
```

Output:

```text
Adult
```

---

# 6. If-Else Statement

Used when there are two possible outcomes.

### Syntax

```cpp
if(condition)
{
    // true block
}
else
{
    // false block
}
```

---

## Example: Voting Eligibility

```cpp
int age;

cin >> age;

if(age >= 18)
{
    cout << "Can Vote";
}
else
{
    cout << "Cannot Vote";
}
```

---

# 7. Even or Odd Number

A number is even if divisible by 2.

### Modulo Operator

```cpp
%
```

Returns the remainder.

Examples:

```text
8 % 2 = 0
7 % 2 = 1
```

---

### Program

```cpp
int n;

cin >> n;

if(n % 2 == 0)
{
    cout << "Even";
}
else
{
    cout << "Odd";
}
```

---

# 8. Positive, Negative, or Zero

Sometimes two conditions are not enough.

We need multiple possibilities.

---

### Program

```cpp
if(n > 0)
{
    cout << "Positive";
}
else if(n < 0)
{
    cout << "Negative";
}
else
{
    cout << "Zero";
}
```

---

# 9. Else-If Ladder

Used when there are multiple conditions.

### Syntax

```cpp
if(condition1)
{
}
else if(condition2)
{
}
else if(condition3)
{
}
else
{
}
```

Conditions are checked from top to bottom.

The first true condition executes.

---

# 10. Grading System Example

```cpp
if(marks >= 90)
{
    cout << "A";
}
else if(marks >= 80)
{
    cout << "B";
}
else if(marks >= 70)
{
    cout << "C";
}
else
{
    cout << "Fail";
}
```

---

# 11. Vowel Checking

Vowels:

```text
A E I O U
a e i o u
```

---

### Program Logic

```cpp
if(ch == 'a' || ch == 'e' ||
   ch == 'i' || ch == 'o' ||
   ch == 'u')
{
    cout << "Vowel";
}
else
{
    cout << "Consonant";
}
```

---

# 12. Logical Operators

Used to combine conditions.

---

## AND Operator

```cpp
&&
```

Both conditions must be true.

Example:

```cpp
if(age >= 18 && citizen == true)
```

---

## OR Operator

```cpp
||
```

At least one condition must be true.

Example:

```cpp
if(day == "Sat" || day == "Sun")
```

---

## NOT Operator

```cpp
!
```

Reverses the result.

Example:

```cpp
if(!isLoggedIn)
```

---

# 13. Why Loops Are Needed

Suppose we want to print:

```text
Hello
```

10 times.

Without loops:

```cpp
cout<<"Hello";
cout<<"Hello";
cout<<"Hello";
...
```

This is repetitive and inefficient.

Loops solve this problem.

---

# 14. What is a Loop?

A loop repeatedly executes a block of code until a condition becomes false.

General structure:

```text
Initialize
    ↓
Check Condition
    ↓
Execute Code
    ↓
Update
    ↓
Repeat
```

---

# 15. For Loop

Most commonly used loop.

### Syntax

```cpp
for(initialization;
    condition;
    update)
{
    // code
}
```

---

# 16. Understanding For Loop

Example:

```cpp
for(int i = 1; i <= 5; i++)
{
    cout << i;
}
```

---

### Breakdown

Initialization:

```cpp
int i = 1;
```

Runs once.

---

Condition:

```cpp
i <= 5
```

Checks before every iteration.

---

Update:

```cpp
i++
```

Increases value after each iteration.

---

# 17. Dry Run

```cpp
for(int i = 1; i <= 5; i++)
```

| Iteration | i | Output |
| --------- | - | ------ |
| 1         | 1 | 1      |
| 2         | 2 | 2      |
| 3         | 3 | 3      |
| 4         | 4 | 4      |
| 5         | 5 | 5      |

Output:

```text
12345
```

---

# 18. Printing Numbers

### 1 to 10

```cpp
for(int i = 1; i <= 10; i++)
{
    cout << i << " ";
}
```

Output:

```text
1 2 3 4 5 6 7 8 9 10
```

---

# 19. Printing Squares

### Program

```cpp
for(int i = 1; i <= 10; i++)
{
    cout << i * i << " ";
}
```

Output:

```text
1 4 9 16 25 36 49 64 81 100
```

---

# 20. Printing Even Numbers

### Logic

Even numbers satisfy:

```cpp
number % 2 == 0
```

---

### Program

```cpp
for(int i = 1; i <= 20; i++)
{
    if(i % 2 == 0)
    {
        cout << i << " ";
    }
}
```

Output:

```text
2 4 6 8 10 12 14 16 18 20
```

---

# 21. Pattern Recognition

The instructor repeatedly emphasizes finding patterns.

Examples:

```text
1 2 3 4 5
```

```text
1 4 9 16 25
```

```text
2 4 6 8 10
```

Programming often means identifying patterns and translating them into code.

---

# 22. Nested Logic

Conditions can exist inside loops.

Example:

```cpp
for(int i = 1; i <= 10; i++)
{
    if(i % 2 == 0)
    {
        cout << i;
    }
}
```

This combines:

* Looping
* Decision Making

Two essential programming concepts.

---

# Common Beginner Mistakes

## Missing Semicolon

```cpp
cout << "Hello"
```

Wrong.

```cpp
cout << "Hello";
```

Correct.

---

## Assignment vs Comparison

Wrong:

```cpp
if(a = 5)
```

Correct:

```cpp
if(a == 5)
```

---

## Infinite Loops

Wrong:

```cpp
for(int i = 1; i <= 5;)
```

No update step.

The loop never ends.

---

# Important Concepts Learned

## Input

```cpp
cin
```

Accepts data from users.

---

## Output

```cpp
cout
```

Displays information.

---

## Conditions

```cpp
if
else
else if
```

Used for decision-making.

---

## Logical Operators

```cpp
&&
||
!
```

Combine multiple conditions.

---

## Loops

```cpp
for
```

Used for repetition.

---

## Modulo Operator

```cpp
%
```

Used for divisibility checks.

---

# Key Takeaways

1. Programs become interactive using `cin` and `cout`.
2. Type casting can lead to data loss.
3. `if` statements allow decision-making.
4. `else` handles alternative outcomes.
5. `else-if` handles multiple possibilities.
6. `%` operator is useful for divisibility problems.
7. Loops eliminate repetitive code.
8. A `for` loop consists of initialization, condition, and update.
9. Many programming problems involve combining loops and conditions.
10. Strong understanding of control flow is essential for DSA.

---

# Final Conclusion

This lecture introduces the two most important programming concepts: **decision making** and **repetition**. Using `if-else` statements, programs can choose between different actions. Using loops, programs can efficiently repeat tasks without writing redundant code. Together, these concepts form the foundation of problem-solving and will be used in every future DSA topic.
