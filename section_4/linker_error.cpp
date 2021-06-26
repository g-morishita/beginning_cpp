#include <iostream>

extern int x;

int main() {
  std::cout << x << std::endl; /* cause a linker error */

  return 0;
}
