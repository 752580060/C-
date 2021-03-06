//r 就是一个引用，也可以说 r 的类型是 int &。第二条语句使得 r 引用了变量 n，也可以说 r 成为了 n 的引用。
//
//某个变量的引用和这个变量是一回事，相当于该变量的一个别名。
//
//注意：定义引用时一定要将其初始化，否则编译无法通过。通常会用某个变量去初始化引用，初始化后，它就一直引用该变量，不会再引用别的变量。
//
//也可以用一个引用去初始化另一个引用，这样两个引用就引用同一个变量。不能用常量初始化引用，也不能用表达式初始化引用（除非该表达式的返回值是某个变量的引用）。
//
//总之，引用只能引用变量。
//
//类型为 T& 的引用和类型为 T 的变量是完全兼容的，可以互相赋值。

#include <iostream>
using namespace std;
int main ()
{
	int a;
	a =101;
	int & r = a;
	cout<<a<<",";
	cout<<r<<endl;

	r =102;
	cout<<a<<",";
	cout<<r<<endl;	
	
	r =103;
	cout<<a<<",";
	cout<<r<<endl;

	return 0;

}