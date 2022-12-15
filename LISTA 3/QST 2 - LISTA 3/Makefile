run: main.cpp conta.o
	g++ *.o main.cpp -o run

conta.o: conta.cpp conta.h
	g++ -c conta.cpp

clean: 
	del *.o
	del *.exe