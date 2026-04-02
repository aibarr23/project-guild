
# Linker

The Linker Script (.ld)
The linker script is essential, dictating the layout of the executable, including the base addresses of flash and RAM, the entry point of the application, and the placement of sections like vector tables, code, and initialized data. 

### Memory Mapping: 
- The linker uses a linker script to define where code (.text) and data (.data, .bss) reside in the microcontroller's memory map.
### Symbol Resolution: 
- It resolves external symbols (variables and functions) across different object files.
### Library Linking: 
- Combines required standard C/C++ libraries with the application code.
### Output Generation: 
- Produces binary formats suited for flashing, such as ELF, Intel HEX, or Motorola S-record files. 

## Common Embedded Linkers
### GNU Linker (ld):
-  Part of the GNU Toolchain (GCC), used for ARM Cortex-M, RISC-V, etc..
### ARM Linker (armlink):
-  Part of the Arm Compiler for Embedded, used in Keil MDK.
### IAR Linker: 
- Part of the IAR Embedded Workbench, known for its powerful optimization.