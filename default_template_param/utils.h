#ifndef UTILS_H
#define UTILS_H

#include "functors.h"

template <typename T, typename Functor = Identity>
int Transform(T n, Functor transform = {}) {
  return transform(n);
}

#endif // UTILS_H