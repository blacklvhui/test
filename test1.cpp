#include<iostream>
struct NamePrice
{
	char name[20];
	double price;
};


int main()
{
struct NamePrice people[2] = {"zhang", 0, "zhong", 0};

int choose = 0;

std::cout << "Please choose a people:" << std::endl;
for (int i = 0; i < 2; i++)
{
	std::cout << i << "==>" << people[i].name << std::endl;
}

std::cin >> choose;

people[choose].price += 20;


for (int i = 0; i < 2; i++)
{
	std::cout << people[i].name << people[i].price << std::endl;
}
return 0;
}
