#include "headers/table.h"
#include "headers/utile.h"

#include <ctime>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  srand(time(NULL));
  Table t;
  t.partie();
  return 0;
}
