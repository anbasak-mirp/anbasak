#include <iostream>
using namespace std;
int main()
{
int l;int s;
int n;int N;
cout <<"Enter number of numbers" <<endl;
cin >>N;
for(int i=0;i<N;i++)
{
cin >>n;
if(i==0)
{
l=n;
s=n; 
continue;
}
if(n>l)
l=n;
if(n<s)
s=n;
}
cout <<"The largest number=" <<l <<endl; 
cout <<"The smallest number=" <<s <<endl;
return 0;
}

