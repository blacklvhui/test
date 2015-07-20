#include<iostream>

struct NamePrice
{
	char name[20];
	double price;
};

NamePrice InputName()
{
	NamePrice a;
	std::cin >> a.name;
	a.price = 0;
	return a;
} // NamePrice InputName()

int PrintNamePrice(NamePrice a)
{
	std::cout << a.name << a.price << std::endl;
	return 0;
}


int main()
{	
	double Nprice=1;
	int PeoNum=0;
	double Eprice=0;
	int i=0;
	int j=0;
	int choose;

	NamePrice people[10]={0};
	

#pragma mark - Add people
	
	int number = 1;
	do
	{
		std::cout << "input 1 to add a people or input 0 to next step" << std::endl ;
		std::cin >> i;
		if(0 == i)
			break;
		std::cout << "Please input the " << number << " people's name : " << std::endl;

		people[number-1] = InputName();

		number++;
	} while (1);


#pragma mark - Count pirce

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
			for (int i = 0; i < number-1; i++)
					{
						std::cout << i+1 << "==>" << people[i].name << std::endl;
					}
			std::cin >> choose;
			people[choose-1].price += Nprice;

		}
		else
		{
			
			Eprice = Nprice / PeoNum;		
			for(j = 0;j < PeoNum;j ++)
			{
					std::cout << "Please choose they name :" << std::endl;
					for (int i = 0; i < number-1; i++)
					{
						std::cout << i+1 << "==>" << people[i].name << std::endl;
					}
					std::cin >> choose;
					people[choose-1].price += Eprice;
			}
		}
	}

for(i =0 ; i< number-2; ++i) 
	{  
	 for(j = 0; j < number-i-2; ++j) 
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

	
for(i = 0;i < number-1;i ++)
	std::cout << people[i].name << ":" << people[i].price << std::endl; 

return 0;
	}


	
