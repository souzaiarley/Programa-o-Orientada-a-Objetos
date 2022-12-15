run: main.cpp SuperHeroi.o Inseto.o Humano.o
	g++ *.o main.cpp -o run

SuperHeroi.o: SuperHeroi.cpp SuperHeroi.h Inseto.h Humano.h
	g++ -c SuperHeroi.cpp

Inseto.o: Inseto.cpp Inseto.h
	g++ -c Inseto.cpp

Humano.o: Humano.cpp Humano.h
	g++ -c Humano.cpp

clean:
	del *.o *.exe