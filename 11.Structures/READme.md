C Structures

This folder contains C programs that demonstrate the use of structures in C programming.

📌 About Structures

A structure is a user-defined data type in C that allows us to group variables of different data types under a single name. Structures are useful for storing and managing related information such as student details, employee records, and other real-world entities.

📚 Programs Included

- student-details.c — Demonstrates storing and displaying student details using a structure.
- employee-details.c — Demonstrates storing and displaying employee information using a structure.
- array-of-structures.c — Demonstrates storing multiple records using an array of structures.
- array-structure-using-pointer.c — Demonstrates accessing an array of structures using pointers.
- nested-structure.c — Demonstrates the use of a structure inside another structure.
- search-student.c — Searches for a particular student from a collection of student records.
- structure-pointer.c — Demonstrates pointers to structures and the arrow ("->") operator.
- structure-with-function.c — Demonstrates passing structures to functions.
- highest-array.c — Demonstrates finding the highest value from stored data.

🔑 Concepts Covered

- Structure declaration and initialization
- Structure members
- Accessing structure members
- Array of structures
- Structure pointers
- Arrow ("->") operator
- Nested structures
- Passing structures to functions
- Searching structure records
- Performing operations on structure data

💡 Basic Syntax

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

A structure member can be accessed using the dot (".") operator:

student.rollNo;

When using a pointer to a structure, the arrow ("->") operator is used:

ptr->rollNo;

🎯 Learning Outcome

After completing these programs, you will be able to:

- Understand the purpose of structures in C.
- Create and initialize structure variables.
- Store multiple records using arrays of structures.
- Use pointers with structures.
- Work with nested structures.
- Pass structures to functions.
- Search and process data stored in structures.