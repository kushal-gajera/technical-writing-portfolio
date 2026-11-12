# 07 — Bibliography and Citations

A bibliography lists the sources used in a document. This example uses BibTeX with the `natbib` package.

## Build sequence

Run these commands from this folder:

```bash
pdflatex main.tex
bibtex main
pdflatex main.tex
pdflatex main.tex
```

## Important commands

- `\citep{lamport1994}` — parenthetical citation.
- `\citet{lamport1994}` — author-focused citation.
- `\bibliographystyle{plainnat}` — selects a bibliography style.
- `\bibliography{references}` — loads `references.bib`.

Citation keys must match the keys in the BibTeX file exactly.
