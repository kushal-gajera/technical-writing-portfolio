# 08 | Creating an Index

> **Help readers find important terms in longer documents.**

---

## 01. What You Will Learn

An index is an alphabetically arranged list of important terms and the pages where they appear. It is useful in longer reports, manuals and books.

## 02. Important Commands

- `\usepackage{makeidx}` loads index support.
- `\makeindex` enables index generation.
- `\index{term}` adds a term to the index.
- `\printindex` prints the index.

## 03. Build Sequence

```bash
pdflatex main.tex
makeindex main
pdflatex main.tex
```

The index may need another LaTeX compilation pass after MakeIndex has run.

## 04. Output Preview

![Index compiled output](../../assets/images/latex/08-index.png)

*Rendered from the page containing the generated index.*

---

[Back: Bibliography](../07-bibliography/README.md) · [Back to LaTeX](../README.md) · [Next: Beamer](../../02-Beamer/README.md)
