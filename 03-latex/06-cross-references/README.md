# 06 — Cross-References

Cross-references let LaTeX insert the correct section, figure, table or equation number automatically.

## Topics

- Creating a label with `\label{...}`.
- Referring to a label with `\ref{...}`.
- Using `\pageref{...}` to show a page number.
- Labelling figures, tables and equations.
- Hyperlinks with the `hyperref` package.

## Compile

```bash
pdflatex main.tex
pdflatex main.tex
```

LaTeX may need another compilation pass to update reference numbers. Change a section title or add a new section to see how the references update automatically.
