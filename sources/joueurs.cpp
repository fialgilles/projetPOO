#include "../headers/joueurs.h"

Joueurs::Joueurs()
{
  this->_num = 0;
}

Joueurs::~Joueurs()
{
  
}

void Joueurs::setNum(const int &val)
{
  this->_num = val;
}

int Joueurs::getNum() const
{
  return _num;
}

ostream& operator<<(ostream& os, const Joueurs &j)
{
  cout<<"\nJoueurs "<<j.getNum()<<" :\n";
  cout<<j._main[0]<<", "<<j._main[1];
  return os;
}
