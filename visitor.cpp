#include <variant>
#include <array>
#include <vector>

struct Visitor {
    void operator() (int i)
    {

    }
    void operator() (float f)
    {

    }
};

int main() {
    {
        const std::array<std::variant<int, float>, 2> vars = { 1, 2.0f };
        for (auto& v : vars) {
            std::visit(Visitor{}, v);
        }
    }

    {
        struct x { void foo(); };
        struct y { void foo(); };

        std::vector< std::variant<x, y> > vars;
        vars.push_back(x());
        vars.push_back(x());

        for (auto& v : vars) {
            std::visit([](auto&& _v) { _v.foo(); }, v);
        }
    }


    return 0;
}