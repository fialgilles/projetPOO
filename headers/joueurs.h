#ifndef _JOUEURS_H_
#define _JOUEURS_H_

#include "cartes.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Joueurs
{
  friend class Table;
private:
  int _num;
  Cartes _main[2];
public:
  Joueurs();
  ~Joueurs();
  void setNum(const int &val);
  int getNum() const;
  friend ostream& operator<<(ostream& os, const Joueurs &j);
};
#endif
