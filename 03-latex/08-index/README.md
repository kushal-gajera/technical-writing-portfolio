# 08 — Creating an Index

An index is an alphabetically arranged list of important terms and the pages where they appear. It is useful in longer reports, manuals and books.

## Build sequence

```bash
pdflatex main.tex
makeindex main
pdflatex main.tex
```

## Important commands

- `\usepackage{makeidx}` loads index support.
- `\makeindex` enables index generation.
- `\index{term}` adds a term to the index.
- `\printindex` prints the index.

The index may need a second LaTeX compilation pass after MakeIndex has run.
