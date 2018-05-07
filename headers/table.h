#ifndef _TABLES_H_
#define _TABLES_H_

#include "joueurs.h"
#include "paquet.hpp"
#include "utile.h"
#include <iostream>

using namespace std;

class Table
{
private:
  Cartes _board[5]; // Board d'une table
  Paquet<Cartes> _deck; // Paquet de 52 cartes
  Joueurs *_nbJ; // Pointeurs contenant les joueurs d'une parties
  int _nbrJ; // Nombres des joueurs d'une partie
public:
  Table();
  ~Table();
  int getNbrJ() const;
  void partie();
  void combinaison();
};
#endif
