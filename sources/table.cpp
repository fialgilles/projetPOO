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
  this->combinaison(_nbJ[0]);
  /*while((!fin)&&(tour <=4))
  {
    tour++;
    affiche(tour);
    //cout<<_nbJ[0]<<"\n";
  }*/
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
  /*
  int i;
  for(i=0;i<2;i++)
    tab[i]=j._main[i];
  for(int i=0;i<nb;i++)
    tab[i+2]=_board[i];
  */
  int nb = this->getNbCBoard();
  Cartes tab[7];
  tab[0].setCoul(0);
  tab[0].setHauteur(1);
  tab[1].setCoul(0);
  tab[1].setHauteur(1);
  tab[2].setCoul(0);
  tab[2].setHauteur(2);
  tab[3].setCoul(0);
  tab[3].setHauteur(5);
  tab[4].setCoul(0);
  tab[4].setHauteur(6);
  tab[5].setCoul(0);
  tab[5].setHauteur(3);
  tab[6].setCoul(0);
  tab[6].setHauteur(8);
  sort(tab,2+nb);
  //cout<<this->estPaire(tab,2+nb)<<endl;
  cout<<this->estDoublePaire(tab,2+nb)<<" huehuehuh hj "<<endl;

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

bool Table::estDoublePaire(const Cartes *tab,int nb)
{
  int p1=0;
  int k=0;
  for(k=0;k<nb;k++)
  {
    if(tab[k].getHauteur() == tab[k+1].getHauteur())
    {
      cout<<"Paire1"<<endl;
      p1+=1;
      break;
    }
  }
  cout<<"p1 : "<<p1<<endl;
  if(p1==0)
  {
    cout<<"pas de double paire"<<endl;
    return false;
  }
  for(int j=k+2;j<nb;j++)
  {
    if(tab[j].getHauteur() == tab[j+1].getHauteur())
    {
      cout<<"Paire2"<<endl;
      p1+=1;
      break;
    }
  }
  if (p1==2)
  {
    cout<<"double paire\n";
    return true;
  }
  else
  {
    cout<<"pas de double paire"<<endl;
    return false;
  }
}

bool Table::estPaire(const Cartes *tab,int nb)
{
  for(int i=0;i<nb;i++)
  {
    if(tab[i].getHauteur() == tab[i+1].getHauteur())
    {
      cout<<"Paire"<<endl;
      return true;
    }
  }
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
