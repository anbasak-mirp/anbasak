#include <iostream>
using namespace std;
int main()
{
cout <<"Enter marks out of 100";
int marks;int a,b,c;
cin >>marks;
cout <<"Enter cutoff marks"<<endl;
cout <<"For A:";
cin >>a;
cout <<"For B:";
cin >>b;
cout <<"For C:";
cin >>c;
if(marks>=a)
cout <<"GRADE: A"<<endl;
if((marks>=b)&&(marks<a))
cout <<"GRADE: B"<<endl;
if((marks>=c)&&(marks<b))
cout <<"GRADE: C"<<endl;
return 0;
}

