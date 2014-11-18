all: ppm
test_ppm: ppm.cpp ppm.o
	g++ -Wall -o ppm.out ppm.cpp ppm_functions.o -lm
ppm.o: ppm.h ppm_functions.cpp 
	g++ -Wall -o  ppm_functions.o ppm_functions.cpp -c

