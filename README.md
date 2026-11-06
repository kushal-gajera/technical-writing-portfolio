# Technical Writing Portfolio

A practical, syllabus-mapped portfolio covering LaTeX, Google Docs, Doxygen, Beamer, drawing tools, graph plotting, Git and GitHub.

> A student learning portfolio: personalise student details, complete the learning journal in your own words, and add screenshots of your practical work before academic submission.

## Course coverage

| Syllabus topic | Included work |
|---|---|
| LaTeX / Overleaf | Editable report source, page styling, formatting, equations, tables, figures, bibliography, cross-references and index |
| Google Docs | Technical report workflow and reusable report template |
| Doxygen | Documented C++ calculator API and Doxyfile |
| Beamer | Slides demonstrating frames, columns, blocks and tables |
| Inkscape / Xfig / OpenOffice Draw | Editable SVG diagrams and drawing exercises |
| Gnuplot | CSV dataset and plotting script |
| Git / GitHub / SVN | Version-control guide, command cheat sheet and collaboration workflow |

## Repository structure

```text
technical-writing-portfolio/
├── README.md
├── CONTRIBUTING.md
├── LICENSE
├── Makefile
├── assets/                 # Editable SVG and PNG diagrams
├── docs/
│   ├── syllabus-map.md
│   ├── learning-journal.md
│   ├── latex/              # Report source, chapters, bibliography and PDF
│   ├── google-docs/        # Guide and report template
│   ├── doxygen/            # C++ source, API comments and Doxyfile
│   ├── beamer/             # Presentation source and PDF
│   ├── drawing/            # Inkscape, Xfig and Draw exercises
│   ├── plotting/           # Gnuplot script and CSV data
│   └── git-github/         # Git/GitHub guide and cheat sheet
└── scripts/                # Structure validation
```

## Start here

1. Read the [syllabus coverage map](docs/syllabus-map.md).
2. Explore the [LaTeX report](docs/latex/README.md) and compiled [PDF](docs/latex/main.pdf).
3. Review the [Beamer presentation](docs/beamer/README.md) and [PDF slides](docs/beamer/presentation.pdf).
4. Generate API docs using the [Doxygen project](docs/doxygen/README.md).
5. Practise diagrams with the [drawing guide](docs/drawing/README.md).
6. Run the [Gnuplot exercise](docs/plotting/README.md).
7. Learn the [Git/GitHub workflow](docs/git-github/README.md).
8. Record your own reflections in the [learning journal](docs/learning-journal.md).

## Build and check

```bash
python3 scripts/check-structure.py
make latex       # requires latexmk / TeX Live
make beamer      # requires latexmk / TeX Live
make doxygen     # requires Doxygen
make plot        # requires Gnuplot
```

## Before academic submission

- Replace `[Your Name]`, `[Department / University]` and date placeholders.
- Add screenshots of your own Google Docs, Doxygen, drawing and Gnuplot results.
- Complete the learning journal honestly and in your own words.
- Check the exact format requested by your instructor.

---

**Learn it · Document it · Visualise it · Version it**
