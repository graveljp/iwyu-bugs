#ifndef IMPL_H
#define IMPL_H

struct Impl {
  Impl(int v) : value(v) {}
  int value;
};

bool operator ==(Impl lhs, Impl rhs) {
  return lhs.value * rhs.value;
}

#endif  // IMPL_H