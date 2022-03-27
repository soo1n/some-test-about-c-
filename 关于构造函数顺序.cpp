#include <iostream>

using namespace std;

class A
{
public:
	A() { cout << "A construct" << endl; }
};

class B
{
public:
	B() { cout << "B construct" << endl; }
};

class C : public B
{
public:
	C() { cout << "C construct" << endl; }
private:
	A a;
};

int main()
{
	C c;

	return 0;
}