#ifndef _TABLES_H_
#define _TABLES_H_

#include "joueurs.h"
#include "paquet.hpp"
#include <iostream>

using namespace std;

class Table
{
private:
  Cartes _board[5];
  Paquet<Cartes> _deck;
  Joueurs *_nbJ;
public:
  Table();
  ~Table();
};
#endif
