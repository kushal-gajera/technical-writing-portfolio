# Doxygen C++ Example

> **A small program to practise documentation comments.**

## Files

- `main.cpp` — contains two documented functions and a small `main` function.
- `Doxyfile` — tells Doxygen which files to scan and what output to create.

## 01. Build and Run the Program

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o example
./example
```

Expected output:

```text
Sum: 30
Average: 15
```

## 02. Generate API Documentation

Install Doxygen, then run:

```bash
doxygen Doxyfile
```

Open `html/index.html` in a browser.

## 03. Try It Yourself

Add a documented function to `main.cpp`, regenerate the documentation and check that the function appears in the generated HTML.

---

[Back to Doxygen](../README.md) · [Portfolio Home](../../README.md)
