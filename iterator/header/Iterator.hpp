#ifndef ITERATOR_PATTERN_ITERATOR_HPP
#define ITERATOR_PATTERN_ITERATOR_HPP

#include <vector>

template <typename T, typename U>
class Iterator {
 public:

  typedef typename std::vector<T>::iterator iter_type;
  Iterator(U *p_data, bool reverse = false) : _p_data(p_data) {
    _it = _p_data->_data.begin();
  }

  void First() {
    _it = _p_data->_data.begin();
  }

  void Next() {
    _it++;
  }

  bool IsDone() {
    return (_it == _p_data->_data.end());
  }

  iter_type Current() {
    return _it;
  }

 private:

  U *_p_data;

  iter_type _it;

};

#endif //ITERATOR_PATTERN_ITERATOR_HPP