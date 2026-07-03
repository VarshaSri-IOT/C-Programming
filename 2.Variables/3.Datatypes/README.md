# 03 - Data Types in C

## 📖 Overview

A **data type** defines the type of data a variable can store, the amount of memory allocated, and the range of values it can represent.

Understanding data types is fundamental to writing efficient C programs, especially in **Embedded Systems**, where memory usage and hardware interaction are critical.

---

## 🎯 Objectives

After completing this module, you will be able to:

- Understand different C data types.
- Determine memory occupied by each data type.
- Know the range of integer and floating-point data types.
- Understand ASCII representation.
- Demonstrate integer overflow and underflow.
- Perform explicit type casting.
- Differentiate between signed and unsigned integers.
- Use fixed-width integer types (`stdint.h`).
- Display the binary representation of numbers.
- Understand Little Endian and Big Endian memory organization.

---

## 📂 Programs Included

| No. | Program | Concepts Covered |
|----:|---------|------------------|
| 1 | sizeof-datatypes.c | sizeof(), memory occupied by data types |
| 2 | integer-range.c | Integer limits using `<limits.h>` |
| 3 | floating-range.c | Floating-point limits using `<float.h>` |
| 4 | ascii-table.c | ASCII values and character representation |
| 5 | overflow-underflow.c | Integer overflow and underflow |
| 6 | type-casting-calculator.c | Explicit type casting, integer vs floating-point division |
| 7 | signed-vs-unsigned.c | Signed and unsigned integer comparison |
| 8 | stdint-demo.c | Fixed-width integer types (`stdint.h`) |
| 9 | binary-representation.c | Binary representation using bitwise operators |
| 10 | endianness-detection.c | Detect Little Endian / Big Endian systems |

---

## 📚 Concepts Covered

- Data Types
- Memory Allocation
- sizeof() Operator
- Integer Range
- Floating Point Range
- ASCII Character Set
- Integer Overflow
- Integer Underflow
- Type Casting
- Signed & Unsigned Integers
- stdint.h
- Binary Representation
- Endianness

---


## 💻 Requirements

- C Compiler (GCC / Clang / MSVC)
- VS Code (Recommended)
- Git & GitHub

---

## 🚀 How to Compile

Example:

```bash
gcc sizeof-datatypes.c -o sizeof
./sizeof
```

Or, for Windows:

```bash
gcc sizeof-datatypes.c -o sizeof.exe
sizeof.exe
```

---

## 🎯 Learning Outcome

After completing this module, you will have a strong understanding of how C stores data in memory, how different data types behave, and why choosing the correct data type is essential in Embedded Systems programming.