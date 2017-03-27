lab2:lab2.o rate.o
	g++ -o lab2 lab2.o rate.o -lm
lab2.o:lab2.cpp
	g++ -c lab2.cpp
rate.o:rate.cpp rate.h
	g++ -c rate.cpp
