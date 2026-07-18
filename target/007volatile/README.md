# 007volatile

> **Concept:** The `volatile` keyword in embedded C

---

## What It Does

A minimal project that demonstrates why the `volatile` keyword is essential in embedded programming.  
Two `volatile` variables are assigned values in sequence — without `volatile`, an optimizing compiler could eliminate these reads/writes as "unused", breaking hardware register access.

## Source

```c
#include <stdint.h>

int main(void)
{
    uint8_t volatile data1;
    uint8_t volatile data2;

    data1 = 50;
    data2 = data1;
    data2 = data1;   // repeated read — compiler must NOT optimize this away

    for(;;);
}
```

## Why `volatile` Matters

Without `volatile`, an optimizing compiler (`-O1` or higher) might:
- Remove the assignment to `data1` (never "used")
- Collapse the two reads of `data1` into one

In embedded programming, variables that map to **hardware registers** must be read/written exactly as written in the source — the compiler cannot assume their value won't change between accesses.

> *"I am volatile. Someone outside my program may observe or modify me at any time. You cannot remove or reorder my accesses."*

## Inspection Method

This project is best studied in the **debugger** or by examining the generated **disassembly** (`Debug/*.list`):
- With `volatile`: both assignments generate actual load/store instructions
- Without `volatile`: the compiler may optimize them away entirely
