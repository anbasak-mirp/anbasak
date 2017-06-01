#include <iostream>
using namespace std;
int main()
{
cout <<"Enter the number of numbers" <<endl;
int N;double n;double sum=0;
cin >>N;
for(int i=0;i<N;i++)
{
cin >>n;
sum+=n;
}
cout <<"The average of the numbers=" <<sum/N <<endl;
return 0;
}
