# 📘 Functions in C

## 📌 Objective

This module focuses on understanding **Functions in C Programming**. Functions help in breaking large programs into smaller reusable blocks, improving readability, modularity, debugging, and code reuse.

---

# 📚 Topics Covered

## 1️⃣ Introduction to Functions

* Function Declaration (Prototype)
* Function Definition
* Function Call

### General Syntax

```c
return_type function_name(parameters);
```

```c
return_type function_name(parameters)
{
    // code
}
```

---

## 2️⃣ Advantages of Functions

✅ Code Reusability

✅ Modular Programming

✅ Easier Debugging

✅ Reduced Code Repetition

✅ Better Program Organization

---

# 🔹 Types of Functions

## 1. No Arguments, No Return Value

```c
void display()
{
    printf("Hello");
}
```

---

## 2. Arguments, No Return Value

```c
void add(int a,int b)
{
    printf("%d",a+b);
}
```

---

## 3. No Arguments, Return Value

```c
int getNumber()
{
    return 10;
}
```

---

## 4. Arguments and Return Value ⭐

```c
int add(int a,int b)
{
    return a+b;
}
```

This is the most commonly used type in real-world programming.

---

# 🔁 Recursion

A function calling itself is called **Recursion**.

### Syntax

```c
function()
{
    if(base_condition)
        return;

    function();
}
```

Examples:

* Factorial using Recursion
* Fibonacci using Recursion

---

# 📂 Folder Structure

```text
07.Functions
│
├── Basic-function-types
│
├── Armstrong-function.c
├── Factorial-function.c
├── Fibonacci-function.c
├── GCD-function.c
├── LCD-function.c
├── Palindrome-function.c
├── Prime-function.c
├── Reverse-function.c
│
├── Recursion-factorial-function.c
└── Recursion-fibonacci-function.c
```

---

# 📝 Programs Implemented

### Basic Programs

* Armstrong Number
* Prime Number
* Palindrome Number
* Reverse Number
* GCD of Two Numbers
* LCM of Two Numbers
* Factorial
* Fibonacci Series

### Recursion Programs

* Recursive Factorial
* Recursive Fibonacci Series

---

# 🎯 Concepts Learned

✔ Function Prototype

✔ Function Definition

✔ Function Calling

✔ Parameter Passing

✔ Return Statements

✔ Recursion

✔ Modular Programming

---

# 💡 Real World Usage of Functions

Functions are heavily used in:

* Operating Systems
* Embedded Systems
* Device Drivers
* Game Development
* Libraries and APIs
* Large Software Projects

Example:

```c
GPIO_Init();
UART_Init();
ADC_Start();
```

These are all functions used in Embedded Systems.

---

# 🚀 Key Takeaways

* Functions make programs shorter and cleaner.
* Functions improve code readability.
* Functions enable code reuse.
* Recursion is a powerful technique for solving repetitive problems.
* Functions are one of the most important concepts in C programming.

---

## ⭐ Status

✅ Completed and Uploaded to GitHub.
