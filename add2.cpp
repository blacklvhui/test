#include<iostream>

int main()
{
int f[20];
int i;
int a;
int sum;
for(i=0;i<=19&&a != 0;i++)
{
	std::cin>>a;
	f[i]=a;
	sum+=f[i];
}
	std::cout<<sum;
return 0;

}
