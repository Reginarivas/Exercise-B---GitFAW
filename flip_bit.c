#include "bit_ops.h"


void flip_bit(unsigned * x, unsigned n) {
  unsigned y = 1 << n;
  *x = (*x ^ y);
}

