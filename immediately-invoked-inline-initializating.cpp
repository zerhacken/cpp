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
  	Bar bar = [&](){
      if (auto sp = wp.lock(); sp) return sp->bar;
      return Bar{};
    }();
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
    return 0;
}