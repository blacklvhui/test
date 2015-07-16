#include<iostream>

struct NamePrice
{
	char name[20];
	double price;
}people[4] = {
								{"zhang",0},
								{"zhong",0},
								{"wei",0},
								{"lv",0}
							};


int main()
{	
	double Nprice=1;
	int PeoNum=0;
	double Eprice=0;
	int i=0;
	char Pname[20];
	int j=0;
	int choose;

	while(1)
	{	
		std::cout << "Please input the price of commodity:" << std::endl;
		std::cin >> Nprice;
		if(Nprice==0)
			break;
		std::cout << "How much people?" << std::endl;
		std::cin >> PeoNum;
		if(PeoNum==1)
		{	
			std::cout << "Please choose the people :" << "\n";
			for (int i = 0; i < 4; i++)
					{
						std::cout << i << "==>" << people[i].name << std::endl;
					}
			std::cin >> choose;
			people[choose].price += Nprice;

		}
		else
		{
			
			Eprice = Nprice / PeoNum;		
			for(j = 0;j < PeoNum;j ++)
			{
					std::cout << "Please choose they name :" << std::endl;
					for (int i = 0; i < 4; i++)
					{
						std::cout << i << "==>" << people[i].name << std::endl;
					}
					std::cin >> choose;
					people[choose].price += Eprice;
			}
		}
	}


for(i =0 ; i< 4; ++i) 
{  
 for(j = 0; j < 3-i; ++j) 
	{  
    if(people[j].price > people[j+1].price)  
       {  
					struct NamePrice temp;
					temp = people[j];
					people[j] = people[j+1];
					people[j+1] = temp;
       }  
   }  
}
	
for(i = 0;i < 4;i ++)
	std::cout << people[i].name << ":" << people[i].price << std::endl; 

return 0;
	}


	
