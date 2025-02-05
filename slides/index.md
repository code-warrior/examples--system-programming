autoscale: true
slidenumbers: true
slidecount: true
build-lists: true
slide-transition: true
slide-transition: fade(0.5)
slide-transition: move(horizontal)
theme: plain jane, 1

# C

---

## Before We Begin

1. Ensure `gcc` is installed: `gcc --version`
2. Check that the current folder is in your path:
    a. Type `$PATH` in your CLI
    b. Look for “`:.`”, sans quotes, in the output

In 2.b, the colon (`:`) is a path separator, while the dot (`.`) indicates the current folder.

---

## Intro

Out of the box, C comes with nothing, not even a library. Thus, the smallest program you may write is:

```C
main() {}
```

Try it. Put the contents in a file called `smallest-c-program.c`.

---

## Build and Run Your First Program

```bash
> gcc -Wall -g smallest-c-program.c
> a.out
```

* `gcc` — Invokes the GNU Compiler Collection compiler.
* `-Wall` — “…enables all the warnings about constructions that some users consider questionable.”
* `-g` — “Produce[s] debugging information in the operating system’s native format.”
* `a.out` — Created by C as the default executable. We’ll learn to change that, later.

**Note**: Consider adding `-Wall` and `-g` to your aliases.

---

## Build and Run Your First Program with Output

In the previous example, there was no output. Let’s generate some:

```C
#include <stdio.h>

int main() {
  printf("Hello, world");
}
```

1. The standard input/output library (`stdio.h`) is being loaded via its header file
2. The `printf` function (print formatted) from the standard input/output library prints a string to the terminal
3. The `main` function explicitly includes a return type of `int`, and it’s the entry point for your C programs

---

## Let’s Build with a Makefile

```make
CC=gcc
FLAGS=-Wall -g
FILENAME=hello-world.c
OUTPUT_FILE=a.out

all: build run

build:
	$(CC) $(FLAGS) $(FILENAME) -o $(OUTPUT_FILE)

run:
	$(OUTPUT_FILE)

clean:
	rm -fr $(OUTPUT_FILE) $(OUTPUT_FILE).dSYM *~
```

**Note**: Indentations use tabs, **_not_** spaces

---

## Style (Indentation)

* NASA indents by 4
* Harvard indents by 4
* Google indents by 2
* The GNU indents by 2
* We’ll indent by 2

---

## Style (Miscellaneous)

* NASA and Harvard place the first curly on the next line
* Google does it inline, like many other modern languages
* Variable names are separated by underscores
* Line lengths should be 80 chars long, 100 max

---

## Style (Sources)

* [Harvard’s CS50 C Style Guide](https://cs50.readthedocs.io/style/c/)
* [NASA style guide](https://ntrs.nasa.gov/citations/19950022400)
* [The GNU C Library Reference Manual](https://www.gnu.org/prep/standards/html_node/Formatting.html)
* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

---

## More GCC (Save All Temp Files)

```bash
gcc -save-temps hello-world.c
```

The `-save-temps` flag will save bytecode (`.bc`), intermediary (`.i`), object (`.o`), and Assembler (`.s`) files, each named after the original source file.
