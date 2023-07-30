#include <cmath>
#include <cstdio>
#include <iostream>

int main(void) {
  const double XMIN = -3.0;
  const double XMAX = 3.0;
  const double YMIN = -3.0;
  const double YMAX = 3.0;
  const double DELTA = 0.01;
  const int NSTEPS = int((XMAX - XMIN) / DELTA);

  for (double x = XMIN; x < XMAX; x += DELTA) {
    for (double y = YMIN; y < YMAX; y += DELTA) {
      printf("%15.4e%25.4e%15.9e\n", x, y, std::beta(x, y));
    }
  }
}