#include <iostream>
#include <tuple>

using namespace std;

/*
* ����tie��СС����
* ʱ�䣺2022-3-29
* ���ߣ���͢��
*		����tie���԰�����������ͬʱ��ֵ
*		���罻��a��b��ֵ tie(a, b) = pair<int, int>{ b, a }��
*/



int test()
{

	int a = 3;
	int b = 4;
	//tie����ֵ���õķ�ʽ������һ��tuple, t�ĵ�һ��Ԫ�ؾ���a�����ã��ڶ���Ԫ�ؾ���b������
	auto t = tie(a, b) = pair<int, int>{ b, a };	

	cout << a << " " << b << endl;		//������a = 4, b = 3;

	a = 6;
	cout << std::get<0>(t) << endl;		//������Ϊ6

	return 0;
}