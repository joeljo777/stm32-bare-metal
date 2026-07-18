# KEYPAD — 4×4 Matrix Keypad Scanner

> **Concept:** Row/column multiplexing, GPIO input/output, semihosting output

---

## What It Does

Scans a **4×4 matrix keypad** and prints the pressed key to the STM32CubeIDE debug console via ARM semihosting.

Supports keys: `1 2 3 A | 4 5 6 B | 7 8 9 C | * 0 # D`

## Hardware Connection

| Keypad | STM32 Pin | Direction |
|--------|----------|-----------|
| Row 1 (R1) | PB12 | Output (driven LOW to scan) |
| Row 2 (R2) | PB13 | Output |
| Row 3 (R3) | PB14 | Output |
| Row 4 (R4) | PB15 | Output |
| Col 1 (C1) | PA8 | Input (Pull-Up) |
| Col 2 (C2) | PA9 | Input (Pull-Up) |
| Col 3 (C3) | PA10 | Input (Pull-Up) |
| Col 4 (C4) | PA11 | Input (Pull-Up) |

## Registers Used

| Register | Address | Purpose |
|----------|---------|---------|
| `RCC_APB2ENR` | `0x40021018` | Enable clocks for GPIOA (bit 2) and GPIOB (bit 3) |
| `GPIOA_CRH` | `0x40010804` | Configure PA8–PA11 as Input Pull-Up/Down |
| `GPIOB_CRH` | `0x40010C04` | Configure PB12–PB15 as Output Push-Pull, 2 MHz |
| `GPIOA_ODR` | `0x4001080C` | Enable Pull-Ups on PA8–PA11 (ODR bits set to 1) |
| `GPIOB_ODR` | `0x40010C0C` | Drive rows LOW one at a time for scanning |
| `GPIOA_IDR` | `0x40010808` | Read column states to detect key press |

## Scanning Algorithm

```
For each Row (R1 → R4):
    1. Drive all rows HIGH
    2. Pull selected row LOW
    3. Check each column (C1–C4):
       - If column reads LOW → that key is pressed
       - Debounce: wait until key is released
       - Print the key character via printf (semihosting)
```

## Key Matrix Map

```
       C1(PA8)  C2(PA9)  C3(PA10) C4(PA11)
R1(PB12)  1        2        3        A
R2(PB13)  4        5        6        B
R3(PB14)  7        8        9        C
R4(PB15)  *        0        #        D
```

## Key Code Snippet

```c
// All rows HIGH
*GPIOB_ODR |= 0x0000F000;

// Pull R1 (PB12) LOW
*GPIOB_ODR &= ~(1 << 12);

// Check C1 (PA8)
if (!(*GPIOA_IDR & (1 << 8))) {
    delay();                          // debounce
    while (!(*GPIOA_IDR & (1 << 8))); // wait for release
    printf("1\n");
}
```

## How to Run

1. Wire the keypad according to the pin table above
2. Open project in STM32CubeIDE, build and flash
3. Enable semihosting in the debug configuration
4. Open the **Console** tab and press keypad keys — characters appear in real time
