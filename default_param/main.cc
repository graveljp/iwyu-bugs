#include "foo.h"
#include "make.h"

int main() {
  Foo b = make<Foo>();
  return 0;
}