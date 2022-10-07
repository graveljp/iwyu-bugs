#ifndef MY_BETTER_INT_H
#define MY_BETTER_INT_H

#include "my_int.h"

struct MyBetterInt {
  MyBetterInt(int v) : my_int(v) {}
  MyInt my_int;

  template<typename T>
  bool Compare(T rhs) {
    return my_int.impl == rhs;
  }
};

MyBetterInt MakeMyBetterInt(int value) {
  return MyBetterInt(value);
}

#endif  // MY_BETTER_INT_H