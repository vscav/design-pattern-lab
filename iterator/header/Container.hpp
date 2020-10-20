#ifndef ITERATOR_PATTERN_CONTAINER_HPP
#define ITERATOR_PATTERN_CONTAINER_HPP

#include <vector>
#include "./Iterator.hpp"

template <class T>
class Container {

  friend class Iterator<T, Container>;

private:

  std::vector<T> _data;

public:

  void Add(T a) {
    _data.push_back(a);
  }

  Iterator<T, Container> *CreateIterator() {
    return new Iterator<T, Container>(this);
  }

};

#endif //ITERATOR_PATTERN_CONTAINER_HPP