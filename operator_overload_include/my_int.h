#ifndef MY_INT_H
#define MY_INT_H

#include "impl.h"

struct MyInt {
  MyInt(int v) : impl(v) {}
  Impl impl;
};

#endif  // MY_INT_H