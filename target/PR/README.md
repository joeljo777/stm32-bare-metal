# PR — Peripheral Register Basics / LED Blink

> **Concept:** GPIO output configuration using raw hex register writes

---

## What It Does

Blinks the onboard Blue Pill LED (connected to **PC13**) by directly writing to the STM32 memory-mapped peripheral registers using raw hexadecimal values.  
This is the most fundamental form of bare-metal GPIO control — no abstraction, just raw memory writes.

## Pin

| Pin | Role | Notes |
|-----|------|-------|
| PC13 | Onboard LED (Active LOW) | LED ON when PC13 = 0, LED OFF when PC13 = 1 |

## Registers Used

| Register | Address | Action |
|----------|---------|--------|
| `RCC_APB2ENR` | `0x40021018` | Enable GPIOC clock (bit 4 = `IOPCEN`) |
| `GPIOC_CRH` | `0x40011004` | Configure PC13: `MODE13=10` (2 MHz output), `CNF13=00` (push-pull) |
| `GPIOC_ODR` | `0x4001100C` | Drive PC13 HIGH or LOW |

## How It Works

```c
// 1. Enable GPIOC clock
*RCC_APB2ENR |= 0x10;           // bit 4 = IOPCEN

// 2. Configure PC13 as Output Push-Pull, 2 MHz
*GPIOC_CRH &= 0xFF0FFFFF;       // clear MODE13 and CNF13
*GPIOC_CRH |= 0x00200000;       // MODE13 = 10 (2 MHz), CNF13 = 00 (push-pull)

// 3. Blink loop
while(1) {
    *GPIOC_ODR &= 0x0000DFFF;   // PC13 = 0 → LED ON
    // delay...
    *GPIOC_ODR |= 0x00002000;   // PC13 = 1 → LED OFF
    // delay...
}
```

> **Note:** This project intentionally uses raw hex constants (e.g. `0xFF0FFFFF`) to understand the exact bit layout. The [`led_on`](../led_on/) project refactors this using cleaner bit-shift expressions.
