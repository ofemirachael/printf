#include <limits.h>
#include "../main.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
 
  _printf("%c %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");
//   printf("printf returns %d bytes\n", ret);
  return 0;
}