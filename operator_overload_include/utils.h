#ifndef UTILS_H
#define UTILS_H

#include "my_better_int.h"

template<typename T>
bool IsTen(T n) {
  return MakeMyBetterInt(n).Compare(10);
}

#endif  // UTILS_H