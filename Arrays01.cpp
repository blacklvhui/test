#include<iostream>

int main()
{
int billy[]={16,2,77,40,12071};
int n,m,a;	
	
	for(n=0;n<5;n++)
		{
		for(m=1;m<5;m++)
			{if(billy[n]>billy[m])
				a=billy[n];
				std::cout<<a;
				std::cout<<'\n';}
		}
	
	
return 0;
}
