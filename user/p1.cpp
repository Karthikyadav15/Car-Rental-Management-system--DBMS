#include<iostream.h>
using namespace std;
int main(){
int fact=1 , num;
cout<<" enter the value of number";
cin>>num;
if (num==0)
cout<<" 1 ";
for(int i=1; i<=num; i++)
 fact=fact*i;
 cout<<fact;
 }