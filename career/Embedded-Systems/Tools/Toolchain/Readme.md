# Embedded Systems Toolchains

Toolchains are a set of integrated Software tools (compilers, linkers, debuggers)
They are use to develop, optimize, and deploy code from the host PC to the microcontroller

## Assemblers

#### GNU Assembler (GAS): 
- Part of the GNU Binutils package, it supports a vast range of architectures, including ARM, RISC-V, and MIPS.
### Keil MDK Assembler:
-  A specialized assembler for ARM Cortex-M microcontrollers, tightly integrated into the Keil development environment.
#### AVRA:
- An open-source assembler compatible with Atmel's official toolchain for AVR microcontrollers.
#### NASM: 
- While primarily for x86, it is frequently used for low-level system tasks and is prized for its powerful macro language.

## Linker Script (.ld)

The linker script is essential, dictating the layout of the executable, including the base addresses of flash and RAM, the entry point of the application, and the placement of sections like vector tables, code, and initialized data. 

## Compilers

 Compilers are specialized tools that translate high-level code (C/C++) into efficient machine code for specific microcontrollers, often utilizing cross-compilation (building on a PC for target hardware). They are crucial for optimizing limited memory, power, and real-time constraints, featuring optimization for size/speed and managing hardware-specific memory mappings (RAM/ROM)

 ## Debuggers

 Debuggers are essential tools for identifying software and hardware issues by enabling real-time control and inspection of a microcontroller's state. They typically utilize hardware probes (e.g., JTAG, SWD) connected to on-chip debug modules to pause execution, set breakpoints, step through code, and inspect memory or registers.