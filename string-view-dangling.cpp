// clang++ -std=c++17 string-view-dangling.cpp -o string-view-dangling
#include <iostream>
#include <assert.h>
#include <string>
#include <string_view>

using namespace std;

auto identity(std::string_view sv) { return sv; }

int main(int argc, char **argv) {
  const std::string s = "hello"s;
  auto sv1 = identity(s);            // OK
  auto sv2 = identity(s + " world"); // BUG

  assert(sv2 == "hello world");
  return 0;
}