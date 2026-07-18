# Target — STM32 Bare-Metal Projects

These projects run directly on the **STM32F103C8T6 (Blue Pill)** board with **no HAL, no CMSIS, no drivers** — just raw C and memory-mapped register access.

> All register addresses and bit descriptions are sourced from the [STM32F103 Reference Manual (RM0008)](../reference_manual_stm.pdf).

---

## How to Build & Flash

1. Open **STM32CubeIDE**
2. **File → Open Projects from File System** → select the project folder
3. Build: `Ctrl + B`
4. Flash & Debug: connect ST-Link V2 via SWD → `Run → Debug`

For projects using **semihosting** (`printf` output), ensure the debug configuration has semihosting enabled.

---

## Projects

| # | Project | Concept | Key Registers | Description |
|---|---------|---------|---------------|-------------|
| 1 | [`helloworld_semihosting`](./helloworld_semihosting/) | Semihosting | — | First program: `printf("Hello World")` over SWD via ARM semihosting |
| 2 | [`sizeof`](./sizeof/) | Data Types / Semihosting | — | Prints the size of C data types on the ARM Cortex-M3 target |
| 3 | [`007volatile`](./007volatile/) | `volatile` keyword | — | Demonstrates why `volatile` prevents compiler optimization of hardware-related variables |
| 4 | [`PR`](./PR/) | GPIO Output / Register Basics | `RCC_APB2ENR`, `GPIOC_CRH`, `GPIOC_ODR` | First LED blink — direct register writes using raw hex values |
| 5 | [`led_on`](./led_on/) | GPIO Output / Bit Manipulation | `RCC_APB2ENR`, `GPIOC_CRH`, `GPIOC_ODR` | LED blink using clean bit-shift expressions instead of raw hex |
| 6 | [`struct_based_led`](./struct_based_led/) | Structs / GPIO | `RCC_APB2ENR`, `GPIOC_CRH`, `GPIOC_ODR` | LED blink using C structs mapped to peripheral registers — cleaner abstraction |
| 7 | [`pin_read`](./pin_read/) | GPIO Input + Output | `GPIOA_CRL`, `GPIOA_IDR`, `GPIOA_ODR`, `GPIOC_CRH`, `GPIOC_ODR` | Reads PA0 (button, pull-down) and toggles the PC13 LED accordingly |
| 8 | [`KEYPAD`](./KEYPAD/) | GPIO / Multiplexing | `GPIOA_CRH`, `GPIOB_CRH`, `GPIOA_IDR`, `GPIOB_ODR` | 4×4 matrix keypad scanner using row-drive / column-read technique with semihosting output |

---

## Register Quick Reference

| Register | Address | Purpose |
|----------|---------|---------|
| `RCC_APB2ENR` | `0x40021018` | Enable clocks for GPIO ports A, B, C |
| `GPIOA_CRL` | `0x40010800` | Configure PA0–PA7 mode & CNF |
| `GPIOA_CRH` | `0x40010804` | Configure PA8–PA15 mode & CNF |
| `GPIOA_IDR` | `0x40010808` | Read digital input state of Port A pins |
| `GPIOA_ODR` | `0x4001080C` | Write output / set pull-up/down for Port A |
| `GPIOB_CRH` | `0x40010C04` | Configure PB8–PB15 mode & CNF |
| `GPIOB_ODR` | `0x40010C0C` | Write output state of Port B pins |
| `GPIOC_CRH` | `0x40011004` | Configure PC8–PC15 mode & CNF |
| `GPIOC_ODR` | `0x4001100C` | Write output state of Port C pins (PC13 = onboard LED) |
