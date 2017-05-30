#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c;int x=0;
cout <<"Enter the constants"<<endl;
cout <<"1st constant"<<endl;
cin >>a;
cout <<"2nd constant"<<endl;
cin >>b;
cout <<"3rd constant"<<endl;
cin >>c;
if(b*b-4*a*c>0)
cout <<"Roots are real and distinct"<<endl;
if(b*b-4*a*c==0)
cout <<"Roots are real and equal"<<endl;
if(b*b-4*a*c<0)
cout <<"Roots are not real"<<endl;
x=((-b)+sqrt(b*b-4*a*c))/2*a;
cout <<"Root="<<x<<endl;
x=((-b)-sqrt(b*b-4*a*c))/2*a;
cout <<"Root="<<x<<endl;
return 0;
}


