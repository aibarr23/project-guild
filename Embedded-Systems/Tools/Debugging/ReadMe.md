# Debugging in Embedded sytems

## Types of debuggers that are available

### General Purpose & CLI Debuggers

#### GDB (GNU Debugger)

powerful, command line debugger for C, C++, Fortran, etc.
supports remote debugging
[using gdb](/Embedded-Systems/Tools/Debugging/GDB.md)

#### LLDB (LLVM Debugger)

Default debugger for Xcode and Clang, supports C, C++
Objective-C Swift

#### PDB

python built in interactive source level debugger

### Integrated Development Environment (IDE) Debuggers

#### Visual Studio Debugger

comprehensive debugger for .NET and native Windows apps
deeply integrated

#### Visual Studio Code

Supports GDB/LLDB via extension, great for profiling features

#### IntelliJ IDEA

powerful debugger for Java, Kotlin, Android
greate profiling features

#### PyCharm
JetBrains IDE, top tier debugger for Python development

### Web & Browser Debuggers

#### Chrom DevTools

built in browser tools for javascript, html, and css

#### Firefox dev tools

similar suite

### Embedded & System-Level Debuggers

#### WinDbg

Multipurpose debugger for Windows, excellent for kernel-mode issues

#### TRACE32

High-end debugger for complex embedded systems real-time tracing

#### SEGGER Ozone

GUI debugger for embedded systems and microcontrollers

### Specialized & Time-Travel Debuggers

#### Valgrind

Memory debugging, leak detection, and profiling for C/C++

#### Zdebug

PHP debugger and profiler

#### Undo LiveRecorder

Time-Travel debugging for C, C++, Go, Rust, Java
letting you go backward in time