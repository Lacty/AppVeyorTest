
#include <iostream>


template<typename T>
T func(T& src) {
  std::cout << "&src = " << &src << std::endl;
  src += 10;
  return src;
}

int main() {
  auto a = 0;
  std::cout << "&a   = " << &a << std::endl;
  func(a);
  std::cout << "a = " << a << std::endl;
}
