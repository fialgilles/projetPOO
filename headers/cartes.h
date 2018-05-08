#ifndef _CARTES_H_
#define _CARTES_H_

#include <iostream>

class Cartes
{
private:
  int _couleur; // 0 trèfle, 1 carreau, 2 coeur, 3 pique
  int _hauteur; // 0 à 10, 11 valet, 12 dame, 13 roi, 14 as
public:
  //Constructeurs & Destructeurs de la classe
  Cartes();
  Cartes(int,int);
  ~Cartes();
  // Les GETTERS
  int getCoul() const;
  int getHauteur() const;
  // Les SETTERS
  void setCoul(int val);
  void setHauteur(int val);
  // Les OPERATEURS
  Cartes& operator[](const int &i);
  bool operator==(const Cartes &c);
  Cartes& operator=(const Cartes &c);
  bool operator>(const Cartes &c1);
};
std::ostream& operator<<(std::ostream &os, const Cartes &c);
#endif
