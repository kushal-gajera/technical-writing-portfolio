# Beamer — presentation guide

Beamer is a LaTeX document class for slide presentations. The editable `presentation.tex` demonstrates a title frame, content frames, columns, blocks, lists, a table and mathematics.

## Compile

```bash
cd docs/beamer
pdflatex presentation.tex
pdflatex presentation.tex
```

Or run `make slides` from the repository root. You can also upload the source to a blank Overleaf project.

## Concepts

- `\documentclass{beamer}` selects the presentation class.
- Each `frame` creates a slide.
- `columns` and `column` divide a slide into regions.
- `block`, `alertblock` and `exampleblock` distinguish content groups.
- `itemize` and `enumerate` organise points.
- Themes and colour themes define the visual system.

Personalise the presenter and course details. Keep each slide focused on one message.
