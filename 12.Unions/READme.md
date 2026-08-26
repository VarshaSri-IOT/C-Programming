C Unions

This folder contains C programs that demonstrate the use of unions in C programming.

📌 About Unions

A union is a user-defined data type in C that allows different members to share the same memory location. Unlike structures, all members of a union use the same memory space.

Unions are useful when only one of several possible data types needs to be stored at a time, helping to save memory.

📚 Programs Included

- declaration-of-union.c — Demonstrates the declaration and basic use of a union.
- memory-understanding.c — Demonstrates how memory is shared among union members.
- pass-union-to-function.c — Demonstrates passing a union to a function.
- pointer-to-union.c — Demonstrates using pointers with unions.
- storing-datatypes.c — Demonstrates storing different data types using a union.
- structure-size-of-union.c — Demonstrates finding the size of a union and understanding its memory allocation.
- union-accessing-datatypes.c — Demonstrates accessing different data types stored in a union.
- union-with-type-def.c — Demonstrates using "typedef" with a union.

🔑 Concepts Covered

- Union declaration and initialization
- Union members
- Accessing union members
- Memory sharing
- Size of a union
- Pointers to unions
- Passing unions to functions
- Storing different data types
- "typedef" with unions
- Difference between structures and unions

💡 Basic Syntax

union Data {
    int i;
    float f;
    char ch;
};

A union member can be accessed using the dot (".") operator:

data.i;

When using a pointer to a union, the arrow ("->") operator can be used:

ptr->i;

🔄 Structure vs Union

Structure| Union
Each member has separate memory.| All members share the same memory.
Multiple members can store values at the same time.| Generally, only one member is used at a time.
Requires memory for all members, subject to padding.| Size is generally based on the largest member, subject to alignment.
Used for storing complete records.| Used when different data types share the same memory space.

🎯 Learning Outcome

After completing these programs, you will be able to:

- Understand the purpose of unions in C.
- Declare and initialize unions.
- Understand how union members share memory.
- Access union members.
- Use pointers with unions.
- Pass unions to functions.
- Understand the difference between structures and unions.
- Use "typedef" with unions