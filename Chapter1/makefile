.PHONY: clean

all: input function2.exe

input: input.o
	g++ input.o -o input

input.o: input.cpp
	g++ -c input.cpp

function2.exe: function2.cpp
	g++ function2.cpp -o function2.exe

clean:
	rm -rf *.o