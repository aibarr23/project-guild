# Using  GDB (GNU Debugger)

Example file used: hello.c

Prep steps
show file:
```bash
cat hello.c
```
compile file for debugging (flag -g for debugging):
```bash
gcc -g hello.c
```

Start debugging GDB:
```bash
gdb a.out
```
Inside the GDB terminal (gdb)
commands:
    start
    list
    next

look at program counter (during reversible debugging)
```(gdb)
p $pc
```

Enter the tui mode:
input commands:
ctrl + x + a        enter tui
ctrl + l            clear screen of output
ctrl + x + 2        view register | assembly | hex
tui reg float       filter from registers
python              use python interpreter