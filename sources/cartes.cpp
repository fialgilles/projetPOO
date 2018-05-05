#include "../headers/cartes.h"

using namespace std;

Cartes::Cartes()
{
  this->_couleur = 10;
  this->_hauteur = 10;
}

Cartes::Cartes(int coul,int haut):_couleur(coul),_hauteur(haut){}

Cartes::~Cartes(){}


int Cartes::getCoul() const
{
  return _couleur;
}

int Cartes::getHauteur() const
{
  return _hauteur;
}

void Cartes::setCoul(int val)
{
  this->_couleur = val;
}

void Cartes::setHauteur(int val)
{
  this->_hauteur = val;
}

bool Cartes::operator==(const Cartes &c)
{
  return this->getHauteur() == c.getHauteur();
}

Cartes& Cartes::operator=(const Cartes &c)
{
  this->_couleur = c.getCoul();
  this->_hauteur = c.getHauteur();
  return (*this);
}

std::ostream& operator<<(std::ostream &os, const Cartes &c)
{
  cout<<"\t";
  cout<<c.getHauteur()<<" , "<<c.getCoul();
  /*
  if((c.getHauteur() > 10) || (c.getHauteur() == 1) )
  {
    if(c.getHauteur() == 11)
      cout<<"Valet";
    if(c.getHauteur() == 12)
      cout<<"Dame";
    if(c.getHauteur() == 13)
      cout<<"Roi";
    if(c.getHauteur() == 1)
      cout<<"As";

    if(c.getCoul() == 0)
      cout<<" de_trefle";
    if(c.getCoul() == 1)
      cout<<" de_carreau";
    if(c.getCoul() == 2)
      cout<<" de_coeur";
    if(c.getCoul() == 3)
      cout<<" de_pique";
  }
  else
  {
    if(c.getCoul() == 0)
      cout<<c.getHauteur()<<" de_trefle";
    if(c.getCoul() == 1)
      cout<<c.getHauteur()<<" de_carreau";
    if(c.getCoul() == 2)
      cout<<c.getHauteur()<<" de_coeur";
    if(c.getCoul() == 3)
      cout<<c.getHauteur()<<" de_pique";
  }*/
  return os;
}
