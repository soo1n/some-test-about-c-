#include <iostream>

using namespace std;

//问题： 一个子类C 继承父类B，同时子类内部符合类A，当子类C构造时，其内部的构造顺序是如何？
/*
测试结果：
	B construct
	A construct
	C construct
	其父类B先构造，然后其内部符合的类C构造，最后其自身构造
*/
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
