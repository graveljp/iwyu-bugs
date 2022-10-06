#ifndef FOO_H
#define FOO_H

#include "other.h"

struct Foo {
  Foo(Bar t = MakeBar()) {};
};

#endif  // FOO_H