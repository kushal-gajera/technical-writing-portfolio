# LaTeX and Overleaf guide

LaTeX is a document preparation system. You write structured source in `.tex` files; a compiler turns it into a professionally typeset PDF. It is useful for mathematics, references and long reports.

## Choose an environment

| Environment | Best for |
|---|---|
| Overleaf | Browser-based editing and collaboration |
| TeX Live / MacTeX | Local LaTeX distribution on Linux / macOS |
| MiKTeX | Local LaTeX distribution, commonly used on Windows |
| TeXstudio / TeXworks | Desktop LaTeX editors |
| VS Code + LaTeX Workshop | Editing LaTeX in VS Code |

## Compile

From this folder:

```bash
pdflatex main.tex
bibtex main
makeindex main.idx
pdflatex main.tex
pdflatex main.tex
```

The final passes resolve references. On Overleaf, upload this folder while preserving `chapters/`, set `main.tex` as the main document and recompile.

## Document classes

- `article`: assignments, papers and short reports.
- `report`: longer reports, usually with chapters.
- `book`: books and manuals with parts and front / back matter.

The example uses `article`. For a `book` experiment, change the document class and use `\chapter` for top-level divisions.

## Covered features

Paper size, packages, margins, headers and footers, page numbers, portrait / landscape pages, columns, text styles, sizes, alignment, colour, lists, equations, tables, merged cells, dashed rules, long tables, figures, image scaling and rotation, captions, labels, cross-references, BibTeX and an index.

## Common errors

| Error | First check |
|---|---|
| Undefined control sequence | Spelling and required package |
| Missing $ inserted | Math expression outside math mode |
| Missing } inserted | Unmatched braces |
| File not found | Image / input path |
| Citation undefined | Citation key and BibTeX run |
| Label may have changed | Run LaTeX again |
| Overfull hbox | Long text or narrow layout |

## Practice

Change the title, add a section and equation, insert a figure, add a citation and index keyword, and try a landscape page. Keep the `.tex` source as the editable primary work.
