#!/usr/bin/env python3
"""Check that the expected Technical Writing Portfolio files exist."""
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
REQUIRED = [
    "README.md", "LICENSE", "CONTRIBUTING.md", "Makefile",
    "docs/syllabus-map.md", "docs/learning-journal.md",
    "docs/google-docs/guide.md", "docs/latex/main.tex",
    "docs/beamer/presentation.tex", "docs/doxygen/Doxyfile",
    "docs/doxygen/include/calculator.hpp", "docs/drawing/README.md",
    "docs/plotting/progress-plot.gp", "docs/git-github/README.md",
    "assets/technical-writing-workflow.svg", "assets/document-lifecycle.svg",
]
missing = [name for name in REQUIRED if not (ROOT / name).is_file()]
empty = [name for name in REQUIRED if (ROOT / name).is_file() and (ROOT / name).stat().st_size == 0]
if missing or empty:
    if missing:
        print("Missing files:", *missing, sep="\n- ")
    if empty:
        print("Empty files:", *empty, sep="\n- ")
    sys.exit(1)
print(f"Portfolio structure OK: {len(REQUIRED)} required files found and non-empty.")
