#ifndef FUNCTORS_H
#define FUNCTORS_H

#include <utility>

struct Identity {
  template <typename T>
  constexpr T&& operator()(T&& t) const noexcept {
    return std::forward<T>(t);
  }
};

#endif  // FUNCTORS_H