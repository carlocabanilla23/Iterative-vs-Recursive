gcc power.c -o power
./power $1 > result.csv;
python3 report.py;