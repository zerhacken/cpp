// https://godbolt.org/ with clang x86-64 (experimental-concepts -std=c++2a)
#include <algorithm>
#include <array>

int main()
{
  constexpr std::array<int, 3> lhs({0, 1, 2});
  constexpr std::array<int, 3> rhs({2, 1, 0});
  
  constexpr bool equal = std::equal(lhs.begin(), lhs.end(), rhs.begin());
  static_assert(equal == false, "constexpr");
  
  return 0;
}