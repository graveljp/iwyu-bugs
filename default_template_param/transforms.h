#pragma once

#include "functors.h"

template <typename T, typename Functor = Identity>
int Transform(T n, Functor transform = {}) {
  return transform(n);
}
