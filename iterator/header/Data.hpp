#ifndef ITERATOR_PATTERN_DATA_HPP
#define ITERATOR_PATTERN_DATA_HPP

class Data {
private:

    int _data;

public:
  
  Data(int a = 0) : _data(a){}

  inline void set_data(int a) {_data = a;}

  inline int data() {return _data;}

};

#endif //ITERATOR_PATTERN_DATA_HPP