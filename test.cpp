#include<iostream>

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
int main()
{
	int j = fact (10);
	std::cout << "10! is " << j << std::endl;

	return 0;
}	
