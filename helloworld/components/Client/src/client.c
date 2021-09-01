/* apps/helloworld/components/Client/src/client.c */

#include <camkes.h>

int run(void) {
  const char *s = "Hello Emacs";
  iface_print(s);
  iface_print(s);
  iface_print(s);
  iface_print(s);
  iface_print(s);
  return 0;
}
