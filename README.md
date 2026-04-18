# Basic C Build Example

This project is a small C example that builds an executable called `myapp`
from `main.c` and `function.c`.

## Files

- `main.c`: entry point of the program
- `function.c`: implementation of `my_function`
- `function.h`: function declarations
- `Makefile`: build with `make`
- `meson.build`: build with Meson

## Manual Compilation

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

## Build With Make

```bash
make
```

Clean generated files:

```bash
make clean
```

## Build With Meson

Requirements:

- `meson`
- `ninja`
- `gcc` or another C compiler supported by Meson

Create the build directory:

```bash
meson setup builddir
```

Compile the project:

```bash
meson compile -C builddir
```

Run the executable:

```bash
./builddir/myapp
```

Reconfigure the build after changing Meson files:

```bash
meson setup --reconfigure builddir
```

Clean the Meson build directory:

```bash
rm -rf builddir
```
