# pin_read — Digital Input Reading (Button → LED)

> **Concept:** GPIO input configuration, pull-down resistor, reading IDR

---

## What It Does

Reads the state of a button connected to **PA0** and controls the onboard LED on **PC13** accordingly:
- Button **pressed** → LED **ON**
- Button **released** → LED **OFF**

This project introduces **GPIO input mode**, the **Input Data Register (IDR)**, and the use of the internal pull-down resistor.

## Pins

| Pin | Role | Configuration |
|-----|------|--------------|
| PA0 | Button input | Input with internal Pull-Down (`CNF0=10`, `MODE0=00`) |
| PC13 | Onboard LED | Output Push-Pull, 2 MHz (`CNF13=00`, `MODE13=10`) — Active LOW |

## Registers Used

| Register | Address | Purpose |
|----------|---------|---------|
| `RCC_APB2ENR` | `0x40021018` | Enable clocks for GPIOA (bit 2) and GPIOC (bit 4) |
| `GPIOA_CRL` | `0x40010800` | Configure PA0: Input Pull-Up/Down mode |
| `GPIOA_ODR` | `0x4001080C` | Set ODR0 = 0 → selects internal Pull-Down on PA0 |
| `GPIOA_IDR` | `0x40010808` | Read the digital state of PA0 |
| `GPIOC_CRH` | `0x40011004` | Configure PC13: Output Push-Pull, 2 MHz |
| `GPIOC_ODR` | `0x4001100C` | Drive PC13 HIGH/LOW |

## Key Concept: Pull-Down via ODR

When a GPIO pin is in **Input Pull-Up/Down mode** (`CNF=10, MODE=00`):
- `ODR bit = 0` → **Pull-Down** (pin reads 0 when floating)
- `ODR bit = 1` → **Pull-Up** (pin reads 1 when floating)

```c
*GPIOA_ODR &= 0xFFFFFFFE;   // ODR0 = 0 → Pull-Down enabled on PA0
```

## Main Loop Logic

```c
while(1) {
    if ((*GPIOA_IDR & 0x00000001) != 0) {
        *GPIOC_ODR &= 0x0000DFFF;  // PC13 = 0 → LED ON
    } else {
        *GPIOC_ODR |= 0x00002000;  // PC13 = 1 → LED OFF
    }
}
```

## Circuit

```
3.3V ──[Button]── PA0 ──(internal pull-down to GND)
```
When button is pressed, PA0 is pulled to 3.3V → IDR bit0 = 1 → LED turns ON.
