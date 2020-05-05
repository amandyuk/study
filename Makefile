bw: bw.o getword.o allvar.o
	g++ bw.o getword.o allvar.o -o bw
bw.o: bw.cpp
	g++ -c bw.cpp
getword.o: getword.cpp
	g++ -c getword.cpp
allvar.o: allvar.cpp
	g++ -c allvar.cpp
clean:
	rm *.o bw
