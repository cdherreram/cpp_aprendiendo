#include <cmath>
#include <cstdio>
#include <iostream>

int main(void) {
  const double XMIN = 0.0;
  const double XMAX = 11.0;
  const double DX = 0.1;
  const int NSTEPS = int((XMAX - XMIN) / DX);

  // for (double x = XMIN; x < XMAX; x += DX)

  for (int ii = 0; ii < NSTEPS; ++ii) {
    double x = XMIN + DX * ii;
    // Gamma(x) = (x-1)* Gamma(x-1)
    printf("%25.9e%25.9e%25.9e\n", x, std::tgamma(x),
           (x - 1) * std::tgamma(x - 1));
  }

  return 0;
}