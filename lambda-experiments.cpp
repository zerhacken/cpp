// $ clang++ -std=c++17 lambda-experiments.cpp -o lambda-experiments
// $ clang-format -i -style=llvm *.cpp
#include <iostream>
#include <vector>

int main(int /*argc*/, char ** /*argv*/) {
  //std::vector<int> values = { 0, 3, 1, 2 };
  constexpr bool baz = true;
  const int foo = [&]{ 
    if(baz) { 
      return 1;
    }
    return 0;
  } ();

  std::cout << "foo " << foo << std::endl;

  return 0;
}