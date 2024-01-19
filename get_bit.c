#include "bit_ops.h"

unsigned get_bit(unsigned x, unsigned n) {
return (x >> n) & 1;
}

