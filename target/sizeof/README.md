# sizeof

> **Concept:** Data type sizes on ARM Cortex-M3 via Semihosting

---

## What It Does

Prints the byte-size of fundamental C data types as seen by the **ARM Cortex-M3** compiler.  
This helps understand the concrete sizes of types on the target hardware, which is critical for embedded programming (register-width awareness, struct packing, etc.).

## Source

```c
#include <stdio.h>
extern void initialise_monitor_handles(void);

int main(void)
{
    initialise_monitor_handles();

    printf("Size of char datatype is %u\n",        sizeof(char));
    printf("Size of int datatype is %ud\n",         sizeof(int));
    printf("Size of long datatype is %uld\n",       sizeof(long));
    printf("Size of long long datatype is %ulld\n", sizeof(long long int));

    for(;;);
}
```

## Expected Output (ARM Cortex-M3)

| Type | Size |
|------|------|
| `char` | 1 byte |
| `int` | 4 bytes |
| `long` | 4 bytes |
| `long long` | 8 bytes |

> Note: On ARM, `int` and `long` are both 4 bytes — different from some 64-bit desktop systems where `long` is 8 bytes.

## How to Run

1. Open project in STM32CubeIDE, build and flash via ST-Link
2. View output in the **Console** tab (semihosting must be enabled)
