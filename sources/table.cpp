#include "../headers/table.h"

Table::Table()
{
  do
  {
    try
    {
      cout<<"Combien de joueurs participes à la partie : ";
      cin>>_nbrJ;
      if(cin.fail())
      {
        cin.clear();
        cin.ignore();
        throw _nbrJ;
      }
      if(_nbrJ < 2 || _nbrJ >10)
          cerr<<"Le nombre de joueurs doit être comprit entre 2 et 10\n";
    }
    catch(int e)
    {
      cerr<<"Entrez un entier\n";
    }
  }while(_nbrJ<2 || _nbrJ>10);
  this->_nbJ = new Joueurs[_nbrJ];
  for(int i=0;i<_nbrJ;i++)
  {
    this->_nbJ[i].setNum(i);
    this->_nbJ[i]._main[0] = _deck.pioche();
    this->_nbJ[i]._main[1] = _deck.pioche();
  }
}

void Table::partie()
{
  bool fin = false;
  int tour = 0;
  tour = 1;
  while((!fin)&&(tour <=4))
  {
    tour++;
    affiche(tour);
    this->combinaison();
  }
}

void Table::combinaison()
{

}

bool Table::estQFlushRoyal()
{

}

bool Table::estQFlush()
{

}

bool Table::estCarre()
{

}

bool Table::estFullHouse()
{

}

bool Table::estCouleur()
{

}

bool Table::estQuinte()
{


}
bool Table::estBrelan()
{

}

bool Table::estDoublePaire()
{

}

bool Table::estPaire()
{

}

bool Table::estHauteur()
{

}

int Table::getNbrJ() const
{
  return _nbrJ;
}

Table::~Table()
{

}
