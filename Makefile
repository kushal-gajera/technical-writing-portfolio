LATEX_DIR := docs/latex
BEAMER_DIR := docs/beamer
DOXYGEN_DIR := docs/doxygen
PLOT_DIR := docs/plotting

.PHONY: help latex slides doxygen plot check clean
help:
	@echo "Targets: latex, slides, doxygen, plot, check, clean"

latex:
	cd $(LATEX_DIR) && pdflatex -interaction=nonstopmode -halt-on-error main.tex
	cd $(LATEX_DIR) && bibtex main
	cd $(LATEX_DIR) && makeindex main.idx
	cd $(LATEX_DIR) && pdflatex -interaction=nonstopmode -halt-on-error main.tex
	cd $(LATEX_DIR) && pdflatex -interaction=nonstopmode -halt-on-error main.tex

slides:
	cd $(BEAMER_DIR) && pdflatex -interaction=nonstopmode -halt-on-error presentation.tex
	cd $(BEAMER_DIR) && pdflatex -interaction=nonstopmode -halt-on-error presentation.tex

doxygen:
	cd $(DOXYGEN_DIR) && doxygen Doxyfile

plot:
	cd $(PLOT_DIR) && gnuplot progress-plot.gp

check:
	python3 scripts/check-structure.py

clean:
	find docs/latex docs/beamer -type f \( -name '*.aux' -o -name '*.bbl' -o -name '*.blg' -o -name '*.log' -o -name '*.out' -o -name '*.toc' -o -name '*.nav' -o -name '*.snm' -o -name '*.idx' -o -name '*.ind' \) -delete
