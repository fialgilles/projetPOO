CC = g++
EXE = Poker
GFLAG = -Wall

all:$(EXE)

$(EXE): main.cpp sources/cartes.cpp headers/paquet.hpp sources/table.cpp  sources/table.cpp sources/joueurs.cpp
	$(CC) -o $(EXE) main.cpp sources/cartes.cpp headers/paquet.hpp sources/table.cpp sources/joueurs.cpp $(GFLAG)

clean:
	rm -f $(EXE)
