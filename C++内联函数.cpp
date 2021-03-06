//2018年10月30日19点37分
//【内容】：inline
//【内联（关键字）】  inline，用于函数声明和函数定义时。
//【区别于函数调用，inline的作用是】 ：相当于代码重新抄了一遍。用于小代码量的代码，可以快速执行。这样节省了  函数调用开销的时问题。
//【实质】：，使用内联函数会使最终可执行程序的体积增加。以时间换取空间，或增加空间消耗来节省时间，这是计算机学科中常用的方法。
//
//Tip：【函数调用开销】：函数调用在执行时，首先要在栈中为形参和局部变量分配存储空间，然后还要将实参的值复制给形参，
//接下来还要将函数的返回地址（该地址指明了函数执行结束后，程序应该回到哪里继续执行）放入栈中，最后才跳转到函数内部执行。这个过程是要耗费时间的。
//
//另外，函数执行 return 语句返回时，需要从栈中回收形参和局部变量占用的存储空间，然后从栈中取出返回地址，再跳转到该地址继续执行，这个过程也要耗费时间。
//一般情况下，这个开销可以忽略不计。但是，如果一个函数内部没有几条语句，执行时间本来就非常短，那么这个函数调用产生的额外开销和函数本身执行的时间相比，
//就显得不能忽略了。假如这样的函数在一个循环中被上千万次地执行，函数调用导致的时间开销可能就会使得程序运行明显变慢。

#include <iostream>
using namespace std;
inline void Max(int a,int b);
int main()
{
	Max(10,20);

	return 0;
}
inline void Max(int a,int b)
{
	cout<<"你好"<<endl;	//cout   不可以输出汉字，若编辑汉字，则会输出乱码
	printf("你好\n");	//printf 可以输出汉字
}
