#include "../headers/utile.h"

using namespace std;

void affiche(const int &tour)
{
  cout<<"=============================\n\t";
  switch(tour)
  {
    case 1:
      cout<<"PREFLOP";
      break;
    case 2:
      cout<<"FLOP";
      break;
    case 3:
      cout<<"TURN";
      break;
    case 4:
      cout<<"RIVER";
      break;
    default: exit(-1);
  }
  cout<<"\n=============================\n"<<endl;
}
