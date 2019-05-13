# define a target for the application
#

all: hw_06.exe

hw_06.exe: f_00.o f_01.o f_02.o
	gcc -g -O2 -lm f_00.o f_01.o f_02.o -o hw_06.exe

f_00.o: f_00.cc
	gcc -c f_00.cc

f_01.o: f_01.cc
	gcc -c f_01.cc

f_02.o: f_02.cc
	gcc -c f_02.cc

clean:
	rm -f hw_06.exe
