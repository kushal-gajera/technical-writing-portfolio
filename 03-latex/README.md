# LaTeX

LaTeX is a document preparation system used for structured academic and technical writing. You write source files in `.tex` format and compile them into a PDF.

## Installation and editors

- **TeX Live / MacTeX:** LaTeX distributions for Linux and macOS.
- **MiKTeX:** a LaTeX distribution commonly used on Windows.
- **TeXstudio / TeXworks:** desktop editors.
- **Overleaf:** an online editor that runs in a browser.
- **VS Code + LaTeX Workshop:** an editor extension setup.

An editor is not the complete compiler distribution. Make sure a working LaTeX installation is available when compiling locally.

## Eight practical examples

| Folder | What you will learn |
|---|---|
| [01-first-document](01-first-document/) | Document class, preamble, packages, title and sections |
| [02-page-layout](02-page-layout/) | Paper size, margins, orientation, columns, headers and footers |
| [03-formatting](03-formatting/) | Text styles, font size, alignment, colour and lists |
| [04-mathematics](04-mathematics/) | Equations, symbols, matrices and aligned expressions |
| [05-tables-and-images](05-tables-and-images/) | Tables, merged cells, borders, images, scaling and rotation |
| [06-cross-references](06-cross-references/) | Labels, automatic numbering and references |
| [07-bibliography](07-bibliography/) | Citations and BibTeX |
| [08-index](08-index/) | Creating an alphabetical index |

Each example has its own `README.md` and `main.tex`. Open the README first, then edit and compile the source.

## Common errors

| Error | What to check |
|---|---|
| Undefined control sequence | Command spelling and required package |
| Missing $ inserted | Math-mode delimiters |
| Missing } inserted | Unmatched braces |
| File not found | Image or input path |
| Citation undefined | Citation key and BibTeX sequence |
| Reference undefined | Label spelling and another compile pass |
| Overfull hbox | Long text or narrow page layout |

Compile a simple example from its own folder with:

```bash
pdflatex main.tex
```
