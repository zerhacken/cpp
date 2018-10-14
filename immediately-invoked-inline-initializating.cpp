// cl.exe immediately-invoked-inline-initializating.cpp /std:c++17
#include <memory>

using namespace std;

struct Bar{};
struct Foo
{
	Bar bar;
};

int main(int argc, char** argv)
{
	weak_ptr<Foo> wp;
/*  
  	Bar bar;
    {
        auto sp = wp.lock();
      	if (sp)
        {
            bar = sp->bar;
        }
    }
*/  
    Bar bar = [&](){
        if (auto sp = wp.lock(); sp) return sp->bar;
        return Bar{};
    }();
    
    return 0;
}