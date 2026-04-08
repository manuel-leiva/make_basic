# Basic example of Makefile

Manual compilation

```bash
# main.c only
gcc -o myapp main.c
```

```bash
# Object files
gcc -c main.c -o main.o
gcc -c function.c -o function.o
# Executable file
gcc main.o function.o -o myapp
```

Make compilation

```bash
make
```
