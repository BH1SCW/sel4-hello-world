/* apps/helloworld/components/Hello/src/hello.c */

#include <camkes.h>
#include <stdio.h>

void inf__init(void) {
  printf("======================In function: %s\n", __func__);
}

void inf_print(const char *message) {
  printf("Client says: %s\n", message);
  printf("in function: %s\n", __func__);
}
