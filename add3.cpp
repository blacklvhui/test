#include<iostream>

int main()
{
double wei,zhong,zhang,lv;
int n;
char name;
while(1)
{	
	double a = 1;
	int a = 1;
	while(a != 0)
	{
		std::cout << "How much people?" << std::endl;
		std::cin >> n >> std::endl;
		if(n=1)
		{
			std::cout << "Please input your name:"(wei,zhong,zhang,lv) << std::endl;
			std::cin >> name >> std::endl;
			std::cout << "Please input the price of commodity:" << std::endl;
			std::cin >> a >> std::endl;
			switch(1)
			{
				case 'wei':
					wei+=a;
					break;
				case 'zhong':
					zhong+=a;
					break;
				case 'zhang':
					zhang+=a;				
					break;
				case 'lv':
					lv+=a;
					break;
			}
		}
		else
		{	
			for(n = 0;n = 4;n ++)
			{
				std::cout << "please input they name:" << std::endl;	
				std::cin >> name >> std::endl;
			}	
			std::cout << "Please input the price of commodity:" << std::endl;
			std::cin >> a >> std::endl;
			sum == a/n;
		}
	}
}
return 0;
}
