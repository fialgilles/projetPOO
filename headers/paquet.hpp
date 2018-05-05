#ifndef _PAQUET_H_
#define _PAQUET_H_

#include "cartes.h"
#include <cstdlib>
#include <iostream>

using namespace std;

const int nCartes = 52;

template<class T>
class Paquet
{
private:
  Cartes _paquet[nCartes];
  bool _piocher[nCartes];
public:
  Paquet();
  ~Paquet();
  bool estPiocher(const int &i);
  void setPiocher(const int &i);
  Cartes pioche();
  template<class U>
  friend ostream& operator<<(ostream &os, const Paquet<U> &p);
};

template<class T>
ostream& operator<<(ostream &os, const Paquet<T> &p)
{
  for(int i=0;i<nCartes;i++)
    os << p._paquet[i];
  return os;
}

template<class T>
Paquet<T>::Paquet()
{
  int coul = -1;
  int haut = 1;
  for(int i=0;i<nCartes;i++)
  {
    if(i%13 == 0)
      coul++;
    if(haut > 13)
      haut = 1;
    _paquet[i].setCoul(coul);
    _paquet[i].setHauteur(haut);
    //cout<<"i :"<<i<<" "<<_paquet[i]<<endl;
    haut++;
    _piocher[i] = false;
  }
}

template<class T>
Paquet<T>::~Paquet(){}

template<class T>
bool Paquet<T>::estPiocher(const int &i)
{
  return _piocher[i];
}

template<class T>
void Paquet<T>::setPiocher(const int &i)
{
  this->_piocher[i]=true;
}

template<class T>
Cartes Paquet<T>::pioche()
{
  int i = 0;
  i = rand()%52;
  if(!this->estPiocher(i))
  {
    this->setPiocher(i);
    return _paquet[i];
  }
  else
  {
    return this->pioche();
  }
}
#endif
