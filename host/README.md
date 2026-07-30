# Host — C Language Exercises

These are standalone C programs compiled and run on the host machine (PC) using **GCC**.  
Each project focuses on a specific C language concept, forming the foundation for embedded programming.

## How to Run

```bash
# From any project folder:
gcc <filename>.c -o out && ./out
```

---

## Projects

| # | Project | Concept | Description |
|---|---------|---------|-------------|
| 1 | [`000TestProject`](./000TestProject/) | Setup | Initial test project to verify the build environment |
| 2 | [`Array`](./Array/) | Arrays | Declaring, initializing, and accessing arrays |
| 3 | [`Array_swap`](./Array_swap/) | Arrays | Swapping array elements using pointers |
| 4 | [`ascii`](./ascii/) | Data Types | ASCII character codes and char arithmetic |
| 5 | [`bitwise_operator`](./bitwise_operator/) | Operators | AND, OR, XOR, NOT bitwise operations |
| 6 | [`build_processs`](./build_processs/) | Build System | Understanding the C build pipeline: preprocessing, compilation, assembly, linking |
| 7 | [`conditional`](./conditional/) | Control Flow | `if-else` conditional statements |
| 8 | [`float`](./float/) | Data Types | Floating-point representation and arithmetic |
| 9 | [`for_loop`](./for_loop/) | Loops | `for` loop syntax and patterns |
| 10 | [`function`](./function/) | Functions | Function declaration, definition, and calling conventions |
| 11 | [`if_assignment`](./if_assignment/) | Control Flow | Conditional assignment patterns |
| 12 | [`loops_do_while`](./loops_do_while/) | Loops | `do-while` loop — executes body at least once |
| 13 | [`loops_while`](./loops_while/) | Loops | `while` loop syntax and use cases |
| 14 | [`macros`](./macros/) | Preprocessor | `#define` macros, object-like and function-like |
| 15 | [`math`](./math/) | Operators | Arithmetic operators and integer math |
| 16 | [`operator`](./operator/) | Operators | Comparison, logical, and assignment operators |
| 17 | [`packet_strcut_bitfield`](./packet_strcut_bitfield/) | Structs / Bitfields | Modelling a data packet using struct bitfields |
| 18 | [`packetttt`](./packetttt/) | Structs | Extended packet structure exercises |
| 19 | [`pointer`](./pointer/) | Pointers | Pointer basics: address-of, dereference, read & write via pointer |
| 20 | [`pointer1`](./pointer1/) | Pointers | Pointer arithmetic and pointer-to-pointer |
| 21 | [`shift_operator`](./shift_operator/) | Operators | Left shift `<<` and right shift `>>` operators |
| 22 | [`string`](./string/) | Strings | C strings: `char` arrays, null terminator, `printf` |
| 23 | [`string_literal`](./string_literal/) | Strings | String literals in memory, read-only nature |
| 24 | [`struct`](./struct/) | Structs | Defining and using `struct` types |
| 25 | [`struct_and_pointer`](./struct_and_pointer/) | Structs / Pointers | Accessing struct members via pointer (`->` operator) |
| 26 | [`switch_case`](./switch_case/) | Control Flow | `switch-case` statement |
| 27 | [`type_def`](./type_def/) | Types | `typedef` for creating type aliases |
| 28 | [`type_qualifier`](./type_qualifier/) | Types | `const`, `volatile`, and other type qualifiers |
| 29 | [`union`](./union/) | Unions | Defining and using `union` — shared memory layout |
| 30 | [`union_bit_extraction`](./union_bit_extraction/) | Unions / Bitfields | Using unions + bitfields to extract individual bits from a value |
| 31 | [`Pointer_extra`](./Pointer_extra/) | Pointers | Extra pointer exercises: null pointers, void pointers, pointer comparisons |
| 32 | [`array_and_pointers`](./array_and_pointers/) | Arrays / Pointers | Relationship between arrays and pointers; pointer-based array traversal |
| 33 | [`array_as_function_arguments`](./array_as_function_arguments/) | Arrays / Functions | Passing arrays to functions; pointer decay and `sizeof` behaviour |
| 34 | [`call_by_refernce`](./call_by_refernce/) | Functions / Pointers | Call-by-reference using pointers; in-place modification of variables |
| 35 | [`2D_array`](./2D_array/) | Arrays | 2D array declaration, initialization, pointer-based access (`*(*a+1)`), and memory layout |
| 36 | [`3D_array`](./3D_array/) | Arrays | 3D array (`[2][3][4]`) — layers, rows, columns; memory layout visualization |
| 37 | [`array_practice`](./array_practice/) | Arrays / Strings | Character array traversal via pointer; manual `print` function for C strings |
| 38 | [`c`](./c/) | Project Setup | Skeleton STM32CubeIDE project (build config only, no source yet) |
| 39 | [`3D_array_as_function_arguments`](./3D_array_as_function_arguments/) | Arrays / Functions | Passing 3D arrays to functions |
| 40 | [`heap`](./heap/) | Memory | Heap memory allocation and deallocation (`malloc`, `free`) |
| 41 | [`stack_global.c`](./stack_global.c/) | Memory | Stack frames, function calls, and global variables demonstration |
| 42 | [`Bubble_sort_with_function_callback`](./Bubble_sort_with_function_callback/) | Function Pointers | Bubble sort implementation using a function pointer callback |
| 43 | [`callback_using_funcrion_pointer`](./callback_using_funcrion_pointer/) | Function Pointers | Implementing callbacks using function pointers |
| 44 | [`calloc`](./calloc/) | Memory | Dynamic memory allocation with `calloc` |
| 45 | [`function_pointers`](./function_pointers/) | Function Pointers | Function pointers basics |
| 46 | [`malloc`](./malloc/) | Memory | Dynamic memory allocation with `malloc` |
| 47 | [`malloc_alloc_realloc`](./malloc_alloc_realloc/) | Memory | Memory reallocation and dynamic arrays |
| 48 | [`memory_leak`](./memory_leak/) | Memory | Understanding and avoiding memory leaks |
| 49 | [`pointer_as_function_return`](./pointer_as_function_return/) | Pointers / Functions | Returning pointers from functions |
