# helloworld_semihosting

> **Concept:** ARM Semihosting — printing to the host debugger console over SWD

---

## What It Does

Prints `"Hello World"` to the STM32CubeIDE debug console using **ARM Semihosting**.  
This is the bare-metal equivalent of a "Hello World" — it validates that the toolchain, ST-Link, and semihosting are all configured correctly.

## How It Works

ARM Semihosting intercepts certain low-level system calls (like `write`) and tunnels them over the SWD debug connection to the host PC.  
The call to `initialise_monitor_handles()` sets up the C runtime hooks so `printf` works via semihosting.

```c
#include <stdio.h>
extern void initialise_monitor_handles(void);

int main(void)
{
    initialise_monitor_handles();
    printf("Hello World\n");
    for(;;);
}
```

## Key Points

| Item | Detail |
|------|--------|
| **Output** | STM32CubeIDE SWV / Console window |
| **Debug interface** | ST-Link V2 (SWD) |
| **No peripherals used** | ✔ — pure CPU + semihosting |

## How to Run

1. Open project in STM32CubeIDE
2. Build (`Ctrl+B`)
3. Connect ST-Link, run Debug (`F11`)
4. Open **Console** tab — you should see `Hello World`

> Make sure semihosting is enabled in the debug launch configuration.
