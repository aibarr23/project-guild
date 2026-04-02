# Compilers

## Popular Embedded Compilers

### GNU Compiler Collection (GCC)

- Widely used for ARM, AVR, MIPS, and RISC-V. Found in toolchains like ARM GNU Toolchain
- The most ubiquitous open-source coide for embedded systems
  - arm-none-eabi-gcc

### LLVM/Clang

- Popular for moderc C++ standards, often integrated with ARM Cortex-M.
- Open-source favored for its performance and modern error reporting, often used in LLVM toolchains

### Arm Compiler (for Embedded/FuSa)

- Specialized for high performance and functional saftey in ARM-based applications, often bundle with Keil MDK or Arm Development Studio

### IAR Embedded Workbench

- Renowned for high optimization and support for vast range of microcontroller architectures

### Wind River Diab Compiler

- Widely used in saftey-critical, automotive, and aerospace applications

### SEGGER Compiler

- A modern, high performance compiler focusing on code size a speed, specifically for ARM/RISC-V

## Manufacture specific compilers

### Microchip MPLAB XC
  - Tailored for Microchip PIC and dsPIC microcontrollers
### TI Code Composer Studio (CCS)
  - Optimized for Texas Instruments processors
### Green Hills Software (MULTI)
  - Widely recongized for high saftey and secure embedded systems

## Embedded Linux/System Level Compilers

### Yocto Project (Bitbake)
- Creates custom cross-toolchina for Linux based systems

### Buildroot
- Simple tool for generating cross compilers and root file systems
