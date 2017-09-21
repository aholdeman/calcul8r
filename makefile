#make file for stupid calculator project, written by Abby Holdeman
#to run, make the make file, and execute the Calcul8r like you would an a.out file.

all:
	g++ calcul8r.cpp -o Calcul8r
clean:
	rm -f Calcul8r
