all: ppm
ppm: ppm.cpp Image.o
	g++ -Wall -o ppm.o ppm.cpp Image.o -lm 
Image.o: Image.h Image.cpp 
	g++ -Wall -o  Image.o Image.cpp -c
