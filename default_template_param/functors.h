#ifndef FUNCTORS_H
#define FUNCTORS_H

#include <utility>

struct Identity {
  template <typename T>
  T operator()(T t) {
    return t;
  }
};

#endif  // FUNCTORS_H