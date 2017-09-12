#include <stdio.h>

#include "timer.h"


int main(void)
{
  double start = timer();
  double elapsed = timer() - start;
  printf ("timem elapsed: %f\n", elapsed);
}
