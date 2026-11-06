# Doxygen — source-code documentation

Doxygen reads structured comments in source code and generates a browsable API reference. This example documents a small C++ `Calculator` class.

## Generate documentation

Install Doxygen, then run:

```bash
cd docs/doxygen
doxygen --version
doxygen Doxyfile
```

Open `html/index.html` in a browser. The Doxyfile configures the HTML output.

## Useful comment tags

- `@brief` — short summary.
- `@param` — describes a parameter.
- `@return` — explains the returned value.
- `@throws` — documents an exception.
- `@details` — provides a longer explanation.
- `@file` — describes a source file.

## Practical tasks

1. Add a square operation and document it.
2. Add a divide-by-zero exception and document it with `@throws`.
3. Regenerate the HTML and inspect the class page.
4. Add a usage example to the main page.

Build the C++ example with:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic -Iinclude src/calculator.cpp src/main.cpp -o calculator
./calculator
```
