# Binary Representation of an Unsigned Integer

## 📌 Aim

To convert a decimal number into its 32-bit binary representation using bitwise operators in C.

---

## 📖 Concept

Computers store numbers internally in binary format. This program demonstrates how an unsigned integer is represented in memory by extracting each bit using bitwise operations.

---

## 🛠 Concepts Used

- Unsigned Integer
- Bitwise Right Shift (`>>`)
- Bitwise AND (`&`)
- For Loop
- Binary Number System
- Bit Manipulation

---

## 🧠 Logic

1. Read an unsigned integer from the user.
2. Start checking from the Most Significant Bit (bit 31).
3. Right shift the number by `i` positions.
4. Perform bitwise AND with `1` to extract the least significant bit.
5. Print the extracted bit.
6. Print a space after every 8 bits for readability.

---

## 🔍 Example

**Input**

```
13
```

**Output**

```
00000000 00000000 00000000 00001101
```

---

## 💡 How it Works

Expression used:

```c
(num >> i) & 1
```

- `num >> i` shifts the required bit to the least significant position.
- `& 1` extracts only that bit.

---

## 🌍 Real-World Applications

- Binary visualization
- Embedded Systems
- Register manipulation
- Device drivers
- Communication protocols
- Debugging bit-level data

---

## 🚀 Embedded Systems Relevance

Microcontrollers like STM32, AVR, PIC, and 8051 use registers where each bit controls hardware peripherals.

Examples:

- GPIO Registers
- UART Registers
- SPI Registers
- Timer Registers
- Interrupt Registers

Understanding binary representation is essential before learning register programming.

---

## 📚 Key Takeaways

- Numbers are stored in binary.
- Bitwise operators allow direct manipulation of individual bits.
- Registers in embedded systems are accessed using these techniques.