#include<iostream>
	
int f()
{
	static int a=0; // 初始化a，使用static关键字后，只在第一次调用的时候初始化a，并且a只会被初始化一次
	a++;　//　a = 1

	return a; // return 1
}

int fn()
{
	int a = 0;　// 每次调用该函数时都会初始化a
	a++;	// a = 1

	return a; // return 1
}

int main()
{
	// 调用用static修饰变量的函数f()
	std::cout << f() << std::endl; // 输出1
	std::cout << f() << std::endl; // 输出2
	std::cout << f() << std::endl; // 输出3
	std::cout << f() << std::endl; // 输出4

	// 调用没有用static修饰变量的函数f()
	std::cout << fn() << std::endl; // 输出1
	std::cout << fn() << std::endl; // 输出1
	std::cout << fn() << std::endl; // 输出1
	std::cout << fn() << std::endl; // 输出1
	return 0;
}
