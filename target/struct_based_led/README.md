# struct_based_led — LED Blink Using Struct-Mapped Registers

> **Concept:** C structs as peripheral register abstractions

---

## What It Does

Blinks the onboard Blue Pill LED (PC13) using **C structs** to represent peripheral registers.  
Instead of raw `volatile uint32_t *` pointer writes, each peripheral's register layout is modelled as a `struct` with named bitfields — making the code self-documenting and type-safe.

## Pin

| Pin | Role | Notes |
|-----|------|-------|
| PC13 | Onboard LED | Active LOW — `ODR13=0` → LED ON, `ODR13=1` → LED OFF |

## Registers Used

| Register | Address | Struct Type |
|----------|---------|------------|
| `RCC_APB2ENR` | `0x40021018` | `RCC_APB2ENR` struct |
| `GPIOC_CRH` | `0x40011004` | `GPIOx_CRH` struct |
| `GPIOC_ODR` | `0x4001100C` | `GPIOx_ODR` struct |

## Key Concept: Register Struct

Instead of:
```c
volatile uint32_t *GPIOC_CRH = (volatile uint32_t *)0x40011004;
*GPIOC_CRH &= ~(15 << 20);
*GPIOC_CRH |= (2 << 20);
```

The struct approach allows:
```c
GPIOx_CRH volatile *const pinconfig = (GPIOx_CRH*)0x40011004;
pinconfig->MODE13 = 2;   // Output 2 MHz
pinconfig->CNF13  = 0;   // General Purpose Push-Pull
```

And for the clock enable:
```c
RCC_APB2ENR volatile *const clk = (RCC_APB2ENR*)0x40021018;
clk->IOPCEN = 1;         // Enable GPIOC clock
```

## Blink Loop

```c
GPIOx_ODR volatile *const odr = (GPIOx_ODR*)0x4001100C;

while(1) {
    odr->ODR13 = 1;   // LED OFF (Active LOW)
    for(volatile int d = 0; d < 500000; d++);

    odr->ODR13 = 0;   // LED ON
    for(volatile int d = 0; d < 500000; d++);
}
```

## Why This Matters

This pattern directly maps to how **CMSIS** and hardware abstraction layers (HAL) work internally.  
Understanding this is the bridge between raw register hacking and professional embedded driver development.

## Progression

| Project | Approach |
|---------|---------|
| [`PR`](../PR/) | Raw hex |
| [`led_on`](../led_on/) | Bit-shift expressions |
| **`struct_based_led`** | Struct-mapped registers ← most readable & scalable |
