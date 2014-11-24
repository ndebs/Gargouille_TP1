all: ppm
ppm: ppm.cpp ppm_function.o
	g++ -Wall -o ppm.o ppm.cpp ppm_function.o -lm 
ppm_function.o: ppm.h ppm_function.cpp 
	g++ -Wall -o  ppm_function.o ppm_function.cpp -c

