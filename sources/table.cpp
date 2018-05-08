#include "../headers/table.h"

Table::Table()
{
  for(int i=0;i<5;i++)
    _board[i] = _deck.pioche();
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
  while((!fin)&&(tour <=4))
  {
    tour++;
    affiche(tour);
    //cout<<_nbJ[0]<<"\n";
    this->combinaison(_nbJ[0]);
  }
}

int Table::getNbCBoard() const
{
  int j;
  for(j = 0;j<5;j++)
  {
    if((_board[j].getHauteur()) == -1)
    {
      break;
    }
  }
  return j;
}

void Table::combinaison(const Joueurs &j)
{
  Cartes tab[7];
  int nb = this->getNbCBoard();
  int i;
  for(i=0;i<2;i++)
    tab[i]=j._main[i];
  for(int i=0;i<nb;i++)
    tab[i+2]=_board[i];
  trieJoueur(tab,2+nb);

}

bool Table::estQFlushRoyal()
{
  return false;
}

bool Table::estQFlush()
{
return false;
}

bool Table::estCarre()
{
return false;
}

bool Table::estFullHouse()
{
return false;
}

bool Table::estCouleur()
{
return false;
}

bool Table::estQuinte()
{
return false;
}
bool Table::estBrelan()
{
return false;
}

bool Table::estDoublePaire()
{
return false;
}

bool Table::estPaire()
{
return false;
}

bool Table::estHauteur()
{
  return false;

}

int Table::getNbrJ() const
{
  return _nbrJ;
}

Table::~Table()
{

}
