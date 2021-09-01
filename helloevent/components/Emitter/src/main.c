/* apps/helloevent/components/Emitter/src/main.c */

#include <camkes.h>
int run(void) {
  while (1) {
    e_emit();
  }
  return 0;
}

