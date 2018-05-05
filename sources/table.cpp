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
  
}

int Table::getNbrJ() const
{
  return _nbrJ;
}

Table::~Table()
{

}
