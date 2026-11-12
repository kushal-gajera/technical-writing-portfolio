# Doxygen

Doxygen generates documentation from specially formatted comments in source-code files.

## Why document code?

- Explains functions, classes and modules.
- Describes parameters and return values.
- Helps developers use interfaces correctly.
- Makes a project easier to maintain.

## Common documentation tags

| Tag | Meaning |
|---|---|
| `@brief` | Short summary |
| `@param` | Parameter description |
| `@return` | Return value |
| `@details` | Longer explanation |
| `@note` | Additional note |
| `@warning` | Important warning |
| `@see` | Related material |
| `@file` | File documentation |
| `@author` | Author |

## Generate the example documentation

Open a terminal in [example/](example/) and run:

```bash
doxygen Doxyfile
```

Open the generated `html/index.html` file in a browser. The `generated-docs/` folder explains what is generated and why generated output is not stored in Git.

## Practical activity

Add a documented function to `example/main.cpp`, regenerate the documentation and verify that the function appears in the HTML output.
