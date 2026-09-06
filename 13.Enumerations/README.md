# 13. Enumerations in C

This folder contains my practice programs on **Enumerations (`enum`) in C**.

## 📌 What is an Enumeration?

An enumeration is a user-defined data type in C that consists of a set of **named integer constants**.

### Syntax

```c
enum enum_name {
    constant1,
    constant2,
    constant3
};
```

Example:

```c
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
```

By default, enumeration values start from `0` and increase by `1`.

```text
SUNDAY    = 0
MONDAY    = 1
TUESDAY   = 2
WEDNESDAY = 3
THURSDAY  = 4
FRIDAY    = 5
SATURDAY  = 6
```

## 📂 Programs Covered

| File                    | Concept                          |
| ----------------------- | -------------------------------- |
| `display-enum-values.c` | Displaying enumeration values    |
| `checking-weekend.c`    | Using enum with conditions       |
| `traffic-light-enum.c`  | Traffic-light states using enum  |
| `calci-with-enum.c`     | Calculator operations using enum |
| `student-grades.c`      | Student grades using enum        |
| `enum-type-def.c`       | Using `typedef` with enum        |

## 🧠 Key Concepts Learned

* Declaring an `enum`
* Defining named integer constants
* Default enum values
* Assigning custom values to enum constants
* Using enum variables
* Comparing enum values
* Using `enum` with `if-else`
* Using `enum` with `switch`
* `typedef` with `enum`
* Practical applications of enumerations

## ⭐ Example

```c
#include <stdio.h>

enum Status {
    OFF,
    ON
};

int main()
{
    enum Status device = ON;

    if (device == ON)
        printf("Device is ON\n");
    else
        printf("Device is OFF\n");

    return 0;
}
```

### Output

```text
Device is ON
```

## 🎯 Learning Outcome

After completing these programs, I can use **enumerations to represent a fixed set of meaningful integer states**, making C programs easier to read and understand.

