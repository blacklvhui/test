#include <iostream>
using namespace std;
struct Person //声明结构体类型Person
{
   char name[20];
   int count;
};
int main( )
{
   //定义Person类型的数组，内容为3个候选人的姓名和当前的得票数
   Person leader[3]={"Li",0,"Zhang",0,"Fun",0};
   int i,j;
   char leader_name[20]; //leader_name为投票人所选的人的姓名
   for(i=0;i<10;i++)
   {
      cin>>leader_name; //先后输入10张票上所写的姓名
      for(j=0;j<3;j++) //将票上姓名与3个候选人的姓名比较
         //如果与某一候选人的姓名相同，就给他加一票
         if(strcmp(leader_name,leader[j].name)==0) leader[j].count++;
   }
   cout<<endl;
   for(i=0;i<3;i++) //输出3个候选人的姓名与最后得票数
   {
      cout<<leader[i].name<<":"<<leader[i].count<<endl;
   }
   return 0;
}
