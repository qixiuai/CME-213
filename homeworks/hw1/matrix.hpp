#ifndef _MATRIX_HPP
#define _MATRIX_HPP

#include <cstddef>
#include <iostream>

template <typename T>
class Matrix
{
};

template <typename T>
class MatrixSymmetric : public Matrix<T> {
public:
  MatrixSymmetric(std::size_t n) {
    // TODO fix stoage size
    this->n = n;
    size = n * (n + 1) / 2 + n/2;
    data = new T[size];
  }
  
  ~MatrixSymmetric() {
    delete[] data;
  }
  
  T& operator() (std::size_t i, std::size_t j) {
    return data[i+j];
  }

  template <typename T>
  friend std::ostream& operator<<(std::ostream& os, MatrixSymmetric<T> mat) {
    
  }
  
  float l0norm() {
    return 1.0;
  }
  
private:
  T* data;
  std::size_t size;
  std::size_t n;
};




#endif /* MATRIX_HPP */
