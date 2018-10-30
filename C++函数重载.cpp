//2018年10月30日19点49分
//	内容：函数的重载
//	解释：C++ 不允许变量重名，但是允许多个函数取相同的名字，只要参数表不同即可，
//			这叫作函数的重载（读“虫载”，不读“众载”，其英文是 overload）。重载就
//				是装载多种东西的意思，即同一个事物能完成不同功能。
//					在调用同名函数时，编译器通过实参的个数和类型来判断 到底调用的是那个函数。
//						所以必须确保函数的实参个数和类型与你所定义，声明的函数是相同的

#include <iostream>
using namespace std;
void Max(int a, int b)
{
	cout << "Max 1" << endl;
}
void Max(double a, double b)
{
	cout << "Max 2" << endl;
}
void Max(double a, double b, double c)
{
	cout << "Max 3" << endl;
}
int main()
{
	Max(3, 4);  //调用 int Max(int, int)
	Max(2.4, 6.0);  //调用 double Max(doubleA double)
	Max(1.2, 3.4, 5);  //调用 double Max(double, double, double)    
	Max(1, 2, 3);  //调用 double Max(double, double, double)      不同与下一行，这里不出现二义性，是因为名为“Max”，入口实参数量为3的函数只有一个
//	Max(3, 1.5);  //编译出错：二义性
	return 0;
}
//运行结果：
