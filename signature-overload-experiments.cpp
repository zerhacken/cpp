// $ clang++ -std=c++17 signature-overload-experiments.cpp -o sample
// $ clang-format -i -style=llvm *.cpp
#include <iostream>

int foo(unsigned char v) { return 1; }
int foo(int v) { return 2; }
int foo(unsigned v) { return 3; }
template <class T> int foo(T v) { return 4; }

int main(int /*argc*/, char ** /*argv*/) {
  std::cout << "foo " << foo(1) << std::endl;
  return 0;
}