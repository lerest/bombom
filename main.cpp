#include <ar.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
  Cube c;
  int side;
  cout << "Vvedit storony kvadrata: ";
  cin >> side;
  c.side = &side;
  cout << "Ploscha: " << c.plosha_kvadrata(side);
  cout << "\n Perimetr:" << c.perimetr_kvadrata(side) << endl;
  assert(c.perimetr_kvadrata(side) >= 0);
  cin.get();
}
