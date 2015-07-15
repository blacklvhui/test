#include<iostream>

void printarray(int arg[],int lenght)
{
for(int n=0;n<lenght;n++)
	{
	std::cout<<arg[n]<<" 	";
	}
std::cout<<"\n";
}

int main()
{
int firstarray[]={5,10,15};
int secondarray[]={2,4,6,8,10};
printarray(firstarray,3);
printarray(secondarray,5);

return 0;
}
