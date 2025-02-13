#include <iostream>
using namespace std;

int main() {
  int x = 50000;
  double y = 0.15;
  double z = x * y;
  cout << "precio con descuento: " << x - z << endl;
  return 0;
}
