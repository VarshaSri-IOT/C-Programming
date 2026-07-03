# Endianness Detection in C

## 📌 Aim

To determine whether the system follows Little Endian or Big Endian byte ordering.

---

## 📖 Concept

An integer occupies multiple bytes in memory. Different computer architectures store these bytes in different orders.

- Little Endian → Least Significant Byte stored first.
- Big Endian → Most Significant Byte stored first.

This program detects the byte order by examining the first byte of an integer.

---

## 🛠 Concepts Used

- Unsigned Integer
- Memory Layout
- Address Operator (`&`)
- Pointer
- Type Casting
- Dereferencing (`*`)
- Endianness

---

## 🧠 Logic

1. Store the value `1` in an unsigned integer.
2. Obtain its memory address using `&num`.
3. Typecast the address to a `char *`.
4. Read the first byte using `*ptr`.
5. If the first byte is `1`, the system is Little Endian.
6. Otherwise, the system is Big Endian.

---

## 🔍 Example

Suppose

```
num = 1
```

Binary

```
00000000 00000000 00000000 00000001
```

### Little Endian Memory

```
Address

1000    1001    1002    1003

01      00      00      00
```

### Big Endian Memory

```
Address

1000    1001    1002    1003

00      00      00      01
```

---

## 💡 How it Works

```c
char *ptr = (char *)&num;
```

- `&num` gets the starting address of the integer.
- `(char *)` treats the address as a pointer to a single byte.
- `*ptr` reads the first byte stored in memory.

If

```c
*ptr == 1
```

then

```
Little Endian
```

otherwise

```
Big Endian
```

---

## 🌍 Real-World Applications

- Computer Architecture
- Networking
- File Formats
- Binary Data Processing
- Embedded Systems
- Device Drivers

---

## 🚀 Embedded Systems Relevance

Understanding Endianness is important while working with:

- STM32
- ARM Cortex-M
- UART Communication
- SPI Communication
- I²C Communication
- CAN Protocol
- Ethernet Protocol

Many communication protocols require data to be transmitted in a specific byte order.

---

## 📚 Key Takeaways

- Multi-byte numbers can be stored differently on different processors.
- Pointers can inspect memory byte-by-byte.
- Type casting allows interpreting the same memory in different ways.
- Endianness is a fundamental concept in low-level and embedded programming.