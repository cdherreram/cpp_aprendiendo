#include <iostream>

int main() {
  double x[156] = {1.1, 1.2, 1.3, 1.4};
  double *p;
  std::cout << " x = " << x << ", dir. de x[O] = " << &x[0] << std::endl;
  p = x;
  std::cout << "p = " << p << std::endl;

  double a[10][20] = {1.1, 1.2, 1.3, 1.4};
  double *q;
  std::cout << " a = " << a << ", dir. de a[O][0] = " << &a[0][0] << std::endl;
  // q = a;
  q = &a[0][0];
  std::cout << "q = " << q << std::endl;
}