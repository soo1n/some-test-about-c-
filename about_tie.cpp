#include <iostream>
#include <tuple>

using namespace std;

/*
* 关于tie的小小测试
* 时间：2022-3-29
* 作者：宋廷松
*		利用tie可以帮助两个变量同时赋值
*		例如交换a与b的值 tie(a, b) = pair<int, int>{ b, a }；
*/



int test()
{

	int a = 3;
	int b = 4;
	//tie以左值引用的方式创建了一个tuple, t的第一个元素就是a的引用，第二个元素就是b的引用
	auto t = tie(a, b) = pair<int, int>{ b, a };	

	cout << a << " " << b << endl;		//输出结果a = 4, b = 3;

	a = 6;
	cout << std::get<0>(t) << endl;		//输出结果为6

	return 0;
}