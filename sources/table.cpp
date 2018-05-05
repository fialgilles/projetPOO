#include "../headers/table.h"

Table::Table()
{
  for(int i=0;i<5;i++)
  {
    _board[i] = _deck.pioche();
  }
  int nb=0;
  do
  {
    try
    {
      cout<<"Combien de joueurs participes à la partie : ";
      cin>>nb;
      if(cin.fail())
      {
        cin.clear();
        cin.ignore();
        throw nb;
      }
      if(nb < 2 || nb >10)
          cerr<<"Le nombre de joueurs doit être comprit entre 2 et 10\n";
    }
    catch(int e)
    {
      cerr<<"Entrez un entier\n";
    }
  }while(nb<2 || nb>10);
  this->_nbJ = new Joueurs[nb];
  for(int i=0;i<nb;i++)
  {
    this->_nbJ[i].setNum(i);
    this->_nbJ[i]._main[0] = _deck.pioche();
    this->_nbJ[i]._main[1] = _deck.pioche();
    cout<<this->_nbJ[i];
  }
}

Table::~Table()
{

}
