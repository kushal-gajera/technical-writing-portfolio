# Graph plotting with Gnuplot

Gnuplot is a command-line graphing program that reads data files and exports plots such as PNG, SVG, EPS or PDF.

## Files

- `sample-data.csv` — illustrative monthly progress data.
- `progress-plot.gp` — labelled line chart with legend and grid.

## Run

```bash
cd docs/plotting
gnuplot progress-plot.gp
```

The script writes `documentation-progress.png` in this folder.

## Understand the script

- `set datafile separator` configures CSV parsing.
- `set terminal` selects an output format.
- `set output` chooses the output filename.
- `set title`, `set xlabel`, and `set ylabel` describe the plot.
- `plot` maps CSV columns to axes and legend labels.

Modify one value, add another series, or try the PDF terminal. Label units and explain what the data represents; never use a misleading axis scale.
