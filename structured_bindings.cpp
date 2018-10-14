#include <tuple>

struct Foo {
  int a;
  int b;
  int c;
};

std::tuple<int, int, int> getFoo(const Foo &foo) {
  return {foo.a, foo.b, foo.c};
}

int main(int argc, char **argv) {
  Foo foo;
  auto [a, b, c] = getFoo(foo);
  return 0;
}