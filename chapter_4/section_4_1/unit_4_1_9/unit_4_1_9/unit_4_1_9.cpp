#include <iostream>
using namespace std;

struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
};

 void foo_says(const Foo &foo) { foo.say(); }

 struct Boo : Foo
 {
	 Boo(const char *msg)
		 : Foo(msg), msg(msg)
	 {}
	 const char *msg;
 };

const Foo get_foo(const char *msg) {
	 Boo boo(msg);
	 Foo foo = boo;
	 return foo;
 }

int main()
{
	foo_says(get_foo("Hello!"));
	return 0;
}