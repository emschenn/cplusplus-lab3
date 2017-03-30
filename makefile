main:cow.o
	g++ -o main cow.o
cow.o:cow.cpp
	g++ -c cow.cpp
