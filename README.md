# Experiment: Loops, Conditions & Patterns in C++

## Aim
To implement various C++ programs using **loops**, **conditional statements**, and **patterns** to gain practical understanding of control structures and logic building.

---

## Tools Used
- Visual Studio Code (VS Code) / Programiz Online C++ Compiler.

---

## Theory

## Why C++ is More Efficient Than C

- **Object-Oriented Programming (OOP):** Enables code reuse via classes and objects.
- **STL (Standard Template Library):** Provides efficient built-in data structures.
- **Function Overloading & Default Arguments:** Adds flexibility to function definitions.
- **Better Type Checking:** Reduces runtime errors.
- **Namespaces:** Prevent name conflicts in large projects.
- **Dynamic Memory Handling:** Fine control using `new` and `delete`.

### 🔹 `for` Loop
- Used when the number of iterations is known.
- Syntax: `for(initialization; condition; increment) { }`

### 🔹 `do-while` Loop
- Executes the loop body at least once before checking the condition.

### 🔹 `if-else` Statement
- Allows conditional execution based on logical expressions.

### 🔹 `Modulus Operator %`
- Used to check divisibility, mainly in even/odd logic.

### 🔹 `String Comparison`
- `strcmp()` is used to compare character arrays.

### 🔹 Pattern Printing
- Nested loops are used to form structured star, number, or character patterns.

---

### Program 1: Print Even Numbers from 0 to 10

- Uses a for loop to iterate from 0 to 10.
- Inside the loop, if(i % 2 == 0) checks whether the number is even.
- % is the modulus operator, which gives the remainder.
- If remainder is 0, the number is even.
- cout << i << endl; prints the even number followed by a newline.
- Demonstrates: Looping , Conditional checks , Output to console

---

### Program 2: Print "SIT" 5 Times

- Executes a for loop exactly 5 times (i = 0 to i < 5).
- Prints "SIT" each time in a new line.
- Demonstrates: Fixed iteration loops , Output repetition using loops

---

### Program 3: Reverse Last 5 Digits of PRN

- Accepts a 5-digit PRN number from the user.
- Reverses the digits using:
- % 10 to extract the last digit.
- / 10 to remove the last digit.
- Uses a do-while loop to:
- Ensure the loop runs at least once.
- Continue until PRN becomes 0.
- Demonstrates: Looping with do-while , Arithmetic operations , Digit extraction logic.

---

### Program 4: Password Checker with Max 5 Trials

- Predefined correct password stored in password[].
- User gets 5 attempts to input the correct password.
- Uses strcmp() from <cstring> to compare strings:
- Returns 0 if both strings match.
- If match: program exits with "Unlocked".
- Else: asks again, up to 5 trials.
- Demonstrates: String handling , Password validation logic , Loop control with counters.
- exit(0) to stop the program once the condition is met

---

### Program 5: Multiple Star and Number Patterns

Concept Overview

Triangle patterns are visual representations created using nested loops in C++.

These patterns help in understanding:
- Loop control (nested for loops)
- Space and symbol management
- Mathematical relationships between rows and columns
- Output formatting

General Structure of a Pattern Program

Outer loop:
Controls the number of rows.

Inner loop 1 (optional):
Prints spaces to align the pattern (used in right-aligned or centered patterns).

Inner loop 2:
Prints the pattern character, such as *, numbers, or letters.

## Sample output

Program 1

0

2

4

6

8

10

Program 2

SIT

SIT

SIT

SIT

SIT


Program 3

Enter last 5 digit of your PRN: 23054

Reversed PRN: 45032

Program 4

Enter your Password	sanskriti@!488

Oh no, Wrong password, Try again

Enter your Password	Sanskriti@!480

Yay!! Unlocked!!

## Conclusion

Understood usage of for, while, and do-while loops.

Implemented conditional statements for user interaction and logic.

Worked with string manipulation using cstring.

Built complex console patterns using nested loops and conditionals.

Gained practical experience in formatting, structure, and logic-building in C++.


