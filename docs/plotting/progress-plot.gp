# Run from this folder with: gnuplot progress-plot.gp
set datafile separator ","
set terminal pngcairo size 1200,700 enhanced font "Arial,12"
set output "documentation-progress.png"
set title "Example Documentation Project Progress"
set xlabel "Month"
set ylabel "Tasks completed (%)"
set yrange [0:100]
set ytics 0,10,100
set grid
set key left top
set style line 1 linewidth 3 pointtype 7 pointsize 1.2
set style line 2 linewidth 3 pointtype 5 pointsize 1.2
set style line 3 linewidth 3 pointtype 9 pointsize 1.2
plot "sample-data.csv" using 0:2:xtic(1) every ::1 with linespoints ls 1 title "Planning", \
     "sample-data.csv" using 0:3:xtic(1) every ::1 with linespoints ls 2 title "Drafting", \
     "sample-data.csv" using 0:4:xtic(1) every ::1 with linespoints ls 3 title "Review"
set output
