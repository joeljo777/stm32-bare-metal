# led_on — LED Blink with Bit-Shift Expressions

> **Concept:** GPIO output using clean bit-shift operators instead of raw hex

---

## What It Does

Blinks the onboard Blue Pill LED (PC13, Active LOW) using the same register-level approach as [`PR`](../PR/), but refactored to use **bit-shift expressions** for clarity and correctness.

## Pin

| Pin | Role | Notes |
|-----|------|-------|
| PC13 | Onboard LED | Active LOW — `PC13=0` → LED ON, `PC13=1` → LED OFF |

## Registers Used

| Register | Address | Action |
|----------|---------|--------|
| `RCC_APB2ENR` | `0x40021018` | Enable GPIOC clock (bit 4) |
| `GPIOC_CRH` | `0x40011004` | Configure PC13 as Output Push-Pull @ 2 MHz |
| `GPIOC_ODR` | `0x4001100C` | Drive PC13 HIGH / LOW |

## Key Code

```c
// Enable GPIOC clock — bit 4 (IOPCEN)
*RCC_APB2ENR |= (1 << 4);

// Clear MODE13[1:0] and CNF13[1:0] — bits 20-23
*GPIOC_CRH &= ~(15 << 20);

// Set MODE13 = 10 (2 MHz output), CNF13 = 00 (push-pull)
*GPIOC_CRH |= (2 << 20);

while(1) {
    *GPIOC_ODR &= 0x0000DFFF;           // PC13 = 0 → LED ON
    for(volatile int d = 0; d < 500000; d++);

    *GPIOC_ODR |= 0x00002000;           // PC13 = 1 → LED OFF
    for(volatile int d = 0; d < 500000; d++);
}
```

## Bit Layout: GPIOC_CRH (PC13 = bits 20–23)

```
Bits:   [23:22]   [21:20]
Field:   CNF13    MODE13
Value:    00        10    → General Purpose Push-Pull, 2 MHz output
```

## Progression

| Project | Approach |
|---------|---------|
| [`PR`](../PR/) | Raw hex values (`0xFF0FFFFF`) |
| **`led_on`** | Bit-shift expressions (`~(15 << 20)`) — cleaner and self-documenting |
| [`struct_based_led`](../struct_based_led/) | C struct mapped to peripheral — highest abstraction |
