#include <iostream>
#include <string>
#include <string_view>
#include <assert.h>

using namespace std;

auto identity(std::string_view sv)
{
    return sv;
}

int main(int argc, char** argv)
{
    const std::string s = "hello"s;
    auto sv1 = identity(s);             // OK
    auto sv2 = identity(s + " world");  // BUG! Dangling pointer!

    assert(sv2 == "hello world");
    return 0;
}