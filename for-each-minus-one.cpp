#include <memory>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  auto print = [](const int& n) { std::cout << " " << n; };
  std::vector<int> items({1, 2, 3});
  std::for_each(items.begin(), items.end() - 1, print);

  return 0;
}