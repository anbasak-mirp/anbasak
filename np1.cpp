#include <iostream>
using namespace std;
int main()
{
cout<<"Enter 4 integers";
int a,b,c,d;
cin >>a;
cin >>b;
cin >>c;
cin >>d;
int l=a,sl=a;
if(l<b)
l=b;
if(l<c)
l=c;
if(l<d)
l=d;
cout <<"The largest number="<<l<<endl;
if(l==a)
a=d;
if(l==b)
b=d;
if(l==c)
c=d;
if(sl<b)
sl=b;
if(sl<c)
sl=c;
cout <<"The second largest number="<<sl<<endl;
return 0;
}

