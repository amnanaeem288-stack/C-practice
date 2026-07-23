#include<iostream> 
#include<cmath>
using namespace std;
int main ()
{
	double a,b,c,s,area;

cout<<"enter the sides of triangle (a,b,c) :";
cin>>a >> b >> c;
	
	s= (a + b + c)/2;
	area =sqrt(s * (s-a) * (s-b) * (s-c) );
	
	cout<<"area of triangle = "<<area<<endl;
	
	
	return 0;
}
